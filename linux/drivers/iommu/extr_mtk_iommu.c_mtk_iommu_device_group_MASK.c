
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_data {struct iommu_group* m4u_group; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iommu_group* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct device*,char*) ;
 struct iommu_group* FUNC_3 () ;
 int FUNC_4 (struct iommu_group*) ;
 struct mtk_iommu_data* FUNC_5 () ;

__attribute__((used)) static struct iommu_group *FUNC_6(struct device *VAR_1)
{
 struct mtk_iommu_data *VAR_2 = FUNC_5();

 if (!VAR_2)
  return FUNC_0(-VAR_0);


 if (!VAR_2->m4u_group) {
  VAR_2->m4u_group = FUNC_3();
  if (FUNC_1(VAR_2->m4u_group))
   FUNC_2(VAR_1, "Failed to allocate M4U IOMMU group\n");
 } else {
  FUNC_4(VAR_2->m4u_group);
 }
 return VAR_2->m4u_group;
}
