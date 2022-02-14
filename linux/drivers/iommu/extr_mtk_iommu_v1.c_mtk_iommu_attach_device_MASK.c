
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_iommu_domain {int dummy; } ;
struct mtk_iommu_data {struct mtk_iommu_domain* m4u_dom; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct mtk_iommu_data* iommu_priv; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_iommu_data*,struct device*,int) ;
 int FUNC_2 (struct mtk_iommu_data*) ;
 struct mtk_iommu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_4(struct iommu_domain *VAR_1,
       struct device *VAR_2)
{
 struct mtk_iommu_domain *VAR_3 = FUNC_3(VAR_1);
 struct mtk_iommu_data *VAR_4 = FUNC_0(VAR_2)->iommu_priv;
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_4->m4u_dom) {
  VAR_4->m4u_dom = VAR_3;
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5) {
   VAR_4->m4u_dom = ((void*)0);
   return VAR_5;
  }
 }

 FUNC_1(VAR_4, VAR_2, 1);
 return 0;
}
