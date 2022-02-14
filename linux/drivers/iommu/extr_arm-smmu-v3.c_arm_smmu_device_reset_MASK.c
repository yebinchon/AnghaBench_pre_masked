
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_19__ {int prod; int cons; } ;
struct TYPE_20__ {TYPE_8__ llq; int q_base; } ;
struct TYPE_11__ {TYPE_9__ q; } ;
struct TYPE_16__ {int prod; int cons; } ;
struct TYPE_17__ {TYPE_5__ llq; int q_base; } ;
struct TYPE_18__ {TYPE_6__ q; } ;
struct TYPE_13__ {int prod; int cons; } ;
struct TYPE_14__ {TYPE_2__ llq; int q_base; } ;
struct TYPE_15__ {TYPE_3__ q; } ;
struct TYPE_12__ {int strtab_base_cfg; int strtab_base; } ;
struct arm_smmu_device {int features; int dev; TYPE_10__ priq; scalar_t__ base; TYPE_7__ evtq; TYPE_4__ cmdq; TYPE_1__ strtab_cfg; } ;
struct arm_smmu_cmdq_ent {int opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int ,int ) ;
 int VAR_37 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct arm_smmu_device*,struct arm_smmu_cmdq_ent*) ;
 int FUNC_3 (struct arm_smmu_device*) ;
 int FUNC_4 (struct arm_smmu_device*) ;
 scalar_t__ FUNC_5 (int ,struct arm_smmu_device*) ;
 int FUNC_6 (struct arm_smmu_device*) ;
 int FUNC_7 (struct arm_smmu_device*,int ,int ) ;
 int FUNC_8 (struct arm_smmu_device*,int,scalar_t__,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct arm_smmu_device *VAR_39, bool VAR_40)
{
 int VAR_41;
 u32 VAR_42, VAR_43;
 struct arm_smmu_cmdq_ent VAR_44;


 VAR_42 = FUNC_12(VAR_39->base + VAR_3);
 if (VAR_42 & VAR_26) {
  FUNC_10(VAR_39->dev, "SMMU currently enabled! Resetting...\n");
  FUNC_1(FUNC_11() && !VAR_38);
  FUNC_7(VAR_39, VAR_37, 0);
 }

 VAR_41 = FUNC_4(VAR_39);
 if (VAR_41)
  return VAR_41;


 VAR_42 = FUNC_0(VAR_33, VAR_16) |
       FUNC_0(VAR_32, VAR_27) |
       FUNC_0(VAR_31, VAR_27) |
       FUNC_0(VAR_30, VAR_16) |
       FUNC_0(VAR_29, VAR_27) |
       FUNC_0(VAR_28, VAR_27);
 FUNC_13(VAR_42, VAR_39->base + VAR_5);


 VAR_42 = VAR_35 | VAR_36 | VAR_34;
 FUNC_13(VAR_42, VAR_39->base + VAR_6);


 FUNC_14(VAR_39->strtab_cfg.strtab_base,
         VAR_39->base + VAR_17);
 FUNC_13(VAR_39->strtab_cfg.strtab_base_cfg,
         VAR_39->base + VAR_18);


 FUNC_14(VAR_39->cmdq.q.q_base, VAR_39->base + VAR_0);
 FUNC_13(VAR_39->cmdq.q.llq.prod, VAR_39->base + VAR_2);
 FUNC_13(VAR_39->cmdq.q.llq.cons, VAR_39->base + VAR_1);

 VAR_43 = VAR_23;
 VAR_41 = FUNC_8(VAR_39, VAR_43, VAR_3,
          VAR_4);
 if (VAR_41) {
  FUNC_9(VAR_39->dev, "failed to enable command queue\n");
  return VAR_41;
 }


 VAR_44.opcode = VAR_19;
 FUNC_2(VAR_39, &VAR_44);
 FUNC_3(VAR_39);


 if (VAR_39->features & VAR_11) {
  VAR_44.opcode = VAR_20;
  FUNC_2(VAR_39, &VAR_44);
 }

 VAR_44.opcode = VAR_21;
 FUNC_2(VAR_39, &VAR_44);
 FUNC_3(VAR_39);


 FUNC_14(VAR_39->evtq.q.q_base, VAR_39->base + VAR_7);
 FUNC_13(VAR_39->evtq.q.llq.prod,
         FUNC_5(VAR_9, VAR_39));
 FUNC_13(VAR_39->evtq.q.llq.cons,
         FUNC_5(VAR_8, VAR_39));

 VAR_43 |= VAR_24;
 VAR_41 = FUNC_8(VAR_39, VAR_43, VAR_3,
          VAR_4);
 if (VAR_41) {
  FUNC_9(VAR_39->dev, "failed to enable event queue\n");
  return VAR_41;
 }


 if (VAR_39->features & VAR_12) {
  FUNC_14(VAR_39->priq.q.q_base,
          VAR_39->base + VAR_13);
  FUNC_13(VAR_39->priq.q.llq.prod,
          FUNC_5(VAR_15, VAR_39));
  FUNC_13(VAR_39->priq.q.llq.cons,
          FUNC_5(VAR_14, VAR_39));

  VAR_43 |= VAR_25;
  VAR_41 = FUNC_8(VAR_39, VAR_43, VAR_3,
           VAR_4);
  if (VAR_41) {
   FUNC_9(VAR_39->dev, "failed to enable PRI queue\n");
   return VAR_41;
  }
 }

 if (VAR_39->features & VAR_10) {
  VAR_43 |= VAR_22;
  VAR_41 = FUNC_8(VAR_39, VAR_43, VAR_3,
           VAR_4);
  if (VAR_41) {
   FUNC_9(VAR_39->dev, "failed to enable ATS check\n");
   return VAR_41;
  }
 }

 VAR_41 = FUNC_6(VAR_39);
 if (VAR_41) {
  FUNC_9(VAR_39->dev, "failed to setup irqs\n");
  return VAR_41;
 }

 if (FUNC_11())
  VAR_43 &= ~(VAR_24 | VAR_25);


 if (!VAR_40 || VAR_38) {
  VAR_43 |= VAR_26;
 } else {
  VAR_41 = FUNC_7(VAR_39, 0, VAR_37);
  if (VAR_41)
   return VAR_41;
 }
 VAR_41 = FUNC_8(VAR_39, VAR_43, VAR_3,
          VAR_4);
 if (VAR_41) {
  FUNC_9(VAR_39->dev, "failed to enable SMMU interface\n");
  return VAR_41;
 }

 return 0;
}
