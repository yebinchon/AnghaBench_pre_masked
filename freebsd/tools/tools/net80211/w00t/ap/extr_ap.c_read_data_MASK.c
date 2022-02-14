
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int dummy; } ;
struct ieee80211_frame {int* i_fc; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_3(struct params *VAR_2, struct ieee80211_frame *VAR_3, int VAR_4)
{
 switch (VAR_3->i_fc[0] & VAR_0) {
 case 129:
  FUNC_2(VAR_2, VAR_3, VAR_4);
  break;

 case 128:
  break;

 default:
  FUNC_1("wtf %d\n", (VAR_3->i_fc[0] & VAR_0) >>
       VAR_1);
  FUNC_0();
  break;
 }
}
