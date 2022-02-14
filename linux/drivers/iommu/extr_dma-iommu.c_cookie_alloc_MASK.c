
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_dma_cookie {int type; int msi_page_list; int msi_lock; } ;
typedef enum iommu_dma_cookie_type { ____Placeholder_iommu_dma_cookie_type } iommu_dma_cookie_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct iommu_dma_cookie* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct iommu_dma_cookie *FUNC_3(enum iommu_dma_cookie_type VAR_1)
{
 struct iommu_dma_cookie *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  FUNC_2(&VAR_2->msi_lock);
  FUNC_0(&VAR_2->msi_page_list);
  VAR_2->type = VAR_1;
 }
 return VAR_2;
}
