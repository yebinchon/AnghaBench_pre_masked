
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum stack_type { ____Placeholder_stack_type } stack_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

const char *FUNC_0(enum stack_type VAR_3)
{
 if (VAR_3 == VAR_1)
  return "IRQ";

 if (VAR_3 == VAR_2)
  return "SOFTIRQ";

 if (VAR_3 == VAR_0)
  return "ENTRY_TRAMPOLINE";

 return ((void*)0);
}
