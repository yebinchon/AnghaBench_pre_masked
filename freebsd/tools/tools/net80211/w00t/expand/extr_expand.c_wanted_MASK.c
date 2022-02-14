
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* ap; char* mac; } ;
struct ieee80211_frame {int* i_fc; char* i_addr1; char* i_addr2; char* i_addr3; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct params *VAR_2, struct ieee80211_frame *VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;

 if (VAR_3->i_fc[1] & VAR_0) {
  VAR_5 = VAR_3->i_addr1;
  VAR_6 = VAR_3->i_addr2;
 }
 else {
  VAR_5 = VAR_3->i_addr2;
  VAR_6 = VAR_3->i_addr3;
 }

 if (FUNC_0(VAR_5, VAR_2->ap, 6) != 0)
  return 0;

 if (!(VAR_3->i_fc[1] & VAR_1)) {
  FUNC_1("Got non WEP packet...\n");
  return 0;
 }


 if (FUNC_0(VAR_2->mac, VAR_6, 6) == 0)
  return 0;

 return 1;
}
