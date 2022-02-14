
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tcr; int* ttbr; int * mair; } ;
struct TYPE_7__ {int tcr; int* ttbr; int nmrr; int prrr; } ;
struct TYPE_6__ {int vtcr; int vttbr; } ;
struct io_pgtable_cfg {TYPE_4__ arm_lpae_s1_cfg; TYPE_3__ arm_v7s_cfg; TYPE_2__ arm_lpae_s2_cfg; } ;
struct arm_smmu_cfg {size_t cbndx; scalar_t__ cbar; scalar_t__ fmt; int asid; } ;
struct arm_smmu_domain {TYPE_1__* smmu; struct arm_smmu_cfg cfg; } ;
struct arm_smmu_cb {int* tcr; int* ttbr; int * mair; struct arm_smmu_cfg* cfg; } ;
struct TYPE_5__ {struct arm_smmu_cb* cbs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct arm_smmu_domain *VAR_7,
           struct io_pgtable_cfg *VAR_8)
{
 struct arm_smmu_cfg *VAR_9 = &VAR_7->cfg;
 struct arm_smmu_cb *VAR_10 = &VAR_7->smmu->cbs[VAR_9->cbndx];
 bool VAR_11 = VAR_9->cbar != VAR_2;

 VAR_10->cfg = VAR_9;


 if (VAR_11) {
  if (VAR_9->fmt == VAR_0) {
   VAR_10->tcr[0] = VAR_8->arm_v7s_cfg.tcr;
  } else {
   VAR_10->tcr[0] = VAR_8->arm_lpae_s1_cfg.tcr;
   VAR_10->tcr[1] = VAR_8->arm_lpae_s1_cfg.tcr >> 32;
   VAR_10->tcr[1] |= FUNC_0(VAR_4, VAR_5);
   if (VAR_9->fmt == VAR_1)
    VAR_10->tcr[1] |= VAR_3;
  }
 } else {
  VAR_10->tcr[0] = VAR_8->arm_lpae_s2_cfg.vtcr;
 }


 if (VAR_11) {
  if (VAR_9->fmt == VAR_0) {
   VAR_10->ttbr[0] = VAR_8->arm_v7s_cfg.ttbr[0];
   VAR_10->ttbr[1] = VAR_8->arm_v7s_cfg.ttbr[1];
  } else {
   VAR_10->ttbr[0] = VAR_8->arm_lpae_s1_cfg.ttbr[0];
   VAR_10->ttbr[0] |= FUNC_0(VAR_6, VAR_9->asid);
   VAR_10->ttbr[1] = VAR_8->arm_lpae_s1_cfg.ttbr[1];
   VAR_10->ttbr[1] |= FUNC_0(VAR_6, VAR_9->asid);
  }
 } else {
  VAR_10->ttbr[0] = VAR_8->arm_lpae_s2_cfg.vttbr;
 }


 if (VAR_11) {
  if (VAR_9->fmt == VAR_0) {
   VAR_10->mair[0] = VAR_8->arm_v7s_cfg.prrr;
   VAR_10->mair[1] = VAR_8->arm_v7s_cfg.nmrr;
  } else {
   VAR_10->mair[0] = VAR_8->arm_lpae_s1_cfg.mair[0];
   VAR_10->mair[1] = VAR_8->arm_lpae_s1_cfg.mair[1];
  }
 }
}
