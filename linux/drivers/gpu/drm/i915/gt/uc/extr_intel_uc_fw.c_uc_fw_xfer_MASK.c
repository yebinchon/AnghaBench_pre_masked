
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct uc_css_header {int dummy; } ;
struct intel_uncore {int dummy; } ;
struct intel_uc_fw {int ucode_size; int type; } ;
struct intel_gt {TYPE_2__* i915; int ggtt; struct intel_uncore* uncore; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct intel_uncore*,int ) ;
 int FUNC_7 (struct intel_uncore*,int ) ;
 int FUNC_8 (struct intel_uncore*,int ) ;
 int FUNC_9 (struct intel_uncore*,int ,int) ;
 int FUNC_10 (struct intel_uncore*,int ,int,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct intel_uc_fw*,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct intel_uc_fw *VAR_10, struct intel_gt *VAR_11,
        u32 VAR_12, u32 VAR_13)
{
 struct intel_uncore *VAR_14 = VAR_11->uncore;
 u64 VAR_15;
 int VAR_16;

 VAR_16 = FUNC_4(VAR_11->i915, -VAR_7);
 if (VAR_16)
  return VAR_16;

 FUNC_6(VAR_14, VAR_8);


 VAR_15 = FUNC_12(VAR_10, VAR_11->ggtt);
 FUNC_0(FUNC_13(VAR_15) & 0xFFFF0000);
 FUNC_9(VAR_14, VAR_2, FUNC_11(VAR_15));
 FUNC_9(VAR_14, VAR_1, FUNC_13(VAR_15));


 FUNC_9(VAR_14, VAR_4, VAR_12);
 FUNC_9(VAR_14, VAR_3, VAR_0);





 FUNC_9(VAR_14, VAR_5,
         sizeof(struct uc_css_header) + VAR_10->ucode_size);


 FUNC_9(VAR_14, VAR_6,
         FUNC_2(VAR_13 | VAR_9));


 VAR_16 = FUNC_10(VAR_14, VAR_6, VAR_9, 0, 100);
 if (VAR_16)
  FUNC_3(VAR_11->i915->drm.dev, "DMA for %s fw failed, DMA_CTRL=%u\n",
   FUNC_5(VAR_10->type),
   FUNC_8(VAR_14, VAR_6));


 FUNC_9(VAR_14, VAR_6, FUNC_1(VAR_13));

 FUNC_7(VAR_14, VAR_8);

 return VAR_16;
}
