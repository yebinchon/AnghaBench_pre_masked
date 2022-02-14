
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfil_hook_args {int pa_flags; char* pa_modname; char* pa_rulname; int pa_type; void* pa_func; int * pa_ruleset; int pa_version; } ;
typedef int pfil_hook_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (struct pfil_hook_args*) ;

__attribute__((used)) static void
FUNC_1(int VAR_12)
{
 struct pfil_hook_args VAR_13;
 pfil_hook_t *VAR_14;

 VAR_13.pa_version = VAR_6;
 VAR_13.pa_flags = VAR_0 | VAR_2;
 VAR_13.pa_modname = "ipfw";
 VAR_13.pa_ruleset = ((void*)0);

 switch (VAR_12) {
 case 130:
  VAR_13.pa_func = VAR_11;
  VAR_13.pa_type = VAR_4;
  VAR_13.pa_rulname = "default";
  VAR_14 = &VAR_8;
  break;
 case 128:
  VAR_13.pa_func = VAR_10;
  VAR_13.pa_type = VAR_3;
  VAR_13.pa_rulname = "default-link";
  VAR_13.pa_flags |= VAR_1;
  VAR_14 = &VAR_9;
  break;
 }

 *VAR_14 = FUNC_0(&VAR_13);
}
