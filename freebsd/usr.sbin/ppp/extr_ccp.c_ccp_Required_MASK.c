
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * neg; } ;
struct ccp {int fsm; TYPE_1__ cfg; } ;
struct TYPE_4__ {size_t Neg; scalar_t__ (* Required ) (int *) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 TYPE_2__** VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2(struct ccp *VAR_2)
{
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (FUNC_0(VAR_2->cfg.neg[VAR_1[VAR_3]->Neg]) &&
        (*VAR_1[VAR_3]->Required)(&VAR_2->fsm))
      return 1;

  return 0;
}
