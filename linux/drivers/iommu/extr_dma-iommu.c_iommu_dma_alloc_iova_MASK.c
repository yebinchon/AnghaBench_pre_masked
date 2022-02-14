
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iova_domain {int dummy; } ;
struct TYPE_2__ {int aperture_end; scalar_t__ force_aperture; } ;
struct iommu_domain {TYPE_1__ geometry; struct iommu_dma_cookie* iova_cookie; } ;
struct iommu_dma_cookie {scalar_t__ type; unsigned long msi_iova; struct iova_domain iovad; } ;
struct device {int bus_dma_mask; } ;
typedef unsigned long dma_addr_t ;


 unsigned long FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct iova_domain*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_2 (struct device*) ;
 unsigned long FUNC_3 (struct iova_domain*) ;
 unsigned long FUNC_4 (unsigned long,int ) ;
 unsigned long FUNC_5 (unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_6(struct iommu_domain *VAR_2,
  size_t VAR_3, dma_addr_t VAR_4, struct device *VAR_5)
{
 struct iommu_dma_cookie *VAR_6 = VAR_2->iova_cookie;
 struct iova_domain *VAR_7 = &VAR_6->iovad;
 unsigned long VAR_8, VAR_9, VAR_10 = 0;

 if (VAR_6->type == VAR_0) {
  VAR_6->msi_iova += VAR_3;
  return VAR_6->msi_iova - VAR_3;
 }

 VAR_8 = FUNC_3(VAR_7);
 VAR_9 = VAR_3 >> VAR_8;






 if (VAR_9 < (1 << (VAR_1 - 1)))
  VAR_9 = FUNC_5(VAR_9);

 if (VAR_5->bus_dma_mask)
  VAR_4 &= VAR_5->bus_dma_mask;

 if (VAR_2->geometry.force_aperture)
  VAR_4 = FUNC_4(VAR_4, VAR_2->geometry.aperture_end);


 if (VAR_4 > FUNC_0(32) && FUNC_2(VAR_5))
  VAR_10 = FUNC_1(VAR_7, VAR_9,
           FUNC_0(32) >> VAR_8, 0);

 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_4 >> VAR_8,
           1);

 return (dma_addr_t)VAR_10 << VAR_8;
}
