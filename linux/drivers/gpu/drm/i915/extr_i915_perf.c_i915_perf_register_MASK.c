
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int attr; } ;
struct TYPE_11__ {scalar_t__ id; int ref_count; int sysfs_metric; TYPE_4__ sysfs_metric_id; } ;
struct TYPE_12__ {int lock; int * metrics_kobj; TYPE_5__ test_config; int initialized; } ;
struct TYPE_9__ {TYPE_2__* primary; } ;
struct drm_i915_private {TYPE_6__ perf; TYPE_3__ drm; } ;
struct TYPE_8__ {TYPE_1__* kdev; } ;
struct TYPE_7__ {int kobj; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*) ;
 scalar_t__ FUNC_14 (struct drm_i915_private*) ;
 scalar_t__ FUNC_15 (struct drm_i915_private*) ;
 scalar_t__ FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (struct drm_i915_private*) ;
 int FUNC_19 (struct drm_i915_private*) ;
 int FUNC_20 (struct drm_i915_private*) ;
 int FUNC_21 (struct drm_i915_private*) ;
 int FUNC_22 (struct drm_i915_private*) ;
 int FUNC_23 (struct drm_i915_private*) ;
 int FUNC_24 (struct drm_i915_private*) ;
 int FUNC_25 (struct drm_i915_private*) ;
 int FUNC_26 (struct drm_i915_private*) ;
 int FUNC_27 (struct drm_i915_private*) ;
 int FUNC_28 (struct drm_i915_private*) ;
 int FUNC_29 (struct drm_i915_private*) ;
 int FUNC_30 (struct drm_i915_private*) ;
 int FUNC_31 (struct drm_i915_private*) ;
 int * FUNC_32 (char*,int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *,int *) ;

void FUNC_38(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 if (!VAR_0->perf.initialized)
  return;





 FUNC_34(&VAR_0->perf.lock);

 VAR_0->perf.metrics_kobj =
  FUNC_32("metrics",
           &VAR_0->drm.primary->kdev->kobj);
 if (!VAR_0->perf.metrics_kobj)
  goto exit;

 FUNC_36(&VAR_0->perf.test_config.sysfs_metric_id.attr);

 if (FUNC_0(VAR_0) >= 11) {
  FUNC_26(VAR_0);
 } else if (FUNC_3(VAR_0)) {
  FUNC_23(VAR_0);
 } else if (FUNC_7(VAR_0)) {
  if (FUNC_4(VAR_0))
   FUNC_20(VAR_0);
  if (FUNC_5(VAR_0))
   FUNC_21(VAR_0);
 } else if (FUNC_8(VAR_0)) {
  FUNC_24(VAR_0);
 } else if (FUNC_10(VAR_0)) {
  if (FUNC_11(VAR_0))
   FUNC_27(VAR_0);
  else if (FUNC_12(VAR_0))
   FUNC_28(VAR_0);
 } else if (FUNC_2(VAR_0)) {
  FUNC_19(VAR_0);
 } else if (FUNC_16(VAR_0)) {
  if (FUNC_13(VAR_0))
   FUNC_29(VAR_0);
  else if (FUNC_14(VAR_0))
   FUNC_30(VAR_0);
  else if (FUNC_15(VAR_0))
   FUNC_31(VAR_0);
 } else if (FUNC_6(VAR_0)) {
  FUNC_22(VAR_0);
 } else if (FUNC_1(VAR_0)) {
  FUNC_18(VAR_0);
 } else if (FUNC_9(VAR_0)) {
  FUNC_25(VAR_0);
}

 if (VAR_0->perf.test_config.id == 0)
  goto sysfs_error;

 VAR_1 = FUNC_37(VAR_0->perf.metrics_kobj,
     &VAR_0->perf.test_config.sysfs_metric);
 if (VAR_1)
  goto sysfs_error;

 FUNC_17(&VAR_0->perf.test_config.ref_count, 1);

 goto exit;

sysfs_error:
 FUNC_33(VAR_0->perf.metrics_kobj);
 VAR_0->perf.metrics_kobj = ((void*)0);

exit:
 FUNC_35(&VAR_0->perf.lock);
}
