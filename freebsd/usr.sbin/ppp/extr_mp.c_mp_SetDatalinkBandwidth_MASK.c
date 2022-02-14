
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {int argc; int argn; int bundle; TYPE_1__* cx; int * argv; } ;
struct TYPE_4__ {int bandwidth; } ;
struct TYPE_3__ {scalar_t__ state; TYPE_2__ mp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct cmdargs const *VAR_2)
{
  int VAR_3;

  if (VAR_2->argc != VAR_2->argn+1)
    return -1;

  VAR_3 = FUNC_0(VAR_2->argv[VAR_2->argn]);
  if (VAR_3 <= 0) {
    FUNC_2(VAR_1, "The link bandwidth must be greater than zero\n");
    return 1;
  }
  VAR_2->cx->mp.bandwidth = VAR_3;

  if (VAR_2->cx->state == VAR_0)
    FUNC_1(VAR_2->bundle);

  return 0;
}
