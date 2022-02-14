
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct psb_mmu_pt {int count; } ;
struct psb_mmu_pd {int hw_context; TYPE_1__* driver; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct psb_mmu_pd*,unsigned long,int,int,int) ;
 int FUNC_4 (int ,int) ;
 struct psb_mmu_pt* FUNC_5 (struct psb_mmu_pd*,unsigned long) ;
 int FUNC_6 (struct psb_mmu_pt*) ;
 int FUNC_7 (struct psb_mmu_pt*,unsigned long,int) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct psb_mmu_pd *VAR_4, struct page **VAR_5,
    unsigned long VAR_6, uint32_t VAR_7,
    uint32_t VAR_8, uint32_t VAR_9,
    int VAR_10)
{
 struct psb_mmu_pt *VAR_11;
 uint32_t VAR_12 = 1;
 uint32_t VAR_13;
 uint32_t VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20 = VAR_6;
 int VAR_21 = -VAR_1;

 if (VAR_9) {
  if (VAR_7 % VAR_8 != 0)
   return -VAR_0;
  VAR_12 = VAR_7 / VAR_8;
 } else {
  VAR_8 = VAR_7;
 }

 VAR_18 = VAR_8 << VAR_2;
 VAR_19 = VAR_9 << VAR_2;

 FUNC_0(&VAR_4->driver->sem);

 for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13) {

  VAR_15 = VAR_6;
  VAR_16 = VAR_15 + VAR_18;

  do {
   VAR_17 = FUNC_8(VAR_15, VAR_16);
   VAR_11 = FUNC_5(VAR_4, VAR_15);
   if (!VAR_11)
    goto out;
   do {
    VAR_14 = FUNC_4(FUNC_1(*VAR_5++),
             VAR_10);
    FUNC_7(VAR_11, VAR_15, VAR_14);
    VAR_11->count++;
   } while (VAR_15 += VAR_3, VAR_15 < VAR_17);
   FUNC_6(VAR_11);

  } while (VAR_15 = VAR_17, VAR_17 != VAR_16);

  VAR_6 += VAR_19;
 }

 VAR_21 = 0;
out:
 if (VAR_4->hw_context != -1)
  FUNC_3(VAR_4, VAR_20, VAR_7,
       VAR_8, VAR_9);

 FUNC_9(&VAR_4->driver->sem);

 if (VAR_4->hw_context != -1)
  FUNC_2(VAR_4->driver);

 return VAR_21;
}
