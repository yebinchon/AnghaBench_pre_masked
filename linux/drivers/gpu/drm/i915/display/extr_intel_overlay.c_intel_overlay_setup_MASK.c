
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct overlay_registers {int dummy; } ;
struct intel_overlay {int color_key; int color_key_enabled; int brightness; int contrast; int saturation; int regs; int last_flip; int context; struct drm_i915_private* i915; } ;
struct drm_i915_private {struct intel_overlay* overlay; TYPE_1__** engine; } ;
struct TYPE_2__ {int kernel_context; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*,size_t) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 size_t VAR_1 ;
 int FUNC_5 (struct intel_overlay*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct intel_overlay*) ;
 struct intel_overlay* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct intel_overlay*,int ) ;

void FUNC_12(struct drm_i915_private *VAR_3)
{
 struct intel_overlay *VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_3))
  return;

 if (!FUNC_2(VAR_3, VAR_1))
  return;

 VAR_4 = FUNC_8(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->i915 = VAR_3;
 VAR_4->context = VAR_3->engine[VAR_1]->kernel_context;
 FUNC_1(!VAR_4->context);

 VAR_4->color_key = 0x0101fe;
 VAR_4->color_key_enabled = 1;
 VAR_4->brightness = -19;
 VAR_4->contrast = 75;
 VAR_4->saturation = 146;

 FUNC_6(VAR_3,
    &VAR_4->last_flip,
    ((void*)0), VAR_2);

 VAR_5 = FUNC_5(VAR_4, FUNC_4(VAR_3));
 if (VAR_5)
  goto out_free;

 FUNC_9(VAR_4->regs, 0, sizeof(struct overlay_registers));
 FUNC_10(VAR_4->regs);
 FUNC_11(VAR_4, VAR_4->regs);

 VAR_3->overlay = VAR_4;
 FUNC_0("Initialized overlay support.\n");
 return;

out_free:
 FUNC_7(VAR_4);
}
