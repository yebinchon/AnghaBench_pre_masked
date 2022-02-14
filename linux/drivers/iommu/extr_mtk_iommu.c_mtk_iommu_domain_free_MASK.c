
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_domain {int iop; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iommu_domain*) ;
 int FUNC_2 (struct mtk_iommu_domain*) ;
 struct mtk_iommu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_4(struct iommu_domain *VAR_0)
{
 struct mtk_iommu_domain *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->iop);
 FUNC_1(VAR_0);
 FUNC_2(FUNC_3(VAR_0));
}
