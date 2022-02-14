
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {int nr; TYPE_1__* array; int compare; } ;
struct TYPE_2__ {void* data; } ;



void *FUNC_0(struct prio_queue *VAR_0)
{
 if (!VAR_0->nr)
  return ((void*)0);
 if (!VAR_0->compare)
  return VAR_0->array[VAR_0->nr - 1].data;
 return VAR_0->array[0].data;
}
