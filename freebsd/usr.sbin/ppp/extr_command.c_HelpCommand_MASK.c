
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdtab {char* name; char* alias; int lauth; char* helpmes; scalar_t__ func; int syntax; } ;
struct cmdargs {size_t argc; size_t argn; TYPE_1__* prompt; struct cmdtab* cmdtab; int * argv; } ;
struct TYPE_2__ {int auth; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 char* FUNC_2 (struct cmdtab const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct cmdargs const *VAR_1)
{
  struct cmdtab const *VAR_2;
  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
  const char *VAR_8;

  if (!VAR_1->prompt) {
    FUNC_0(VAR_0, "help: Cannot help without a prompt\n");
    return 0;
  }

  if (VAR_1->argc > VAR_1->argn) {
    for (VAR_2 = VAR_1->cmdtab; VAR_2->name || VAR_2->alias; VAR_2++)
      if ((VAR_2->lauth & VAR_1->prompt->auth) &&
          ((VAR_2->name && !FUNC_3(VAR_2->name, VAR_1->argv[VAR_1->argn])) ||
           (VAR_2->alias && !FUNC_3(VAR_2->alias, VAR_1->argv[VAR_1->argn])))) {
 FUNC_1(VAR_1->prompt, "%s %s\n", VAR_2->syntax, FUNC_2(VAR_2));
 return 0;
      }
    return -1;
  }

  VAR_4 = VAR_5 = 0;
  for (VAR_2 = VAR_1->cmdtab; VAR_2->func; VAR_2++)
    if (VAR_2->name && (VAR_2->lauth & VAR_1->prompt->auth)) {
      if ((VAR_3 = FUNC_4(VAR_2->name) + FUNC_4(FUNC_2(VAR_2))) > VAR_4)
        VAR_4 = VAR_3;
      if ((VAR_3 = FUNC_4(VAR_2->helpmes)) > VAR_5)
        VAR_5 = VAR_3;
    }

  VAR_6 = 80 / (VAR_5 + VAR_4 + 3);
  VAR_3 = 0;
  FUNC_1(VAR_1->prompt, "(o) = Optional context,"
                " (c) = Context required\n");
  for (VAR_2 = VAR_1->cmdtab; VAR_2->func; VAR_2++)
    if (VAR_2->name && (VAR_2->lauth & VAR_1->prompt->auth)) {
      VAR_8 = FUNC_2(VAR_2);
      VAR_7 = VAR_4 - FUNC_4(VAR_2->name);
      if (VAR_3 % VAR_6 != 0)
        FUNC_1(VAR_1->prompt, " ");
      FUNC_1(VAR_1->prompt, "%s%-*.*s: %-*.*s",
              VAR_2->name, VAR_7, VAR_7, VAR_8, VAR_5, VAR_5, VAR_2->helpmes);
      if (++VAR_3 % VAR_6 == 0)
        FUNC_1(VAR_1->prompt, "\n");
    }
  if (VAR_3 % VAR_6 != 0)
    FUNC_1(VAR_1->prompt, "\n");

  return 0;
}
