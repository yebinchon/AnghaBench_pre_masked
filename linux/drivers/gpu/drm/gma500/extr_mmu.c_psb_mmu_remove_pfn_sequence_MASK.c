
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct psb_mmu_pt {int count; } ;
struct psb_mmu_pd {int hw_context; TYPE_1__* driver; } ;
struct TYPE_2__ {int sem; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct psb_mmu_pd*,unsigned long,unsigned long,int,int) ;
 int FUNC_3 (struct psb_mmu_pt*,unsigned long) ;
 struct psb_mmu_pt* FUNC_4 (struct psb_mmu_pd*,unsigned long) ;
 int FUNC_5 (struct psb_mmu_pt*) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct psb_mmu_pd *VAR_2,
     unsigned long VAR_3, uint32_t VAR_4)
{
 struct psb_mmu_pt *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = VAR_3;

 FUNC_0(&VAR_2->driver->sem);

 VAR_6 = VAR_3;
 VAR_7 = VAR_6 + (VAR_4 << VAR_0);

 do {
  VAR_8 = FUNC_6(VAR_6, VAR_7);
  VAR_5 = FUNC_4(VAR_2, VAR_6);
  if (!VAR_5)
   goto out;
  do {
   FUNC_3(VAR_5, VAR_6);
   --VAR_5->count;
  } while (VAR_6 += VAR_1, VAR_6 < VAR_8);
  FUNC_5(VAR_5);

 } while (VAR_6 = VAR_8, VAR_8 != VAR_7);

out:
 if (VAR_2->hw_context != -1)
  FUNC_2(VAR_2, VAR_9, VAR_4, 1, 1);

 FUNC_7(&VAR_2->driver->sem);

 if (VAR_2->hw_context != -1)
  FUNC_1(VAR_2->driver);

 return;
}
