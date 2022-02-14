
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_size; scalar_t__ it_offset; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*,int) ;
 int FUNC_3 (scalar_t__) ;
 struct iommu_table* FUNC_4 (struct device*) ;

u64 FUNC_5(struct device *VAR_0)
{
 struct iommu_table *VAR_1 = FUNC_4(VAR_0);
 u64 VAR_2;

 if (!VAR_1)
  return 0;

 if (FUNC_0(VAR_0)) {
  u64 VAR_3 = FUNC_1(VAR_0);

  if (FUNC_2(VAR_0, VAR_3))
   return VAR_3;
 }

 VAR_2 = 1ULL < (FUNC_3(VAR_1->it_offset + VAR_1->it_size) - 1);
 VAR_2 += VAR_2 - 1;

 return VAR_2;
}
