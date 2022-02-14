
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {scalar_t__ type; } ;
struct io_pgtable_ops {int (* iova_to_phys ) (struct io_pgtable_ops*,int ) ;} ;
struct arm_smmu_domain {scalar_t__ stage; TYPE_1__* smmu; struct io_pgtable_ops* pgtbl_ops; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iommu_domain*,int ) ;
 int FUNC_1 (struct io_pgtable_ops*,int ) ;
 struct arm_smmu_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_3(struct iommu_domain *VAR_3,
     dma_addr_t VAR_4)
{
 struct arm_smmu_domain *VAR_5 = FUNC_2(VAR_3);
 struct io_pgtable_ops *VAR_6 = VAR_5->pgtbl_ops;

 if (VAR_3->type == VAR_2)
  return VAR_4;

 if (!VAR_6)
  return 0;

 if (VAR_5->smmu->features & VAR_1 &&
   VAR_5->stage == VAR_0)
  return FUNC_0(VAR_3, VAR_4);

 return VAR_6->iova_to_phys(VAR_6, VAR_4);
}
