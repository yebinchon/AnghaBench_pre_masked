
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int dummy; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {struct iommu_dma_cookie* iova_cookie; } ;
struct iommu_dma_cookie {int fq_domain; struct iova_domain iovad; } ;
struct device {int dummy; } ;
typedef size_t dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iommu_dma_cookie*,size_t,size_t) ;
 struct iommu_domain* FUNC_2 (struct device*) ;
 int FUNC_3 (struct iommu_iotlb_gather*) ;
 int FUNC_4 (struct iommu_domain*,struct iommu_iotlb_gather*) ;
 size_t FUNC_5 (struct iommu_domain*,size_t,size_t,struct iommu_iotlb_gather*) ;
 size_t FUNC_6 (struct iova_domain*,size_t) ;
 size_t FUNC_7 (struct iova_domain*,size_t) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_0, dma_addr_t VAR_1,
  size_t VAR_2)
{
 struct iommu_domain *VAR_3 = FUNC_2(VAR_0);
 struct iommu_dma_cookie *VAR_4 = VAR_3->iova_cookie;
 struct iova_domain *VAR_5 = &VAR_4->iovad;
 size_t VAR_6 = FUNC_7(VAR_5, VAR_1);
 struct iommu_iotlb_gather VAR_7;
 size_t VAR_8;

 VAR_1 -= VAR_6;
 VAR_2 = FUNC_6(VAR_5, VAR_2 + VAR_6);
 FUNC_3(&VAR_7);

 VAR_8 = FUNC_5(VAR_3, VAR_1, VAR_2, &VAR_7);
 FUNC_0(VAR_8 != VAR_2);

 if (!VAR_4->fq_domain)
  FUNC_4(VAR_3, &VAR_7);
 FUNC_1(VAR_4, VAR_1, VAR_2);
}
