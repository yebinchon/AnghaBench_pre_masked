
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_multi {scalar_t__ inm_timer; int inm_state; } ;







 int FUNC_0 () ;





 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct in_multi*,int ) ;

__attribute__((used)) static void
FUNC_3(struct in_multi *VAR_4, const int VAR_5)
{
 int VAR_6;

 FUNC_1();
 FUNC_0();

 if (VAR_4->inm_timer == 0) {
  VAR_6 = 0;
 } else if (--VAR_4->inm_timer == 0) {
  VAR_6 = 1;
 } else {
  VAR_3 = 1;
  return;
 }

 switch (VAR_4->inm_state) {
 case 132:
 case 129:
 case 135:
 case 134:
 case 128:
 case 137:
  break;
 case 131:
  if (VAR_6) {
   VAR_4->inm_state = 135;
   (void)FUNC_2(VAR_4,
       (VAR_5 == VAR_0) ?
        VAR_2 :
        VAR_1);
  }
  break;
 case 136:
 case 130:
 case 133:
  break;
 }
}
