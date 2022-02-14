
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum stack_type { ____Placeholder_stack_type } stack_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const** VAR_5 ;

const char *FUNC_1(enum stack_type VAR_6)
{
 FUNC_0(VAR_0 != 6);

 if (VAR_6 == VAR_4)
  return "IRQ";

 if (VAR_6 == VAR_1) {





  return "ENTRY_TRAMPOLINE";
 }

 if (VAR_6 >= VAR_2 && VAR_6 <= VAR_3)
  return VAR_5[VAR_6 - VAR_2];

 return ((void*)0);
}
