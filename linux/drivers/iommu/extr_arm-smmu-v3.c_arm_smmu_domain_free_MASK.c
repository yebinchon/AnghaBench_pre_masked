
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct arm_smmu_s2_cfg {scalar_t__ vmid; } ;
struct TYPE_2__ {scalar_t__ asid; } ;
struct arm_smmu_s1_cfg {TYPE_1__ cd; int cdptr_dma; scalar_t__ cdptr; } ;
struct arm_smmu_domain {scalar_t__ stage; struct arm_smmu_s2_cfg s2_cfg; struct arm_smmu_device* smmu; struct arm_smmu_s1_cfg s1_cfg; int pgtbl_ops; } ;
struct arm_smmu_device {int vmid_map; int asid_map; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iommu_domain*) ;
 int FUNC_4 (struct arm_smmu_domain*) ;
 struct arm_smmu_domain* FUNC_5 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_6(struct iommu_domain *VAR_2)
{
 struct arm_smmu_domain *VAR_3 = FUNC_5(VAR_2);
 struct arm_smmu_device *VAR_4 = VAR_3->smmu;

 FUNC_3(VAR_2);
 FUNC_2(VAR_3->pgtbl_ops);


 if (VAR_3->stage == VAR_0) {
  struct arm_smmu_s1_cfg *VAR_5 = &VAR_3->s1_cfg;

  if (VAR_5->cdptr) {
   FUNC_1(VAR_3->smmu->dev,
        VAR_1 << 3,
        VAR_5->cdptr,
        VAR_5->cdptr_dma);

   FUNC_0(VAR_4->asid_map, VAR_5->cd.asid);
  }
 } else {
  struct arm_smmu_s2_cfg *VAR_6 = &VAR_3->s2_cfg;
  if (VAR_6->vmid)
   FUNC_0(VAR_4->vmid_map, VAR_6->vmid);
 }

 FUNC_4(VAR_3);
}
