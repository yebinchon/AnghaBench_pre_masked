
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(suspend_state_t VAR_1)
{
 switch (VAR_1) {
 case 128:
  FUNC_0();
  break;
 case 129:
  FUNC_2("Entering suspend to RAM. Only special wake-up sources will resume the system\n");
  return FUNC_1();
 default:
  return -VAR_0;
 }
 return 0;
}
