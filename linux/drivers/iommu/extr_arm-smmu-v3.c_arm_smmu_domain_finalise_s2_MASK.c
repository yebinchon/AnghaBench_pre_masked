
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int vtcr; int vttbr; } ;
struct io_pgtable_cfg {TYPE_1__ arm_lpae_s2_cfg; } ;
struct arm_smmu_s2_cfg {int vtcr; int vttbr; int vmid; } ;
struct arm_smmu_domain {struct arm_smmu_s2_cfg s2_cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int vmid_bits; int vmid_map; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct arm_smmu_domain *VAR_0,
           struct io_pgtable_cfg *VAR_1)
{
 int VAR_2;
 struct arm_smmu_device *VAR_3 = VAR_0->smmu;
 struct arm_smmu_s2_cfg *VAR_4 = &VAR_0->s2_cfg;

 VAR_2 = FUNC_0(VAR_3->vmid_map, VAR_3->vmid_bits);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_4->vmid = (u16)VAR_2;
 VAR_4->vttbr = VAR_1->arm_lpae_s2_cfg.vttbr;
 VAR_4->vtcr = VAR_1->arm_lpae_s2_cfg.vtcr;
 return 0;
}
