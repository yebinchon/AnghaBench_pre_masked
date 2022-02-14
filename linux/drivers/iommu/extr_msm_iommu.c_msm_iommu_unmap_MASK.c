
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_priv {int pgtlock; TYPE_1__* iop; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {size_t (* unmap ) (TYPE_1__*,unsigned long,size_t,struct iommu_iotlb_gather*) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 size_t FUNC_2 (TYPE_1__*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 struct msm_priv* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_4(struct iommu_domain *VAR_0, unsigned long VAR_1,
         size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct msm_priv *VAR_4 = FUNC_3(VAR_0);
 unsigned long VAR_5;

 FUNC_0(&VAR_4->pgtlock, VAR_5);
 VAR_2 = VAR_4->iop->unmap(VAR_4->iop, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_4->pgtlock, VAR_5);

 return VAR_2;
}
