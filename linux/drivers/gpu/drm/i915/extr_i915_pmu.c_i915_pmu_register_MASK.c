
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * event_init; int event_idx; int read; int stop; int start; int del; int add; int task_ctx_nr; int attr_groups; } ;
struct TYPE_9__ {int function; } ;
struct i915_pmu {TYPE_2__ base; TYPE_5__ timer; int lock; } ;
struct TYPE_6__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; struct i915_pmu pmu; } ;
struct TYPE_8__ {int attrs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct i915_pmu*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct i915_pmu*) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 int FUNC_6 (struct i915_pmu*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_i915_private *VAR_14)
{
 struct i915_pmu *VAR_15 = &VAR_14->pmu;
 int VAR_16;

 if (FUNC_1(VAR_14) <= 2) {
  FUNC_3(VAR_14->drm.dev, "PMU not supported for this GPU.");
  return;
 }

 VAR_11.attrs = FUNC_2(VAR_15);
 if (!VAR_11.attrs) {
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_15->base.attr_groups = VAR_3;
 VAR_15->base.task_ctx_nr = VAR_13;
 VAR_15->base.event_init = VAR_7;
 VAR_15->base.add = VAR_4;
 VAR_15->base.del = VAR_5;
 VAR_15->base.start = VAR_9;
 VAR_15->base.stop = VAR_10;
 VAR_15->base.read = VAR_8;
 VAR_15->base.event_idx = VAR_6;

 FUNC_9(&VAR_15->lock);
 FUNC_5(&VAR_15->timer, VAR_0, VAR_2);
 VAR_15->timer.function = VAR_12;

 VAR_16 = FUNC_7(&VAR_15->base, "i915", -1);
 if (VAR_16)
  goto err;

 VAR_16 = FUNC_6(VAR_15);
 if (VAR_16)
  goto err_unreg;

 return;

err_unreg:
 FUNC_8(&VAR_15->base);
err:
 VAR_15->base.event_init = ((void*)0);
 FUNC_4(VAR_15);
 FUNC_0("Failed to register PMU! (err=%d)\n", VAR_16);
}
