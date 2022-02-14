
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct psb_mmu_pt {int p; int v; } ;
struct psb_mmu_pd {struct psb_mmu_pt** tables; TYPE_1__* driver; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct psb_mmu_pt *FUNC_4(struct psb_mmu_pd *VAR_0,
           unsigned long VAR_1)
{
 uint32_t VAR_2 = FUNC_1(VAR_1);
 struct psb_mmu_pt *VAR_3;
 spinlock_t *VAR_4 = &VAR_0->driver->lock;

 FUNC_2(VAR_4);
 VAR_3 = VAR_0->tables[VAR_2];
 if (!VAR_3) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 VAR_3->v = FUNC_0(VAR_3->p);
 return VAR_3;
}
