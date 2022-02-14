
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {int nr; int compare; TYPE_1__* array; int insertion_ctr; int alloc; } ;
struct TYPE_2__ {void* data; scalar_t__ ctr; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_1 (struct prio_queue*,int,int) ;
 int FUNC_2 (struct prio_queue*,int,int) ;

void FUNC_3(struct prio_queue *VAR_0, void *VAR_1)
{
 int VAR_2, VAR_3;


 FUNC_0(VAR_0->array, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->array[VAR_0->nr].ctr = VAR_0->insertion_ctr++;
 VAR_0->array[VAR_0->nr].data = VAR_1;
 VAR_0->nr++;
 if (!VAR_0->compare)
  return;


 for (VAR_2 = VAR_0->nr - 1; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = (VAR_2 - 1) / 2;
  if (FUNC_1(VAR_0, VAR_3, VAR_2) <= 0)
   break;

  FUNC_2(VAR_0, VAR_3, VAR_2);
 }
}
