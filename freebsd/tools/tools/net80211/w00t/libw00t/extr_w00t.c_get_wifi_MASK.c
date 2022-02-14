
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211_radiotap_header {int it_len; int it_present; } ;
struct bpf_hdr {int bh_hdrlen; int bh_caplen; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void *FUNC_3(void *VAR_4, int *VAR_5)
{

 struct bpf_hdr* VAR_6 = (struct bpf_hdr*) VAR_4;
 struct ieee80211_radiotap_header* VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9;
 void *VAR_10;


 *VAR_5 -= VAR_6->bh_hdrlen;

 if (VAR_6->bh_caplen != *VAR_5) {
  FUNC_1(VAR_6->bh_caplen < *VAR_5);
  *VAR_5 = VAR_6->bh_caplen;
 }
 FUNC_1(VAR_6->bh_caplen == *VAR_5);


 VAR_7 = (struct ieee80211_radiotap_header*)
       ((char*)VAR_6 + VAR_6->bh_hdrlen);


 VAR_8 = FUNC_2(VAR_7->it_present);
 if (VAR_8 & (1<<(VAR_1))) {
  if (VAR_8 & (1<<(VAR_3)))
   VAR_9 = ((const uint8_t *)VAR_7)[8];
  else
   VAR_9 = ((const uint8_t *)VAR_7)[0];
 } else
  VAR_9 = 0;
 *VAR_5 -= VAR_7->it_len;


 if (VAR_9 & VAR_2)
  *VAR_5 -= VAR_0;

 VAR_10 = (char*)VAR_7 + VAR_7->it_len;
 return VAR_10;

}
