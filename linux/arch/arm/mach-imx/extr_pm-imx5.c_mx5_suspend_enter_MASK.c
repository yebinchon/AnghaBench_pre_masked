
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(suspend_state_t VAR_7)
{
 switch (VAR_7) {
 case 129:
  FUNC_5(VAR_4);
  break;
 case 128:

  break;
 default:
  return -VAR_0;
 }

 if (VAR_7 == 129) {
  FUNC_4();
  FUNC_1();


  FUNC_3(0, VAR_5 + VAR_2);
  FUNC_3(0, VAR_5 + VAR_3);

  if (&FUNC_2)
   FUNC_2(VAR_6);
  else
   FUNC_0();

 } else {
  FUNC_0();
 }


 FUNC_5(VAR_1);
 return 0;
}
