
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmdargs {int argc; int argn; TYPE_4__* bundle; int * argv; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_6__ {int my_ip; TYPE_1__ fsm; } ;
struct TYPE_7__ {TYPE_2__ ipcp; } ;
struct TYPE_8__ {int NatEnabled; TYPE_3__ ncp; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct cmdargs const *VAR_3)
{
  if (VAR_3->argc == VAR_3->argn+1) {
    if (FUNC_2(VAR_3->argv[VAR_3->argn], "yes") == 0) {
      if (!VAR_3->bundle->NatEnabled) {
        if (VAR_3->bundle->ncp.ipcp.fsm.state == VAR_1)
          FUNC_0(VAR_2, VAR_3->bundle->ncp.ipcp.my_ip);
        VAR_3->bundle->NatEnabled = 1;
      }
      return 0;
    } else if (FUNC_2(VAR_3->argv[VAR_3->argn], "no") == 0) {
      VAR_3->bundle->NatEnabled = 0;
      FUNC_1(VAR_3->bundle, VAR_0);

      return 0;
    }
  }

  return -1;
}
