
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_device {scalar_t__ version; int features; struct arm_smmu_cb* cbs; } ;
struct arm_smmu_cfg {scalar_t__ cbar; scalar_t__ fmt; scalar_t__ vmid; scalar_t__ irptndx; int asid; } ;
struct arm_smmu_cb {int* tcr; int* ttbr; int* mair; struct arm_smmu_cfg* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct arm_smmu_device*,int,int ,int) ;
 int FUNC_5 (struct arm_smmu_device*,int,int ,int) ;
 int FUNC_6 (struct arm_smmu_device*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct arm_smmu_device *VAR_31, int VAR_32)
{
 u32 VAR_33;
 bool VAR_34;
 struct arm_smmu_cb *VAR_35 = &VAR_31->cbs[VAR_32];
 struct arm_smmu_cfg *VAR_36 = VAR_35->cfg;


 if (!VAR_36) {
  FUNC_4(VAR_31, VAR_32, VAR_3, 0);
  return;
 }

 VAR_34 = VAR_36->cbar != VAR_21;


 if (VAR_31->version > VAR_11) {
  if (VAR_36->fmt == VAR_9)
   VAR_33 = VAR_13;
  else
   VAR_33 = 0;

  if (VAR_31->features & VAR_10)
   VAR_33 |= FUNC_2(VAR_14, VAR_36->vmid);

  FUNC_6(VAR_31, FUNC_0(VAR_32), VAR_33);
 }


 VAR_33 = FUNC_2(VAR_20, VAR_36->cbar);
 if (VAR_31->version < VAR_12)
  VAR_33 |= FUNC_2(VAR_15, VAR_36->irptndx);





 if (VAR_34) {
  VAR_33 |= FUNC_2(VAR_16, VAR_17) |
   FUNC_2(VAR_18, VAR_19);
 } else if (!(VAR_31->features & VAR_10)) {

  VAR_33 |= FUNC_2(VAR_22, VAR_36->vmid);
 }
 FUNC_6(VAR_31, FUNC_1(VAR_32), VAR_33);






 if (VAR_34 && VAR_31->version > VAR_11)
  FUNC_4(VAR_31, VAR_32, VAR_5, VAR_35->tcr[1]);
 FUNC_4(VAR_31, VAR_32, VAR_4, VAR_35->tcr[0]);


 if (VAR_36->fmt == VAR_8) {
  FUNC_4(VAR_31, VAR_32, VAR_0, VAR_36->asid);
  FUNC_4(VAR_31, VAR_32, VAR_6, VAR_35->ttbr[0]);
  FUNC_4(VAR_31, VAR_32, VAR_7, VAR_35->ttbr[1]);
 } else {
  FUNC_5(VAR_31, VAR_32, VAR_6, VAR_35->ttbr[0]);
  if (VAR_34)
   FUNC_5(VAR_31, VAR_32, VAR_7,
        VAR_35->ttbr[1]);
 }


 if (VAR_34) {
  FUNC_4(VAR_31, VAR_32, VAR_1, VAR_35->mair[0]);
  FUNC_4(VAR_31, VAR_32, VAR_2, VAR_35->mair[1]);
 }


 VAR_33 = VAR_25 | VAR_26 | VAR_24 | VAR_30 | VAR_28;
 if (VAR_34)
  VAR_33 |= VAR_29;
 if (FUNC_3(VAR_23))
  VAR_33 |= VAR_27;

 FUNC_4(VAR_31, VAR_32, VAR_3, VAR_33);
}
