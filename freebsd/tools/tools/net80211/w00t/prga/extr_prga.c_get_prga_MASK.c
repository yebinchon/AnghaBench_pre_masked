
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wh ;
struct params {char* prga; int prga_len; int iv; int ap; int rx; } ;
struct ieee80211_frame {int* i_fc; char* i_addr1; char* i_addr2; } ;
typedef int buf ;


 int IEEE80211_FC0_SUBTYPE_DATA ;
 int IEEE80211_FC0_TYPE_DATA ;
 int IEEE80211_FC1_DIR_TODS ;
 int IEEE80211_FC1_PROTECTED ;
 int assert (int) ;
 int err (int,char*) ;
 int frame_type (struct ieee80211_frame*,int ,int ) ;
 struct ieee80211_frame* get_wifi (char*,int*) ;
 scalar_t__ is_arp (struct ieee80211_frame*,int) ;
 char* known_pt_arp ;
 char* known_pt_ip ;
 int known_pt_len ;
 scalar_t__ memcmp (int ,char*,int) ;
 int memcpy (int ,char*,int) ;
 int printf (char*) ;
 int save_prga (struct params*) ;
 int sniff (int ,char*,int) ;

void get_prga(struct params *p)
{
 char buf[4096];
 int rc;
        struct ieee80211_frame *wh;
 char *bssid;
 char *ptr;
 char *known_pt;

        rc = sniff(p->rx, buf, sizeof(buf));
        if (rc == -1)
                err(1, "sniff()");

        wh = get_wifi(buf, &rc);
        if (!wh)
                return;

 if (!frame_type(wh, IEEE80211_FC0_TYPE_DATA,
   IEEE80211_FC0_SUBTYPE_DATA))
  return;

 if (is_arp(wh, rc))
  known_pt = known_pt_arp;
 else
  known_pt = known_pt_ip;

 if (wh->i_fc[1] & IEEE80211_FC1_DIR_TODS)
  bssid = wh->i_addr1;
 else
  bssid = wh->i_addr2;

 if (memcmp(p->ap, bssid, 6) != 0)
  return;

 if (!(wh->i_fc[1] & IEEE80211_FC1_PROTECTED)) {
  printf("Packet not WEP!\n");
  return;
 }

 ptr = (char*) (wh+1);
 memcpy(p->iv, ptr, 3);
 ptr += 4;
 rc -= sizeof(wh) + 4;

 assert(rc >= known_pt_len);

 for (rc = 0; rc < known_pt_len; rc++) {
  p->prga[rc] = known_pt[rc] ^ (*ptr);
  ptr++;
 }

 p->prga_len = rc;
 save_prga(p);
}
