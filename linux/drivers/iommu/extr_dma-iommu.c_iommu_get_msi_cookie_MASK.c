
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {scalar_t__ type; struct iommu_dma_cookie* iova_cookie; } ;
struct iommu_dma_cookie {int msi_iova; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct iommu_dma_cookie* FUNC_0 (int ) ;

int FUNC_1(struct iommu_domain *VAR_5, dma_addr_t VAR_6)
{
 struct iommu_dma_cookie *VAR_7;

 if (VAR_5->type != VAR_4)
  return -VAR_1;

 if (VAR_5->iova_cookie)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->msi_iova = VAR_6;
 VAR_5->iova_cookie = VAR_7;
 return 0;
}
