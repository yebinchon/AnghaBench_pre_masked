
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfil_link_args {void* pa_hook; void* pa_head; void* pa_flags; void* pa_version; } ;
struct pfil_hook_args {char* pa_modname; char* pa_rulname; void* pa_flags; int pa_func; int pa_type; int * pa_ruleset; void* pa_version; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (struct pfil_hook_args*) ;
 int FUNC_1 (struct pfil_link_args*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct pfil_hook_args VAR_18;
 struct pfil_link_args VAR_19;

 if (VAR_13)
  return (0);

 VAR_18.pa_version = VAR_6;
 VAR_18.pa_modname = "pf";
 VAR_18.pa_ruleset = ((void*)0);

 VAR_19.pa_version = VAR_6;
 VAR_13 = 1;
 return (0);
}
