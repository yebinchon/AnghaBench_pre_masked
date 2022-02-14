
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pl330_thread {int free; scalar_t__ ev; int lstenq; int req_running; TYPE_2__* req; } ;
struct TYPE_3__ {int num_chan; } ;
struct pl330_dmac {scalar_t__ state; struct pl330_thread* channels; TYPE_1__ pcfg; } ;
struct TYPE_4__ {int * desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pl330_thread*) ;
 scalar_t__ FUNC_1 (struct pl330_dmac*,int) ;
 int FUNC_2 (struct pl330_thread*) ;

__attribute__((used)) static struct pl330_thread *FUNC_3(struct pl330_dmac *VAR_1)
{
 struct pl330_thread *VAR_2 = ((void*)0);
 int VAR_3, VAR_4;

 if (VAR_1->state == VAR_0)
  return ((void*)0);

 VAR_3 = VAR_1->pcfg.num_chan;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2 = &VAR_1->channels[VAR_4];
  if ((VAR_2->free) && (!FUNC_2(VAR_2) ||
     FUNC_1(VAR_1, VAR_4))) {
   VAR_2->ev = FUNC_0(VAR_2);
   if (VAR_2->ev >= 0) {
    VAR_2->free = 0;
    VAR_2->lstenq = 1;
    VAR_2->req[0].desc = ((void*)0);
    VAR_2->req[1].desc = ((void*)0);
    VAR_2->req_running = -1;
    break;
   }
  }
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
