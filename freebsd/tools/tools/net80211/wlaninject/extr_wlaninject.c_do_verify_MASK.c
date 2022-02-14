
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211_radiotap_header {int it_len; int it_present; } ;
struct ieee80211_frame {int dummy; } ;
struct bpf_hdr {int bh_hdrlen; int bh_caplen; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ieee80211_frame*,struct ieee80211_frame*,int) ;
 int FUNC_5 (struct ieee80211_frame*,int,struct ieee80211_frame*,int) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(struct ieee80211_frame *VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{

 struct bpf_hdr *VAR_8 = VAR_6;
 struct ieee80211_frame *VAR_9;
 struct ieee80211_radiotap_header *VAR_10;
 int VAR_11;
 unsigned char *VAR_12, *VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;


 VAR_7 -= VAR_8->bh_hdrlen;
 FUNC_2(VAR_7 > 0);
 if (VAR_8->bh_caplen != VAR_7) {
  FUNC_1();
 }
 VAR_10 = (struct ieee80211_radiotap_header*)
       ((char*) VAR_8 + VAR_8->bh_hdrlen);
 VAR_7 -= VAR_10->it_len;
 FUNC_2(VAR_7 > 0);
 VAR_9 = (struct ieee80211_frame*) ((char*)VAR_10 + VAR_10->it_len);


 VAR_14 = FUNC_3(VAR_10->it_present);
 if (VAR_14 & (1<<(VAR_1))) {
  if (VAR_14 & (1<<(VAR_3)))
   VAR_15 = ((const uint8_t *)VAR_10)[8];
  else
   VAR_15 = ((const uint8_t *)VAR_10)[0];
 } else
  VAR_15 = 0;
 if (VAR_15 & VAR_2)
  VAR_7 -= VAR_0;
 FUNC_2(VAR_7 > 0);


 if (!FUNC_5(VAR_4, VAR_5, VAR_9, VAR_7))
  return 0;


 if (FUNC_4(VAR_4, VAR_9, VAR_5) == 0) {
  FUNC_6("No mangling---got it perfect\n");
  return 1;
 }


 FUNC_6("Got mangled:\n");
 VAR_12 = (unsigned char*) VAR_4;
 VAR_13 = (unsigned char *) VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++, VAR_12++, VAR_13++) {
  if (*VAR_12 != *VAR_13)
   FUNC_6("Position: %d Was: %.2X Got: %.2X\n",
          VAR_11, *VAR_12, *VAR_13);
 }
 return -1;

}
