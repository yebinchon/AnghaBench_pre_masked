
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct node_info {int signal; } ;
struct ieee80211_radiotap_header {int it_len; int it_present; } ;
struct ieee80211_frame {int dummy; } ;
typedef int int8_t ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_frame*,char*,int,struct node_info*) ;
 int FUNC_3 (int,int,char*,int) ;
 int FUNC_4 (struct node_info*) ;

void FUNC_5(unsigned char* VAR_0, int VAR_1) {
 struct ieee80211_radiotap_header* VAR_2;
 struct ieee80211_frame* VAR_3;
 char* VAR_4;
 struct node_info VAR_5;
 int8_t VAR_6, VAR_7;
 uint8_t VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 VAR_1 -= 4;


 VAR_2 = (struct ieee80211_radiotap_header*) VAR_0;


 VAR_3 = (struct ieee80211_frame*)
      ((char*)VAR_2 + VAR_2->it_len);
        VAR_1 -= VAR_2->it_len;

 FUNC_1 (VAR_1 >= 0);


 VAR_4 = (char*) VAR_3 + sizeof(*VAR_3);
 VAR_1 -= sizeof(*VAR_3);

 if (!FUNC_2(VAR_3, VAR_4, VAR_1, &VAR_5))
  return;


 VAR_4 = (char*) VAR_2 + sizeof(*VAR_2);
 VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;

 for (VAR_12 = 128; VAR_12 <= 132; VAR_12++) {
  if (!(VAR_2->it_present & (1 << VAR_12)))
   continue;

  switch (VAR_12) {
  case 128:
   VAR_4 += sizeof(uint64_t);
   break;

  case 130:
  case 129:
   VAR_4 += sizeof(uint8_t);
   break;

  case 137:
   VAR_4 += sizeof(uint16_t)*2;
   break;

  case 131:
   VAR_4 += sizeof(uint16_t);
   break;

  case 135:
   VAR_6 = *VAR_4;
   VAR_4++;
   VAR_10 = 1;
   break;

  case 136:
   VAR_7 = *VAR_4;
   VAR_4++;
   break;

  case 133:
   VAR_8 = *((unsigned char*)VAR_4);
   VAR_4++;
   break;

  case 134:
   VAR_9 = *((unsigned char*)VAR_4);
   VAR_4++;
   break;

  case 132:
   FUNC_0();
   break;
  }
 }
 if (VAR_10) {
  VAR_11 = VAR_6 - VAR_7;
 }
 else {
  VAR_11 = VAR_8 - VAR_9;
 }
 if (VAR_11 < 0)
  VAR_11 = 0;

 VAR_5.signal = VAR_11;





 FUNC_1 (VAR_5.signal <= 100 && VAR_5.signal >= 0);


 FUNC_4(&VAR_5);
}
