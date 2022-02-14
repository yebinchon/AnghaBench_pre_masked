
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_thread {int id; struct pl330_dmac* dmac; } ;
struct TYPE_2__ {int num_events; } ;
struct pl330_dmac {int* events; TYPE_1__ pcfg; } ;



__attribute__((used)) static inline int FUNC_0(struct pl330_thread *VAR_0)
{
 struct pl330_dmac *VAR_1 = VAR_0->dmac;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->pcfg.num_events; VAR_2++)
  if (VAR_1->events[VAR_2] == -1) {
   VAR_1->events[VAR_2] = VAR_0->id;
   return VAR_2;
  }

 return -1;
}
