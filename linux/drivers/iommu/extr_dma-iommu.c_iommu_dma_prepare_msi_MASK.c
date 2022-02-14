
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_desc {int * iommu_cookie; } ;
struct iommu_domain {struct iommu_dma_cookie* iova_cookie; } ;
struct iommu_dma_msi_page {int dummy; } ;
struct iommu_dma_cookie {int msi_lock; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 struct iommu_dma_msi_page* FUNC_0 (struct device*,int ,struct iommu_domain*) ;
 struct iommu_domain* FUNC_1 (struct device*) ;
 int FUNC_2 (struct msi_desc*,struct iommu_dma_msi_page*) ;
 struct device* FUNC_3 (struct msi_desc*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct msi_desc *VAR_1, phys_addr_t VAR_2)
{
 struct device *VAR_3 = FUNC_3(VAR_1);
 struct iommu_domain *VAR_4 = FUNC_1(VAR_3);
 struct iommu_dma_cookie *VAR_5;
 struct iommu_dma_msi_page *VAR_6;
 unsigned long VAR_7;

 if (!VAR_4 || !VAR_4->iova_cookie) {
  VAR_1->iommu_cookie = ((void*)0);
  return 0;
 }

 VAR_5 = VAR_4->iova_cookie;






 FUNC_4(&VAR_5->msi_lock, VAR_7);
 VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_4);
 FUNC_5(&VAR_5->msi_lock, VAR_7);

 FUNC_2(VAR_1, VAR_6);

 if (!VAR_6)
  return -VAR_0;
 return 0;
}
