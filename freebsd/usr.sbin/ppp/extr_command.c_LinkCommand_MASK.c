
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct datalink {struct datalink* next; } ;
struct cmdargs {int argc; int argn; TYPE_1__* cmd; int prompt; int * argv; TYPE_2__* bundle; } ;
struct TYPE_5__ {struct datalink* links; } ;
struct TYPE_4__ {char* syntax; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int,int,int *,int ,struct datalink*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct datalink* FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ,int) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(struct cmdargs const *VAR_3)
{
  if (VAR_3->argc > VAR_3->argn+1) {
    char VAR_4[VAR_1];
    struct datalink *VAR_5;
    char *VAR_6;
    int VAR_7 = 0;

    if (!FUNC_3(VAR_3->argv[VAR_3->argn], "*")) {
      struct datalink *VAR_8;

      VAR_5 = VAR_3->bundle->links;
      while (VAR_5) {

        VAR_8 = VAR_5->next;
        FUNC_0(VAR_3->bundle, VAR_0, VAR_3->argc, VAR_3->argn+1, VAR_3->argv,
                 VAR_3->prompt, VAR_5);
        for (VAR_5 = VAR_3->bundle->links; VAR_5; VAR_5 = VAR_5->next)
          if (VAR_5 == VAR_8)
            break;
      }
    } else {
      FUNC_4(VAR_4, VAR_3->argv[VAR_3->argn], sizeof VAR_4 - 1);
      VAR_4[sizeof VAR_4 - 1] = '\0';
      for(VAR_6 = FUNC_5(VAR_4, ", "); VAR_6; VAR_6 = FUNC_5(((void*)0),", "))
        if (!FUNC_1(VAR_3->bundle, VAR_6)) {
          FUNC_2(VAR_2, "link: %s: Invalid link name\n", VAR_6);
          return 1;
        }

      FUNC_4(VAR_4, VAR_3->argv[VAR_3->argn], sizeof VAR_4 - 1);
      VAR_4[sizeof VAR_4 - 1] = '\0';
      for(VAR_6 = FUNC_5(VAR_4, ", "); VAR_6; VAR_6 = FUNC_5(((void*)0),", ")) {
        VAR_5 = FUNC_1(VAR_3->bundle, VAR_6);
        if (VAR_5)
          FUNC_0(VAR_3->bundle, VAR_0, VAR_3->argc, VAR_3->argn+1, VAR_3->argv,
                   VAR_3->prompt, VAR_5);
        else {
          FUNC_2(VAR_2, "link: %s: Invalidated link name !\n", VAR_6);
          VAR_7++;
        }
      }
    }
    return VAR_7;
  }

  FUNC_2(VAR_2, "usage: %s\n", VAR_3->cmd->syntax);
  return 2;
}
