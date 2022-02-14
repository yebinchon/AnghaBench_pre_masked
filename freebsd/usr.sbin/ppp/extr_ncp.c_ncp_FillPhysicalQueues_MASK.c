
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncp {int afq; } ;
struct datalink {scalar_t__ state; TYPE_2__* physical; struct datalink* next; } ;
struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_6__ {TYPE_1__ mp; } ;
struct bundle {TYPE_3__ ncp; struct datalink* links; } ;
struct TYPE_5__ {int link; int * out; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (struct bundle*) ;
 size_t FUNC_2 (struct ncp*,int *,int *) ;
 size_t FUNC_3 (TYPE_3__*) ;

size_t
FUNC_4(struct ncp *VAR_1, struct bundle *VAR_2)
{
  size_t VAR_3;

  if (VAR_2->ncp.mp.active)
    VAR_3 = FUNC_1(VAR_2);
  else {
    struct datalink *VAR_4;
    size_t VAR_5;

    for (VAR_3 = 0, VAR_4 = VAR_2->links; VAR_4; VAR_4 = VAR_4->next)
      if (VAR_4->state == VAR_0) {
        VAR_5 = FUNC_0(&VAR_4->physical->link);
        if (VAR_5 == 0 && VAR_4->physical->out == ((void*)0))
          VAR_5 = FUNC_2(VAR_1, &VAR_1->afq, &VAR_4->physical->link);
        VAR_3 += VAR_5;
      }
  }

  return VAR_3 + FUNC_3(&VAR_2->ncp);
}
