
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmdargs {int argn; int argc; char** argv; TYPE_2__* bundle; int cx; int prompt; } ;
struct TYPE_4__ {int all; } ;
struct TYPE_5__ {TYPE_1__ phys_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 char* FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_2)
{
  const char *VAR_3;
  int VAR_4, VAR_5;

  VAR_5 = VAR_2->bundle->phys_type.all;

  if (VAR_2->argn < VAR_2->argc) {
    for (VAR_4 = VAR_2->argn; VAR_4 < VAR_2->argc; VAR_4++)
      if ((VAR_3 = FUNC_2(VAR_2->argv[VAR_4], VAR_2->prompt, VAR_5)) != ((void*)0)) {
        FUNC_1(VAR_1, "%s: %s\n", VAR_2->argv[VAR_4], VAR_3);
        return 1;
      }

    for (VAR_4 = VAR_2->argn; VAR_4 < VAR_2->argc; VAR_4++) {
      FUNC_0(VAR_2->bundle, VAR_2->argv[VAR_2->argc - 1]);
      FUNC_3(VAR_2->bundle, VAR_2->argv[VAR_4], VAR_0, VAR_2->prompt, VAR_2->cx);
    }
    FUNC_0(VAR_2->bundle, VAR_2->argv[VAR_2->argc - 1]);
  } else if ((VAR_3 = FUNC_2("default", VAR_2->prompt, VAR_5)) != ((void*)0)) {
    FUNC_1(VAR_1, "default: %s\n", VAR_3);
    return 1;
  } else {
    FUNC_0(VAR_2->bundle, "default");
    FUNC_3(VAR_2->bundle, "default", VAR_0, VAR_2->prompt, VAR_2->cx);
    FUNC_0(VAR_2->bundle, "default");
  }

  return 0;
}
