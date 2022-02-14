
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_alternate_setup {char const* submodule_name; int error_mode; struct string_list* reference; } ;
struct string_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct submodule_alternate_setup VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct submodule_alternate_setup*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_5,
  struct string_list *VAR_6)
{
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct submodule_alternate_setup VAR_9 = VAR_3;

 FUNC_4("submodule.alternateLocation", &VAR_7);
 if (!VAR_7)
  return;

 FUNC_4("submodule.alternateErrorStrategy", &VAR_8);

 if (!VAR_8)
  VAR_8 = FUNC_6("die");

 VAR_9.submodule_name = VAR_5;
 VAR_9.reference = VAR_6;
 if (!FUNC_5(VAR_8, "die"))
  VAR_9.error_mode = VAR_0;
 else if (!FUNC_5(VAR_8, "info"))
  VAR_9.error_mode = VAR_2;
 else if (!FUNC_5(VAR_8, "ignore"))
  VAR_9.error_mode = VAR_1;
 else
  FUNC_1(FUNC_0("Value '%s' for submodule.alternateErrorStrategy is not recognized"), VAR_8);

 if (!FUNC_5(VAR_7, "superproject"))
  FUNC_2(VAR_4, &VAR_9);
 else if (!FUNC_5(VAR_7, "no"))
  ;
 else
  FUNC_1(FUNC_0("Value '%s' for submodule.alternateLocation is not recognized"), VAR_7);

 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
}
