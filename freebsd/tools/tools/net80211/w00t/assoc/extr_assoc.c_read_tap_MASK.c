
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* packet; int packet_len; char wep_iv; int wep_len; int wep_key; int tap; } ;
struct ieee80211_frame {char* i_addr3; int * i_fc; } ;
typedef int mac ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_frame*,struct params*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct ieee80211_frame*,int,int ,int ) ;

void FUNC_6(struct params *VAR_3)
{
 char *VAR_4;
 int VAR_5 = sizeof(VAR_3->packet);
 int VAR_6;
 char VAR_7[6];
 struct ieee80211_frame *VAR_8;

 VAR_4 = VAR_3->packet;
 VAR_6 = sizeof(struct ieee80211_frame) + 8 - 14;
 if (VAR_3->wep_len)
  VAR_6 += 4;

 VAR_4 += VAR_6;
 VAR_5 -= VAR_6;


 FUNC_3(VAR_3->packet, 0, sizeof(VAR_3->packet));
 VAR_3->packet_len = FUNC_4(VAR_3->tap, VAR_4, VAR_5);
 if (VAR_3->packet_len == -1)
  FUNC_0(1, "read()");


 VAR_8 = (struct ieee80211_frame*) VAR_3->packet;
 FUNC_2(VAR_7, VAR_4, sizeof(VAR_7));
 FUNC_1(VAR_8, VAR_3);
 FUNC_2(VAR_8->i_addr3, VAR_7, sizeof(VAR_8->i_addr3));
 VAR_8->i_fc[0] |= VAR_0;
 VAR_8->i_fc[1] |= VAR_1;
 if (VAR_3->wep_len)
  VAR_8->i_fc[1] |= VAR_2;


 VAR_4 = (char*) (VAR_8+1);
 if (VAR_3->wep_len)
  VAR_4 += 4;
 *VAR_4++ = 0xAA;
 *VAR_4++ = 0xAA;
 *VAR_4++ = 0x03;
 *VAR_4++ = 0x00;
 *VAR_4++ = 0x00;
 *VAR_4++ = 0x00;


 VAR_3->packet_len += VAR_6;


 if (VAR_3->wep_len) {
  VAR_4 = (char*) (VAR_8+1);
  FUNC_2(VAR_4, &VAR_3->wep_iv, 3);
  VAR_4[3] = 0;
  VAR_3->wep_iv++;

  FUNC_5(VAR_8, VAR_3->packet_len, VAR_3->wep_key, VAR_3->wep_len);
  VAR_3->packet_len += 4;
 }
}
