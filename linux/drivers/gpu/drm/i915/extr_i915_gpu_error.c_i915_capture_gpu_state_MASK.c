
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gpu_state {int epoch; int display; int overlay; int capture; int uptime; int boottime; int time; struct drm_i915_private* i915; int ref; } ;
struct TYPE_4__ {int last_init_time; } ;
struct TYPE_3__ {int first_error; } ;
struct drm_i915_private {TYPE_2__ gt; TYPE_1__ gpu_error; } ;
struct compress {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i915_gpu_state* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct i915_gpu_state*) ;
 struct i915_gpu_state* FUNC_2 (int ) ;
 int FUNC_3 (struct i915_gpu_state*) ;
 int FUNC_4 (struct i915_gpu_state*) ;
 int FUNC_5 (struct i915_gpu_state*) ;
 int FUNC_6 (struct i915_gpu_state*) ;
 int FUNC_7 (struct i915_gpu_state*) ;
 int FUNC_8 (struct i915_gpu_state*,struct compress*) ;
 int FUNC_9 (struct compress*) ;
 int FUNC_10 (struct compress*) ;
 int FUNC_11 (struct i915_gpu_state*) ;
 int FUNC_12 (struct i915_gpu_state*,struct compress*) ;
 int FUNC_13 (struct drm_i915_private*,int ) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_16 (struct i915_gpu_state*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 struct i915_gpu_state* FUNC_22 (int,int ) ;

struct i915_gpu_state *
FUNC_23(struct drm_i915_private *VAR_3)
{
 struct i915_gpu_state *VAR_4;
 struct compress VAR_5;


 VAR_4 = FUNC_2(VAR_3->gpu_error.first_error);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_4 = FUNC_22(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_13(VAR_3, -VAR_1);
  return FUNC_0(-VAR_1);
 }

 if (!FUNC_10(&VAR_5)) {
  FUNC_16(VAR_4);
  FUNC_13(VAR_3, -VAR_1);
  return FUNC_0(-VAR_1);
 }

 FUNC_17(&VAR_4->ref);
 VAR_4->i915 = VAR_3;

 VAR_4->time = FUNC_20();
 VAR_4->boottime = FUNC_19();
 VAR_4->uptime = FUNC_21(FUNC_18(), VAR_3->gt.last_init_time);
 VAR_4->capture = VAR_2;

 FUNC_6(VAR_4);
 FUNC_5(VAR_4);
 FUNC_8(VAR_4, &VAR_5);
 FUNC_7(VAR_4);
 FUNC_11(VAR_4);
 FUNC_12(VAR_4, &VAR_5);

 VAR_4->overlay = FUNC_15(VAR_3);
 VAR_4->display = FUNC_14(VAR_3);

 VAR_4->epoch = FUNC_3(VAR_4);

 FUNC_4(VAR_4);
 FUNC_9(&VAR_5);

 return VAR_4;
}
