
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {int mutex; int flags; } ;
struct intel_gt {TYPE_3__ reset; TYPE_4__* i915; } ;
typedef int intel_engine_mask_t ;
struct TYPE_17__ {scalar_t__ reset; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {int reset_count; } ;
struct TYPE_16__ {TYPE_2__ drm; TYPE_1__ gpu_error; } ;
struct TYPE_12__ {scalar_t__ gpu_reset_clobbers_display; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 TYPE_10__* FUNC_4 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_5 (struct intel_gt*) ;
 int FUNC_6 (struct intel_gt*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,char const*) ;
 scalar_t__ FUNC_11 (struct intel_gt*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_8__ VAR_2 ;
 int FUNC_13 (struct intel_gt*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct intel_gt*,int ) ;
 int FUNC_22 (struct intel_gt*) ;
 int FUNC_23 (struct intel_gt*) ;
 int FUNC_24 (int ,int *) ;

void FUNC_25(struct intel_gt *VAR_3,
      intel_engine_mask_t VAR_4,
      const char *VAR_5)
{
 intel_engine_mask_t VAR_6;
 int VAR_7;

 FUNC_3("flags=%lx\n", VAR_3->reset.flags);

 FUNC_18();
 FUNC_2(!FUNC_24(VAR_0, &VAR_3->reset.flags));
 FUNC_19(&VAR_3->reset.mutex);


 if (!FUNC_6(VAR_3))
  goto unlock;

 if (VAR_5)
  FUNC_10(VAR_3->i915->drm.dev,
      "Resetting chip for %s\n", VAR_5);
 FUNC_8(&VAR_3->i915->gpu_error.reset_count);

 VAR_6 = FUNC_22(VAR_3);

 if (!FUNC_14(VAR_3->i915)) {
  if (VAR_2.reset)
   FUNC_9(VAR_3->i915->drm.dev, "GPU reset not supported\n");
  else
   FUNC_0("GPU reset disabled\n");
  goto error;
 }

 if (FUNC_4(VAR_3->i915)->gpu_reset_clobbers_display)
  FUNC_16(VAR_3->i915);

 if (FUNC_11(VAR_3, VAR_4)) {
  FUNC_9(VAR_3->i915->drm.dev, "Failed to reset chip\n");
  goto taint;
 }

 if (FUNC_4(VAR_3->i915)->gpu_reset_clobbers_display)
  FUNC_17(VAR_3->i915);

 FUNC_15(VAR_3->i915);
 VAR_7 = FUNC_12(VAR_3->i915);
 if (VAR_7) {
  FUNC_1("Failed to initialise HW following reset (%d)\n",
     VAR_7);
  goto taint;
 }

 VAR_7 = FUNC_23(VAR_3);
 if (VAR_7)
  goto taint;

 FUNC_13(VAR_3);

finish:
 FUNC_21(VAR_3, VAR_6);
unlock:
 FUNC_20(&VAR_3->reset.mutex);
 return;

taint:
 FUNC_7(VAR_1);
error:
 FUNC_5(VAR_3);
 goto finish;
}
