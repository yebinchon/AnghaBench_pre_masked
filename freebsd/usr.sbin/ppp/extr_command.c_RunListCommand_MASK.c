
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdargs {int argc; char** argv; int argn; scalar_t__ prompt; int cx; TYPE_1__* cmd; int bundle; } ;
struct TYPE_2__ {scalar_t__ args; } ;


 int FUNC_0 (int ,scalar_t__,int,int,char**,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 char FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_2)
{
  const char *VAR_3 = VAR_2->argc ? VAR_2->argv[VAR_2->argc - 1] : "???";


  if (VAR_2->cmd->args == VAR_1 &&
      FUNC_3(*VAR_2->argv[VAR_2->argn - 1]) == 'a') {
    if (VAR_2->prompt)
      FUNC_2(VAR_2->prompt, "The alias command is deprecated\n");
    else
      FUNC_1(VAR_0, "The alias command is deprecated\n");
  }


  if (VAR_2->argc > VAR_2->argn)
    FUNC_0(VAR_2->bundle, VAR_2->cmd->args, VAR_2->argc, VAR_2->argn, VAR_2->argv,
             VAR_2->prompt, VAR_2->cx);
  else if (VAR_2->prompt)
    FUNC_2(VAR_2->prompt, "Use `%s help' to get a list or `%s help"
                  " <option>' for syntax help.\n", VAR_3, VAR_3);
  else
    FUNC_1(VAR_0, "%s command must have arguments\n", VAR_3);

  return 0;
}
