
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int mac; } ;
struct ieee80211_frame {int i_addr2; int i_addr1; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct params*,int ) ;

void FUNC_5(struct params *VAR_0, struct ieee80211_frame *VAR_1, int VAR_2)
{
 unsigned short *VAR_3;
 char VAR_4[6*3];

 if (FUNC_2(VAR_1->i_addr1, VAR_0->mac, 6) != 0)
  return;

 VAR_3 = (unsigned short*) (VAR_1+1);
 if (FUNC_0(*VAR_3) != 0) {
  FUNC_3("Unknown auth algo %d\n", FUNC_0(*VAR_3));
  return;
 }
 VAR_3++;
 if (FUNC_0(*VAR_3) == 1) {
  FUNC_1(VAR_4, VAR_1->i_addr2);
  FUNC_3("Got auth from %s\n", VAR_4);
  FUNC_4(VAR_0, VAR_1->i_addr2);
 } else {
  FUNC_3("Weird seq in auth %d\n", FUNC_0(*VAR_3));
 }
}
