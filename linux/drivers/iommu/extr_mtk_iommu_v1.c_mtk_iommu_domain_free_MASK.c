
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_domain {int pgt_pa; int pgt_va; struct mtk_iommu_data* data; } ;
struct mtk_iommu_data {int dev; } ;
struct iommu_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mtk_iommu_domain*) ;
 struct mtk_iommu_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_3(struct iommu_domain *VAR_1)
{
 struct mtk_iommu_domain *VAR_2 = FUNC_2(VAR_1);
 struct mtk_iommu_data *VAR_3 = VAR_2->data;

 FUNC_0(VAR_3->dev, VAR_0,
   VAR_2->pgt_va, VAR_2->pgt_pa);
 FUNC_1(FUNC_2(VAR_1));
}
