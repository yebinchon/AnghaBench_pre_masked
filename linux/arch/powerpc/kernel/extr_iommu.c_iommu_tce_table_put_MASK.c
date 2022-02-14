
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int it_kref; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct iommu_table *VAR_1)
{
 if (FUNC_0(!VAR_1))
  return 0;

 return FUNC_1(&VAR_1->it_kref, VAR_0);
}
