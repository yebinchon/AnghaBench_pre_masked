
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int mac; int rx; } ;
struct ieee80211_frame {int* i_fc; int i_addr2; } ;
typedef int buf ;




 int VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (struct params*,struct ieee80211_frame*) ;
 scalar_t__ FUNC_2 (struct params*,struct ieee80211_frame*,int) ;
 int FUNC_3 (int,char*) ;
 struct ieee80211_frame* FUNC_4 (char*,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct params*,struct ieee80211_frame*,int) ;
 int FUNC_8 (struct params*,struct ieee80211_frame*,int) ;
 int FUNC_9 (struct params*,struct ieee80211_frame*,int) ;
 int FUNC_10 (int ,char*,int) ;

void FUNC_11(struct params *VAR_1)
{
 char VAR_2[4096];
 int VAR_3;
 struct ieee80211_frame *VAR_4;

 VAR_3 = FUNC_10(VAR_1->rx, VAR_2, sizeof(VAR_2));
 if (VAR_3 == -1)
  FUNC_3(1, "sniff()");

 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 if (!VAR_4)
  return;


 if (FUNC_5(VAR_4->i_addr2, VAR_1->mac, 6) == 0) {

  if ((VAR_4->i_fc[0] & VAR_0) !=
      130)
   return;
 }


 FUNC_1(VAR_1, VAR_4);


 if (FUNC_2(VAR_1, VAR_4, VAR_3)) {



  return;
 }

 switch (VAR_4->i_fc[0] & VAR_0) {
 case 128:
  FUNC_9(VAR_1, VAR_4, VAR_3);
  break;

 case 130:
  FUNC_7(VAR_1, VAR_4, VAR_3);
  break;

 case 129:
  FUNC_8(VAR_1, VAR_4, VAR_3);
  break;

 default:
  FUNC_6("wtf\n");
  FUNC_0();
  break;
 }
}
