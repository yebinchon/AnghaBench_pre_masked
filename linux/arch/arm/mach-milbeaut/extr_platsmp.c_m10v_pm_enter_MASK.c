
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;




 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(suspend_state_t VAR_1)
{
 switch (VAR_1) {
 case 128:
  asm("wfi");
  break;
 case 129:
  FUNC_0();
  FUNC_2(0, VAR_0);
  FUNC_1();
  break;
 }
 return 0;
}
