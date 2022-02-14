
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct psb_mmu_pt {scalar_t__ count; size_t index; int * v; struct psb_mmu_pd* pd; } ;
struct psb_mmu_pd {int hw_context; TYPE_1__* driver; int ** tables; int invalid_pde; int p; } ;
struct TYPE_2__ {int lock; int needs_tlbflush; } ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (struct psb_mmu_pt*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct psb_mmu_pt *VAR_0)
{
 struct psb_mmu_pd *VAR_1 = VAR_0->pd;
 uint32_t *VAR_2;

 FUNC_2(VAR_0->v);
 if (VAR_0->count == 0) {
  VAR_2 = FUNC_1(VAR_1->p);
  VAR_2[VAR_0->index] = VAR_1->invalid_pde;
  VAR_1->tables[VAR_0->index] = ((void*)0);

  if (VAR_1->hw_context != -1) {
   FUNC_3(VAR_1->driver, (void *)&VAR_2[VAR_0->index]);
   FUNC_0(&VAR_1->driver->needs_tlbflush, 1);
  }
  FUNC_2(VAR_2);
  FUNC_5(&VAR_1->driver->lock);
  FUNC_4(VAR_0);
  return;
 }
 FUNC_5(&VAR_1->driver->lock);
}
