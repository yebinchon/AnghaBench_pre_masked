
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct device {int of_node; } ;


 struct iommu_table* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iommu_table*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct iommu_table *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_1);
 FUNC_3(VAR_0->of_node);
 FUNC_2(FUNC_4(VAR_0));
}
