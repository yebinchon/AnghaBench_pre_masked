
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct drm_i915_private {int audio_component_registered; TYPE_1__ drm; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->drm.dev,
      &VAR_1,
      VAR_0);
 if (VAR_3 < 0) {
  FUNC_0("failed to add audio component (%d)\n", VAR_3);

  return;
 }

 VAR_2->audio_component_registered = 1;
}
