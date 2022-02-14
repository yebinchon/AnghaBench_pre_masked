
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmdargs {TYPE_3__* cx; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__* physical; } ;
struct TYPE_4__ {int lcp; } ;
struct TYPE_5__ {TYPE_1__ link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct cmdargs const *VAR_2)
{
  if (VAR_2->cx->state < VAR_0) {
    FUNC_1(VAR_1, "sendident: link has not reached LCP\n");
    return 2;
  }
  return FUNC_0(&VAR_2->cx->physical->link.lcp) ? 0 : 1;
}
