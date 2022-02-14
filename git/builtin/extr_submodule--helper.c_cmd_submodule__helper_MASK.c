
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmd; int option; int (* fn ) (int,char const**,char const*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int,char const**,char const*) ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 int VAR_5;
 if (VAR_2 < 2 || !FUNC_4(VAR_3[1], "-h"))
  FUNC_6("git submodule--helper <command>");

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (!FUNC_4(VAR_3[1], VAR_1[VAR_5].cmd)) {
   if (FUNC_3() &&
       !(VAR_1[VAR_5].option & VAR_0))
    FUNC_2(FUNC_1("%s doesn't support --super-prefix"),
        VAR_1[VAR_5].cmd);
   return VAR_1[VAR_5].fn(VAR_2 - 1, VAR_3 + 1, VAR_4);
  }
 }

 FUNC_2(FUNC_1("'%s' is not a valid submodule--helper "
       "subcommand"), VAR_3[1]);
}
