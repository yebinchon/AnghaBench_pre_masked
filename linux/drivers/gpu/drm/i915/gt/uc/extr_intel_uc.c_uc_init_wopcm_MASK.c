
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_uc {int dummy; } ;
struct intel_gt {TYPE_1__* i915; struct intel_uncore* uncore; } ;
struct TYPE_3__ {int wopcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (struct intel_uc*) ;
 scalar_t__ FUNC_5 (struct intel_uc*) ;
 int FUNC_6 (struct intel_uncore*,int ) ;
 int FUNC_7 (struct intel_uncore*,int ,int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct intel_gt* FUNC_10 (struct intel_uc*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct intel_uc *VAR_9)
{
 struct intel_gt *VAR_10 = FUNC_10(VAR_9);
 struct intel_uncore *VAR_11 = VAR_10->uncore;
 u32 VAR_12 = FUNC_8(&VAR_10->i915->wopcm);
 u32 VAR_13 = FUNC_9(&VAR_10->i915->wopcm);
 u32 VAR_14 = FUNC_5(VAR_9) ? VAR_8 : 0;
 u32 VAR_15;
 int VAR_16;

 if (FUNC_11(!VAR_12 || !VAR_13)) {
  FUNC_3(VAR_10->i915, "Unsuccessful WOPCM partitioning\n");
  return -VAR_1;
 }

 FUNC_0(!FUNC_4(VAR_9));
 FUNC_0(!(VAR_12 & VAR_3));
 FUNC_0(VAR_12 & ~VAR_3);
 FUNC_0(!(VAR_13 & VAR_7));
 FUNC_0(VAR_13 & ~VAR_7);

 VAR_16 = FUNC_1(VAR_10->i915, -VAR_2);
 if (VAR_16)
  return VAR_16;

 VAR_15 = VAR_7 | VAR_6;
 VAR_16 = FUNC_7(VAR_11, VAR_5, VAR_13, VAR_15,
         VAR_13 | VAR_6);
 if (VAR_16)
  goto err_out;

 VAR_15 = VAR_3 | VAR_4 | VAR_14;
 VAR_16 = FUNC_7(VAR_11, VAR_0,
         VAR_12 | VAR_14, VAR_15,
         VAR_12 | VAR_14 |
         VAR_4);
 if (VAR_16)
  goto err_out;

 return 0;

err_out:
 FUNC_3(VAR_10->i915, "Failed to init uC WOPCM registers!\n");
 FUNC_3(VAR_10->i915, "%s(%#x)=%#x\n", "DMA_GUC_WOPCM_OFFSET",
    FUNC_2(VAR_0),
    FUNC_6(VAR_11, VAR_0));
 FUNC_3(VAR_10->i915, "%s(%#x)=%#x\n", "GUC_WOPCM_SIZE",
    FUNC_2(VAR_5),
    FUNC_6(VAR_11, VAR_5));

 return VAR_16;
}
