
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dev; int * ops; } ;
struct i915_audio_component {TYPE_1__ base; } ;
struct drm_i915_private {int drm; int * audio_component; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0,
     struct device *VAR_1, void *VAR_2)
{
 struct i915_audio_component *VAR_3 = VAR_2;
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_0);

 FUNC_1(&VAR_4->drm);
 VAR_3->base.ops = ((void*)0);
 VAR_3->base.dev = ((void*)0);
 VAR_4->audio_component = ((void*)0);
 FUNC_2(&VAR_4->drm);

 FUNC_0(VAR_1, VAR_0);
}
