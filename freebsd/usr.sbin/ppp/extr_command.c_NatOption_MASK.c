
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {int argc; int argn; TYPE_1__* bundle; int * argv; TYPE_2__* cmd; } ;
struct TYPE_4__ {scalar_t__ args; } ;
struct TYPE_3__ {scalar_t__ NatEnabled; } ;


 int FUNC_0 (int ,long,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_2)
{
  long VAR_3 = (long)VAR_2->cmd->args;

  if (VAR_2->argc == VAR_2->argn+1) {
    if (FUNC_2(VAR_2->argv[VAR_2->argn], "yes") == 0) {
      if (VAR_2->bundle->NatEnabled) {
 FUNC_0(VAR_1, VAR_3, VAR_3);
 return 0;
      }
      FUNC_1(VAR_0, "nat not enabled\n");
    } else if (FUNC_3(VAR_2->argv[VAR_2->argn], "no") == 0) {
      if (VAR_2->bundle->NatEnabled) {
 FUNC_0(VAR_1, 0, VAR_3);
 return 0;
      }
      FUNC_1(VAR_0, "nat not enabled\n");
    }
  }
  return -1;
}
