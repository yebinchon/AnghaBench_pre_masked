
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct drm_i915_private {TYPE_1__ lpe_audio; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int,int *,int ,char*) ;
 int FUNC_3 (int,struct drm_i915_private*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_2)
{
 int VAR_3 = VAR_2->lpe_audio.irq;

 FUNC_0(!FUNC_1(VAR_2));
 FUNC_2(VAR_3,
    &VAR_1,
    VAR_0,
    "hdmi_lpe_audio_irq_handler");

 return FUNC_3(VAR_3, VAR_2);
}
