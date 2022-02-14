
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct psb_mmu_pt {size_t index; int p; void* v; } ;
struct psb_mmu_pd {int pd_mask; int hw_context; TYPE_1__* driver; struct psb_mmu_pt** tables; int p; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int needs_tlbflush; int lock; } ;


 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 struct psb_mmu_pt* FUNC_4 (struct psb_mmu_pd*) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 int FUNC_6 (struct psb_mmu_pt*) ;
 size_t FUNC_7 (unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct psb_mmu_pt *FUNC_10(struct psb_mmu_pd *VAR_0,
          unsigned long VAR_1)
{
 uint32_t VAR_2 = FUNC_7(VAR_1);
 struct psb_mmu_pt *VAR_3;
 uint32_t *VAR_4;
 spinlock_t *VAR_5 = &VAR_0->driver->lock;

 FUNC_8(VAR_5);
 VAR_3 = VAR_0->tables[VAR_2];
 while (!VAR_3) {
  FUNC_9(VAR_5);
  VAR_3 = FUNC_4(VAR_0);
  if (!VAR_3)
   return ((void*)0);
  FUNC_8(VAR_5);

  if (VAR_0->tables[VAR_2]) {
   FUNC_9(VAR_5);
   FUNC_6(VAR_3);
   FUNC_8(VAR_5);
   VAR_3 = VAR_0->tables[VAR_2];
   continue;
  }

  VAR_4 = FUNC_1(VAR_0->p);
  VAR_0->tables[VAR_2] = VAR_3;
  VAR_4[VAR_2] = (FUNC_3(VAR_3->p) << 12) | VAR_0->pd_mask;
  VAR_3->index = VAR_2;
  FUNC_2((void *) VAR_4);

  if (VAR_0->hw_context != -1) {
   FUNC_5(VAR_0->driver, (void *)&VAR_4[VAR_2]);
   FUNC_0(&VAR_0->driver->needs_tlbflush, 1);
  }
 }
 VAR_3->v = FUNC_1(VAR_3->p);
 return VAR_3;
}
