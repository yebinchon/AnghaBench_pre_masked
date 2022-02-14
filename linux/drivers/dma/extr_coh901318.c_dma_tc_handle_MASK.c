
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coh901318_chan {int tasklet; int lock; scalar_t__ busy; int nbr_active_done; int active; int allocated; } ;
struct TYPE_2__ {scalar_t__ priority_high; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct coh901318_chan*) ;
 int * FUNC_2 (struct coh901318_chan*) ;
 TYPE_1__* FUNC_3 (struct coh901318_chan*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct coh901318_chan *VAR_0)
{




 if (!VAR_0->allocated) {
  FUNC_4(FUNC_1(VAR_0), "spurious interrupt from "
   "unallocated channel\n");
  return;
 }

 FUNC_6(&VAR_0->lock);
 FUNC_0(FUNC_5(&VAR_0->active));

 VAR_0->nbr_active_done++;





 if (FUNC_2(VAR_0) == ((void*)0))
  VAR_0->busy = 0;

 FUNC_7(&VAR_0->lock);





 if (FUNC_3(VAR_0)->priority_high)
  FUNC_8(&VAR_0->tasklet);
 else
  FUNC_9(&VAR_0->tasklet);
}
