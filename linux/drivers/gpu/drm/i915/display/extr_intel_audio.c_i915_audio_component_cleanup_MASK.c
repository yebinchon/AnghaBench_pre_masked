
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct drm_i915_private {int audio_component_registered; TYPE_1__ drm; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_1)
{
 if (!VAR_1->audio_component_registered)
  return;

 FUNC_0(VAR_1->drm.dev, &VAR_0);
 VAR_1->audio_component_registered = 0;
}
