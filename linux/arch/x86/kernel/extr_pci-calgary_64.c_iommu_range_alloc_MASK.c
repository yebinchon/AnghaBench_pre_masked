
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {unsigned long it_size; unsigned long it_hint; int it_lock; int it_map; TYPE_1__* chip_ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* tce_cache_blast ) (struct iommu_table*) ;} ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct device*) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long,unsigned int,int ,unsigned long,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct iommu_table*) ;

__attribute__((used)) static unsigned long FUNC_9(struct device *VAR_4,
           struct iommu_table *VAR_5,
           unsigned int VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_9 = FUNC_0(FUNC_2(VAR_4) + 1,
         VAR_2) >> VAR_1;

 FUNC_1(VAR_6 == 0);

 FUNC_6(&VAR_5->it_lock, VAR_7);

 VAR_8 = FUNC_3(VAR_5->it_map, VAR_5->it_size, VAR_5->it_hint,
      VAR_6, 0, VAR_9, 0);
 if (VAR_8 == ~0UL) {
  VAR_5->chip_ops->tce_cache_blast(VAR_5);

  VAR_8 = FUNC_3(VAR_5->it_map, VAR_5->it_size, 0,
       VAR_6, 0, VAR_9, 0);
  if (VAR_8 == ~0UL) {
   FUNC_5("IOMMU full\n");
   FUNC_7(&VAR_5->it_lock, VAR_7);
   if (VAR_3)
    FUNC_4("Calgary: fix the allocator.\n");
   else
    return VAR_0;
  }
 }

 VAR_5->it_hint = VAR_8 + VAR_6;
 FUNC_1(VAR_5->it_hint > VAR_5->it_size);

 FUNC_7(&VAR_5->it_lock, VAR_7);

 return VAR_8;
}
