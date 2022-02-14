
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int * mair; int tcr; int * ttbr; } ;
struct io_pgtable_cfg {TYPE_2__ arm_lpae_s1_cfg; } ;
struct TYPE_3__ {int mair; int tcr; int ttbr; int asid; } ;
struct arm_smmu_s1_cfg {TYPE_1__ cd; int cdptr; int cdptr_dma; } ;
struct arm_smmu_domain {struct arm_smmu_s1_cfg s1_cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int asid_map; int dev; int asid_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct arm_smmu_domain *VAR_4,
           struct io_pgtable_cfg *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct arm_smmu_device *VAR_8 = VAR_4->smmu;
 struct arm_smmu_s1_cfg *VAR_9 = &VAR_4->s1_cfg;

 VAR_7 = FUNC_0(VAR_8->asid_map, VAR_8->asid_bits);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_9->cdptr = FUNC_3(VAR_8->dev, VAR_0 << 3,
      &VAR_9->cdptr_dma,
      VAR_2 | VAR_3);
 if (!VAR_9->cdptr) {
  FUNC_2(VAR_8->dev, "failed to allocate context descriptor\n");
  VAR_6 = -VAR_1;
  goto out_free_asid;
 }

 VAR_9->cd.asid = (u16)VAR_7;
 VAR_9->cd.ttbr = VAR_5->arm_lpae_s1_cfg.ttbr[0];
 VAR_9->cd.tcr = VAR_5->arm_lpae_s1_cfg.tcr;
 VAR_9->cd.mair = VAR_5->arm_lpae_s1_cfg.mair[0];
 return 0;

out_free_asid:
 FUNC_1(VAR_8->asid_map, VAR_7);
 return VAR_6;
}
