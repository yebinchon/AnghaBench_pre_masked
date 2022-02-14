
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_vgpu {int dummy; } ;
struct TYPE_5__ {int mmio_context_lock; } ;
struct intel_gvt {int vgpu_idr; struct intel_vgpu* idle_vgpu; struct drm_i915_private* dev_priv; int sched_lock; int lock; TYPE_1__ scheduler; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct drm_i915_private {TYPE_3__ drm; struct intel_gvt* gvt; } ;
struct TYPE_8__ {int initialized; int * dev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_vgpu*) ;
 int FUNC_1 (struct intel_vgpu*) ;
 scalar_t__ FUNC_2 (struct intel_gvt*) ;
 int FUNC_3 (struct intel_gvt*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct intel_gvt*) ;
 int FUNC_9 (struct intel_gvt*) ;
 int FUNC_10 (struct intel_gvt*) ;
 int FUNC_11 (struct intel_gvt*) ;
 int FUNC_12 (struct intel_gvt*) ;
 int FUNC_13 (struct intel_gvt*) ;
 int FUNC_14 (struct intel_gvt*) ;
 int FUNC_15 (struct intel_gvt*) ;
 int FUNC_16 (struct intel_gvt*) ;
 struct intel_vgpu* FUNC_17 (struct intel_gvt*) ;
 int FUNC_18 (struct intel_gvt*) ;
 int FUNC_19 (struct intel_gvt*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_20 (struct intel_gvt*) ;
 int FUNC_21 (struct intel_gvt*) ;
 int FUNC_22 (struct intel_gvt*) ;
 int FUNC_23 (struct intel_gvt*) ;
 int FUNC_24 (struct intel_gvt*) ;
 int FUNC_25 (struct intel_gvt*) ;
 int FUNC_26 (struct intel_gvt*) ;
 int FUNC_27 (struct intel_gvt*) ;
 int FUNC_28 (struct intel_gvt*) ;
 int FUNC_29 (struct intel_gvt*) ;
 int FUNC_30 (struct intel_gvt*) ;
 struct intel_gvt* FUNC_31 (int,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;

int FUNC_34(struct drm_i915_private *VAR_4)
{
 struct intel_gvt *VAR_5;
 struct intel_vgpu *VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_4->gvt))
  return -VAR_0;

 VAR_5 = FUNC_31(sizeof(struct intel_gvt), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_4("init gvt device\n");

 FUNC_7(&VAR_5->vgpu_idr);
 FUNC_33(&VAR_5->scheduler.mmio_context_lock);
 FUNC_32(&VAR_5->lock);
 FUNC_32(&VAR_5->sched_lock);
 VAR_5->dev_priv = VAR_4;

 FUNC_8(VAR_5);

 VAR_7 = FUNC_29(VAR_5);
 if (VAR_7)
  goto out_clean_idr;

 FUNC_21(VAR_5);

 VAR_7 = FUNC_28(VAR_5);
 if (VAR_7)
  goto out_clean_mmio_info;

 VAR_7 = FUNC_23(VAR_5);
 if (VAR_7)
  goto out_free_firmware;

 VAR_7 = FUNC_22(VAR_5);
 if (VAR_7)
  goto out_clean_irq;

 VAR_7 = FUNC_27(VAR_5);
 if (VAR_7)
  goto out_clean_gtt;

 VAR_7 = FUNC_24(VAR_5);
 if (VAR_7)
  goto out_clean_workload_scheduler;

 VAR_7 = FUNC_20(VAR_5);
 if (VAR_7)
  goto out_clean_sched_policy;

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7)
  goto out_clean_cmd_parser;

 VAR_7 = FUNC_26(VAR_5);
 if (VAR_7)
  goto out_clean_thread;

 VAR_7 = FUNC_25(VAR_5);
 if (VAR_7 == 0) {
  FUNC_5("failed to init vgpu type groups: %d\n", VAR_7);
  goto out_clean_types;
 }

 VAR_6 = FUNC_17(VAR_5);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  FUNC_5("failed to create idle vgpu\n");
  goto out_clean_types;
 }
 VAR_5->idle_vgpu = VAR_6;

 FUNC_18(VAR_5);

 FUNC_4("gvt device initialization is done\n");
 VAR_4->gvt = VAR_5;
 VAR_3.dev = &VAR_4->drm.pdev->dev;
 VAR_3.initialized = 1;
 return 0;

out_clean_types:
 FUNC_15(VAR_5);
out_clean_thread:
 FUNC_3(VAR_5);
out_clean_cmd_parser:
 FUNC_10(VAR_5);
out_clean_sched_policy:
 FUNC_14(VAR_5);
out_clean_workload_scheduler:
 FUNC_16(VAR_5);
out_clean_gtt:
 FUNC_11(VAR_5);
out_clean_irq:
 FUNC_12(VAR_5);
out_free_firmware:
 FUNC_19(VAR_5);
out_clean_mmio_info:
 FUNC_13(VAR_5);
out_clean_idr:
 FUNC_6(&VAR_5->vgpu_idr);
 FUNC_30(VAR_5);
 return VAR_7;
}
