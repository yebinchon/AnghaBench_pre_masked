
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property {int dummy; } ;
struct drm_i915_private {struct drm_property* force_audio_property; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int base; struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct drm_property*,int ) ;
 struct drm_property* FUNC_2 (struct drm_device*,int ,char*,int ,int ) ;
 int VAR_0 ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

void
FUNC_4(struct drm_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_2);
 struct drm_property *VAR_4;

 VAR_4 = VAR_3->force_audio_property;
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_2(VAR_2, 0,
        "audio",
        VAR_0,
        FUNC_0(VAR_0));
  if (VAR_4 == ((void*)0))
   return;

  VAR_3->force_audio_property = VAR_4;
 }
 FUNC_1(&VAR_1->base, VAR_4, 0);
}
