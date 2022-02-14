
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct psb_mmu_pt {int count; } ;
struct psb_mmu_pd {int hw_context; TYPE_1__* driver; } ;
struct TYPE_2__ {int sem; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct psb_mmu_pd*,unsigned long,unsigned long,int,int) ;
 unsigned long FUNC_3 (int ,int) ;
 struct psb_mmu_pt* FUNC_4 (struct psb_mmu_pd*,unsigned long) ;
 int FUNC_5 (struct psb_mmu_pt*) ;
 int FUNC_6 (struct psb_mmu_pt*,unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct psb_mmu_pd *VAR_3, uint32_t VAR_4,
    unsigned long VAR_5, uint32_t VAR_6,
    int VAR_7)
{
 struct psb_mmu_pt *VAR_8;
 uint32_t VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13 = VAR_5;
 int VAR_14 = -VAR_0;

 FUNC_0(&VAR_3->driver->sem);

 VAR_10 = VAR_5;
 VAR_11 = VAR_10 + (VAR_6 << VAR_1);

 do {
  VAR_12 = FUNC_7(VAR_10, VAR_11);
  VAR_8 = FUNC_4(VAR_3, VAR_10);
  if (!VAR_8) {
   VAR_14 = -VAR_0;
   goto out;
  }
  do {
   VAR_9 = FUNC_3(VAR_4++, VAR_7);
   FUNC_6(VAR_8, VAR_10, VAR_9);
   VAR_8->count++;
  } while (VAR_10 += VAR_2, VAR_10 < VAR_12);
  FUNC_5(VAR_8);

 } while (VAR_10 = VAR_12, VAR_12 != VAR_11);
 VAR_14 = 0;

out:
 if (VAR_3->hw_context != -1)
  FUNC_2(VAR_3, VAR_13, VAR_6, 1, 1);

 FUNC_8(&VAR_3->driver->sem);

 if (VAR_3->hw_context != -1)
  FUNC_1(VAR_3->driver);

 return 0;
}
