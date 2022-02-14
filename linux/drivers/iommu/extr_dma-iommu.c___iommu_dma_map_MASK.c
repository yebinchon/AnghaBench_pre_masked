
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int dummy; } ;
struct iommu_domain {struct iommu_dma_cookie* iova_cookie; } ;
struct iommu_dma_cookie {struct iova_domain iovad; } ;
struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct iommu_domain*,size_t,int ,struct device*) ;
 int FUNC_2 (struct iommu_dma_cookie*,scalar_t__,size_t) ;
 struct iommu_domain* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct iommu_domain*,scalar_t__,scalar_t__,size_t,int) ;
 size_t FUNC_5 (struct iova_domain*,size_t) ;
 size_t FUNC_6 (struct iova_domain*,scalar_t__) ;

__attribute__((used)) static dma_addr_t FUNC_7(struct device *VAR_1, phys_addr_t VAR_2,
  size_t VAR_3, int VAR_4)
{
 struct iommu_domain *VAR_5 = FUNC_3(VAR_1);
 struct iommu_dma_cookie *VAR_6 = VAR_5->iova_cookie;
 struct iova_domain *VAR_7 = &VAR_6->iovad;
 size_t VAR_8 = FUNC_6(VAR_7, VAR_2);
 dma_addr_t VAR_9;

 VAR_3 = FUNC_5(VAR_7, VAR_3 + VAR_8);

 VAR_9 = FUNC_1(VAR_5, VAR_3, FUNC_0(VAR_1), VAR_1);
 if (!VAR_9)
  return VAR_0;

 if (FUNC_4(VAR_5, VAR_9, VAR_2 - VAR_8, VAR_3, VAR_4)) {
  FUNC_2(VAR_6, VAR_9, VAR_3);
  return VAR_0;
 }
 return VAR_9 + VAR_8;
}
