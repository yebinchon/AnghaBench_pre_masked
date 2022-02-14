
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int minor_ver_found; int major_ver_found; int path; } ;
struct intel_huc {TYPE_1__ fw; } ;
struct TYPE_9__ {int minor_ver_found; int major_ver_found; int path; int status; } ;
struct intel_guc {TYPE_4__ fw; } ;
struct intel_uc {struct intel_huc huc; struct intel_guc guc; } ;
struct TYPE_7__ {int dev; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_8__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct intel_uc*) ;
 int FUNC_3 (struct intel_uc*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct intel_guc*) ;
 int FUNC_8 (struct intel_guc*) ;
 int FUNC_9 (struct intel_guc*) ;
 int FUNC_10 (struct drm_i915_private*,char*,int) ;
 int FUNC_11 (struct intel_guc*) ;
 int FUNC_12 (struct intel_guc*) ;
 int FUNC_13 (struct intel_guc*) ;
 int FUNC_14 (struct intel_guc*) ;
 int FUNC_15 (struct intel_guc*) ;
 int FUNC_16 (struct intel_huc*) ;
 int FUNC_17 (struct intel_huc*) ;
 int FUNC_18 (struct intel_huc*) ;
 int FUNC_19 (TYPE_4__*) ;
 scalar_t__ FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct intel_uc*) ;
 scalar_t__ FUNC_24 (struct intel_uc*) ;
 int FUNC_25 (struct intel_uc*) ;
 scalar_t__ FUNC_26 (struct intel_uc*) ;
 int FUNC_27 (struct intel_uc*) ;
 scalar_t__ FUNC_28 (struct intel_uc*) ;
 TYPE_3__* FUNC_29 (struct intel_uc*) ;
 int FUNC_30 (int ) ;

int FUNC_31(struct intel_uc *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_29(VAR_3)->i915;
 struct intel_guc *VAR_5 = &VAR_3->guc;
 struct intel_huc *VAR_6 = &VAR_3->huc;
 int VAR_7, VAR_8;

 if (!FUNC_23(VAR_3))
  return 0;






 if (!FUNC_25(VAR_3) && !FUNC_28(VAR_3))
  return 0;

 if (!FUNC_19(&VAR_5->fw)) {
  VAR_7 = FUNC_28(VAR_3) ||
        FUNC_20(&VAR_5->fw) ||
        FUNC_24(VAR_3) ?
        FUNC_21(VAR_5->fw.status) : 0;
  goto err_out;
 }

 VAR_7 = FUNC_27(VAR_3);
 if (VAR_7)
  goto err_out;

 FUNC_9(VAR_5);



 if (FUNC_1(VAR_4, 9))
  VAR_8 = 3;
 else
  VAR_8 = 1;

 while (VAR_8--) {




  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7)
   goto err_out;

  FUNC_17(VAR_6);
  FUNC_11(VAR_5);
  FUNC_15(VAR_5);
  VAR_7 = FUNC_12(VAR_5);
  if (VAR_7 == 0)
   break;

  FUNC_0("GuC fw load failed: %d; will reset and "
     "retry %d more time(s)\n", VAR_7, VAR_8);
 }


 if (VAR_7)
  goto err_log_capture;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7)
  goto err_log_capture;

 FUNC_16(VAR_6);

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7)
  goto err_communication;

 if (FUNC_24(VAR_3)) {
  VAR_7 = FUNC_14(VAR_5);
  if (VAR_7)
   goto err_communication;
 }

 FUNC_4(VAR_4->drm.dev, "%s firmware %s version %u.%u %s:%s\n",
   FUNC_22(VAR_1), VAR_5->fw.path,
   VAR_5->fw.major_ver_found, VAR_5->fw.minor_ver_found,
   "submission",
   FUNC_6(FUNC_24(VAR_3)));

 if (FUNC_26(VAR_3)) {
  FUNC_4(VAR_4->drm.dev, "%s firmware %s version %u.%u %s:%s\n",
    FUNC_22(VAR_2),
    VAR_6->fw.path,
    VAR_6->fw.major_ver_found, VAR_6->fw.minor_ver_found,
    "authenticated",
    FUNC_30(FUNC_18(VAR_6)));
 }

 return 0;




err_communication:
 FUNC_7(VAR_5);
err_log_capture:
 FUNC_2(VAR_3);
err_out:
 FUNC_3(VAR_3);

 if (!VAR_7) {
  FUNC_5(VAR_4->drm.dev, "GuC is uninitialized\n");

  return 0;
 }

 FUNC_10(VAR_4, "GuC initialization failed %d\n", VAR_7);


 return -VAR_0;
}
