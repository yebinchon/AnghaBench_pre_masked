
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct psb_mmu_pt {int count; } ;
struct psb_mmu_pd {int hw_context; TYPE_1__* driver; } ;
struct TYPE_2__ {int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct psb_mmu_pd*,unsigned long,int,int,int) ;
 int FUNC_3 (struct psb_mmu_pt*,unsigned long) ;
 struct psb_mmu_pt* FUNC_4 (struct psb_mmu_pd*,unsigned long) ;
 int FUNC_5 (struct psb_mmu_pt*) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct psb_mmu_pd *VAR_2, unsigned long VAR_3,
     uint32_t VAR_4, uint32_t VAR_5,
     uint32_t VAR_6)
{
 struct psb_mmu_pt *VAR_7;
 uint32_t VAR_8 = 1;
 uint32_t VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15 = VAR_3;

 if (VAR_6)
  VAR_8 = VAR_4 / VAR_5;
 else
  VAR_5 = VAR_4;

 VAR_13 = VAR_5 << VAR_0;
 VAR_14 = VAR_6 << VAR_0;

 FUNC_0(&VAR_2->driver->sem);



 for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {

  VAR_10 = VAR_3;
  VAR_11 = VAR_10 + VAR_13;

  do {
   VAR_12 = FUNC_6(VAR_10, VAR_11);
   VAR_7 = FUNC_4(VAR_2, VAR_10);
   if (!VAR_7)
    continue;
   do {
    FUNC_3(VAR_7, VAR_10);
    --VAR_7->count;

   } while (VAR_10 += VAR_1, VAR_10 < VAR_12);
   FUNC_5(VAR_7);

  } while (VAR_10 = VAR_12, VAR_12 != VAR_11);
  VAR_3 += VAR_14;
 }
 if (VAR_2->hw_context != -1)
  FUNC_2(VAR_2, VAR_15, VAR_4,
       VAR_5, VAR_6);

 FUNC_7(&VAR_2->driver->sem);

 if (VAR_2->hw_context != -1)
  FUNC_1(VAR_2->driver);
}
