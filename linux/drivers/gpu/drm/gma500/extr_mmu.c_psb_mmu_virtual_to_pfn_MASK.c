
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct psb_mmu_pt {unsigned long* v; } ;
struct psb_mmu_pd {unsigned long invalid_pde; unsigned long invalid_pte; TYPE_1__* driver; int p; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int sem; int lock; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned long* FUNC_1 (int ) ;
 int FUNC_2 (unsigned long*) ;
 size_t FUNC_3 (unsigned long) ;
 size_t FUNC_4 (unsigned long) ;
 struct psb_mmu_pt* FUNC_5 (struct psb_mmu_pd*,unsigned long) ;
 int FUNC_6 (struct psb_mmu_pt*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct psb_mmu_pd *VAR_3, uint32_t VAR_4,
      unsigned long *VAR_5)
{
 int VAR_6;
 struct psb_mmu_pt *VAR_7;
 uint32_t VAR_8;
 spinlock_t *VAR_9 = &VAR_3->driver->lock;

 FUNC_0(&VAR_3->driver->sem);
 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (!VAR_7) {
  uint32_t *VAR_10;

  FUNC_7(VAR_9);
  VAR_10 = FUNC_1(VAR_3->p);
  VAR_8 = VAR_10[FUNC_3(VAR_4)];
  FUNC_2(VAR_10);
  FUNC_8(VAR_9);

  if (VAR_8 != VAR_3->invalid_pde || !(VAR_8 & VAR_2) ||
      !(VAR_3->invalid_pte & VAR_2)) {
   VAR_6 = -VAR_0;
   goto out;
  }
  VAR_6 = 0;
  *VAR_5 = VAR_3->invalid_pte >> VAR_1;
  goto out;
 }
 VAR_8 = VAR_7->v[FUNC_4(VAR_4)];
 if (!(VAR_8 & VAR_2)) {
  VAR_6 = -VAR_0;
 } else {
  VAR_6 = 0;
  *VAR_5 = VAR_8 >> VAR_1;
 }
 FUNC_6(VAR_7);
out:
 FUNC_9(&VAR_3->driver->sem);
 return VAR_6;
}
