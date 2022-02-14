
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* ssid; } ;
struct ieee80211_frame {int i_addr2; } ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct params*,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,char*) ;

void FUNC_4(struct params *VAR_0, struct ieee80211_frame *VAR_1, int VAR_2)
{
 unsigned char *VAR_3;
 unsigned char *VAR_4;
 unsigned char VAR_5[6*3];

 VAR_3 = (unsigned char*) (VAR_1+1);


 if (*VAR_3 != 0) {
  FUNC_1("weird pr %x\n", *VAR_3);
  return;
 }
 VAR_3++;

 VAR_4 = VAR_3 + (*VAR_3) + 1;
 *VAR_4 = 0;
 VAR_3++;

 FUNC_0(VAR_5, VAR_1->i_addr2);
 FUNC_1("Probe request for [%s] from %s\n", VAR_3, VAR_5);

 if ((FUNC_3(VAR_3, "") == 0) || (FUNC_3(VAR_3, VAR_0->ssid) == 0))
  FUNC_2(VAR_0, VAR_1->i_addr2);
}
