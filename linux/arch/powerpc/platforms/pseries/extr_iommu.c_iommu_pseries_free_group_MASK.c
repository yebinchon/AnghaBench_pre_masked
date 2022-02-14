
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table_group {scalar_t__ group; struct iommu_table** tables; } ;
struct iommu_table {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iommu_table*) ;
 int FUNC_3 (struct iommu_table_group*) ;

__attribute__((used)) static void FUNC_4(struct iommu_table_group *VAR_0,
  const char *VAR_1)
{
 struct iommu_table *VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = VAR_0->tables[0];






 FUNC_2(VAR_2);

 FUNC_3(VAR_0);
}
