
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int address_lo; int address_hi; } ;
struct msi_desc {int dummy; } ;
struct iommu_domain {int iova_cookie; } ;
struct iommu_dma_msi_page {int iova; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct iommu_domain* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iommu_dma_msi_page* FUNC_4 (struct msi_desc*) ;
 struct device* FUNC_5 (struct msi_desc*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct msi_desc *VAR_0,
          struct msi_msg *VAR_1)
{
 struct device *VAR_2 = FUNC_5(VAR_0);
 const struct iommu_domain *VAR_3 = FUNC_2(VAR_2);
 const struct iommu_dma_msi_page *VAR_4;

 VAR_4 = FUNC_4(VAR_0);

 if (!VAR_3 || !VAR_3->iova_cookie || FUNC_0(!VAR_4))
  return;

 VAR_1->address_hi = FUNC_6(VAR_4->iova);
 VAR_1->address_lo &= FUNC_1(VAR_3->iova_cookie) - 1;
 VAR_1->address_lo += FUNC_3(VAR_4->iova);
}
