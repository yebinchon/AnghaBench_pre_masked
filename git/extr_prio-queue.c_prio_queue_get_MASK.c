
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {size_t nr; TYPE_1__* array; int compare; } ;
struct TYPE_2__ {void* data; } ;


 scalar_t__ FUNC_0 (struct prio_queue*,int,int) ;
 int FUNC_1 (struct prio_queue*,int,int) ;

void *FUNC_2(struct prio_queue *VAR_0)
{
 void *VAR_1;
 int VAR_2, VAR_3;

 if (!VAR_0->nr)
  return ((void*)0);
 if (!VAR_0->compare)
  return VAR_0->array[--VAR_0->nr].data;

 VAR_1 = VAR_0->array[0].data;
 if (!--VAR_0->nr)
  return VAR_1;

 VAR_0->array[0] = VAR_0->array[VAR_0->nr];


 for (VAR_2 = 0; VAR_2 * 2 + 1 < VAR_0->nr; VAR_2 = VAR_3) {
  VAR_3 = VAR_2 * 2 + 1;
  if (VAR_3 + 1 < VAR_0->nr &&
      FUNC_0(VAR_0, VAR_3, VAR_3 + 1) >= 0)
   VAR_3++;

  if (FUNC_0(VAR_0, VAR_2, VAR_3) <= 0)
   break;

  FUNC_1(VAR_0, VAR_3, VAR_2);
 }
 return VAR_1;
}
