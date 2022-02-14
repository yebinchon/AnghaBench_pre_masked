
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct in_addr {int dummy; } ;
struct cmdargs {int argc; int argn; TYPE_2__* bundle; TYPE_1__* cmd; int * argv; } ;
struct TYPE_4__ {int ncp; int iface; } ;
struct TYPE_3__ {scalar_t__ args; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,struct ncprange*,struct ncpaddr*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ncpaddr*,int *,int ) ;
 scalar_t__ FUNC_3 (struct ncpaddr*) ;
 int FUNC_4 (struct ncpaddr*,struct in_addr*) ;
 int FUNC_5 (struct ncpaddr*) ;
 int FUNC_6 (struct ncprange*,int *,int ) ;
 scalar_t__ FUNC_7 (struct ncprange*) ;
 int FUNC_8 (struct ncprange*,struct ncpaddr*) ;
 int FUNC_9 (struct ncprange*,struct in_addr) ;

__attribute__((used)) static int
FUNC_10(struct cmdargs const *VAR_4)
{
  struct ncpaddr VAR_5, VAR_6;
  struct ncprange VAR_7;
  struct in_addr VAR_8;
  int VAR_9, VAR_10;

  if (VAR_4->argc == VAR_4->argn + 1) {
    if (!FUNC_6(&VAR_7, ((void*)0), VAR_4->argv[VAR_4->argn]))
      return -1;
    FUNC_5(&VAR_5);
  } else {
    if (VAR_4->argc == VAR_4->argn + 2) {
      if (!FUNC_6(&VAR_7, ((void*)0), VAR_4->argv[VAR_4->argn]))
        return -1;
      VAR_9 = 1;
    } else if (VAR_4->argc == VAR_4->argn + 3) {
      if (!FUNC_2(&VAR_6, ((void*)0), VAR_4->argv[VAR_4->argn]))
        return -1;
      if (FUNC_3(&VAR_6) != VAR_0)
        return -1;
      FUNC_8(&VAR_7, &VAR_6);
      if (!FUNC_2(&VAR_6, ((void*)0), VAR_4->argv[VAR_4->argn + 1]))
        return -1;
      if (!FUNC_4(&VAR_6, &VAR_8))
        return -1;
      if (!FUNC_9(&VAR_7, VAR_8))
        return -1;
      VAR_9 = 2;
    } else
      return -1;

    if (!FUNC_2(&VAR_5, ((void*)0), VAR_4->argv[VAR_4->argn + VAR_9]))
      return -1;

    if (FUNC_7(&VAR_7) != FUNC_3(&VAR_5)) {
      FUNC_1(VAR_3, "IfaceAddCommand: src and dst address families"
                 " differ\n");
      return -1;
    }
  }

  VAR_10 = VAR_1;
  if (VAR_4->cmd->args)
    VAR_10 |= VAR_2;

  return !FUNC_0(VAR_4->bundle->iface, &VAR_4->bundle->ncp, &VAR_7, &VAR_5, VAR_10);
}
