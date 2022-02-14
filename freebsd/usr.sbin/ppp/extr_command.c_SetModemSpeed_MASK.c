
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdargs {int argc; int argn; scalar_t__** argv; TYPE_1__* cx; } ;
struct TYPE_2__ {int physical; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,char*) ;
 long FUNC_4 (scalar_t__*,char**,int) ;

__attribute__((used)) static int
FUNC_5(struct cmdargs const *VAR_1)
{
  long VAR_2;
  char *VAR_3;

  if (VAR_1->argc > VAR_1->argn && *VAR_1->argv[VAR_1->argn]) {
    if (VAR_1->argc > VAR_1->argn+1) {
      FUNC_0(VAR_0, "SetModemSpeed: Too many arguments\n");
      return -1;
    }
    if (FUNC_3(VAR_1->argv[VAR_1->argn], "sync") == 0) {
      FUNC_2(VAR_1->cx->physical);
      return 0;
    }
    VAR_3 = ((void*)0);
    VAR_2 = FUNC_4(VAR_1->argv[VAR_1->argn], &VAR_3, 10);
    if (*VAR_3 || VAR_2 < 0) {
      FUNC_0(VAR_0, "SetModemSpeed: Bad argument \"%s\"",
                VAR_1->argv[VAR_1->argn]);
      return -1;
    }
    if (FUNC_1(VAR_1->cx->physical, VAR_2))
      return 0;
    FUNC_0(VAR_0, "%s: Invalid speed\n", VAR_1->argv[VAR_1->argn]);
  } else
    FUNC_0(VAR_0, "SetModemSpeed: No speed specified\n");

  return -1;
}
