
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {scalar_t__ type; } ;
struct arm_smmu_cfg {size_t cbndx; size_t irptndx; } ;
struct arm_smmu_domain {int pgtbl_ops; struct arm_smmu_cfg cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int* irqs; size_t num_global_irqs; int context_map; int dev; TYPE_1__* cbs; } ;
struct TYPE_2__ {int * cfg; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (struct arm_smmu_device*) ;
 int FUNC_3 (struct arm_smmu_device*,size_t) ;
 int FUNC_4 (int ,int,struct iommu_domain*) ;
 int FUNC_5 (int ) ;
 struct arm_smmu_domain* FUNC_6 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_7(struct iommu_domain *VAR_2)
{
 struct arm_smmu_domain *VAR_3 = FUNC_6(VAR_2);
 struct arm_smmu_device *VAR_4 = VAR_3->smmu;
 struct arm_smmu_cfg *VAR_5 = &VAR_3->cfg;
 int VAR_6, VAR_7;

 if (!VAR_4 || VAR_2->type == VAR_1)
  return;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return;





 VAR_4->cbs[VAR_5->cbndx].cfg = ((void*)0);
 FUNC_3(VAR_4, VAR_5->cbndx);

 if (VAR_5->irptndx != VAR_0) {
  VAR_7 = VAR_4->irqs[VAR_4->num_global_irqs + VAR_5->irptndx];
  FUNC_4(VAR_4->dev, VAR_7, VAR_2);
 }

 FUNC_5(VAR_3->pgtbl_ops);
 FUNC_0(VAR_4->context_map, VAR_5->cbndx);

 FUNC_2(VAR_4);
}
