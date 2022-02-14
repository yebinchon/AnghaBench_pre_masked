
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_parallel_fetch {scalar_t__ command_line_option; int default_option; int r; } ;
struct submodule {int fetch_recurse; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*,char const**) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(const struct submodule *VAR_2,
        struct submodule_parallel_fetch *VAR_3)
{
 if (VAR_3->command_line_option != VAR_0)
  return VAR_3->command_line_option;

 if (VAR_2) {
  char *VAR_4;
  const char *VAR_5;

  int VAR_6 = VAR_2->fetch_recurse;
  VAR_4 = FUNC_3("submodule.%s.fetchRecurseSubmodules", VAR_2->name);
  if (!FUNC_2(VAR_3->r, VAR_4, &VAR_5)) {
   VAR_6 = FUNC_1(VAR_4, VAR_5);
  }
  FUNC_0(VAR_4);

  if (VAR_6 != VAR_1)

   return VAR_6;
 }

 return VAR_3->default_option;
}
