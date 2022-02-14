
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int auth; } ;
struct datalink {int name; } ;
struct cmdtab {int lauth; int (* func ) (struct cmdargs*) ;int syntax; } ;
struct cmdargs {int argc; int argn; char const* const* argv; struct prompt* prompt; struct datalink* cx; struct bundle* bundle; struct cmdtab const* cmd; struct cmdtab const* cmdtab; } ;
struct bundle {int dummy; } ;


 struct cmdtab* FUNC_0 (struct cmdtab const*,char const* const,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct datalink* FUNC_1 (struct bundle*,int *) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int,char const* const*,char*,int) ;
 int FUNC_4 (struct cmdargs*) ;

__attribute__((used)) static int
FUNC_5(struct bundle *VAR_3, struct cmdtab const *VAR_4, int VAR_5, int VAR_6,
         char const *const *VAR_7, struct prompt *VAR_8, struct datalink *VAR_9)
{
  struct cmdtab const *VAR_10;
  int VAR_11 = 1;
  int VAR_12;
  struct cmdargs VAR_13;
  char VAR_14[100];

  VAR_10 = FUNC_0(VAR_4, VAR_7[VAR_6], &VAR_12);
  if (VAR_12 > 1)
    FUNC_2(VAR_2, "%s: Ambiguous command\n",
              FUNC_3(VAR_6+1, VAR_7, VAR_14, sizeof VAR_14));
  else if (VAR_10 && (!VAR_8 || (VAR_10->lauth & VAR_8->auth))) {
    if ((VAR_10->lauth & VAR_0) && !VAR_9)

      VAR_9 = FUNC_1(VAR_3, ((void*)0));

    if ((VAR_10->lauth & VAR_0) && !VAR_9)
      FUNC_2(VAR_2, "%s: No context (use the `link' command)\n",
                FUNC_3(VAR_6+1, VAR_7, VAR_14, sizeof VAR_14));
    else {
      if (VAR_9 && !(VAR_10->lauth & (VAR_0|VAR_1))) {
        FUNC_2(VAR_2, "%s: Redundant context (%s) ignored\n",
                  FUNC_3(VAR_6+1, VAR_7, VAR_14, sizeof VAR_14), VAR_9->name);
        VAR_9 = ((void*)0);
      }
      VAR_13.cmdtab = VAR_4;
      VAR_13.cmd = VAR_10;
      VAR_13.argc = VAR_5;
      VAR_13.argn = VAR_6+1;
      VAR_13.argv = VAR_7;
      VAR_13.bundle = VAR_3;
      VAR_13.cx = VAR_9;
      VAR_13.prompt = VAR_8;
      VAR_11 = (*VAR_10->func) (&VAR_13);
    }
  } else
    FUNC_2(VAR_2, "%s: Invalid command\n",
              FUNC_3(VAR_6+1, VAR_7, VAR_14, sizeof VAR_14));

  if (VAR_11 == -1)
    FUNC_2(VAR_2, "usage: %s\n", VAR_10->syntax);
  else if (VAR_11)
    FUNC_2(VAR_2, "%s: Failed %d\n",
              FUNC_3(VAR_6+1, VAR_7, VAR_14, sizeof VAR_14), VAR_11);

  return VAR_11;
}
