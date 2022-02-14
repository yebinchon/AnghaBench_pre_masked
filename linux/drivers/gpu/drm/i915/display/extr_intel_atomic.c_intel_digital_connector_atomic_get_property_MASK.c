
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct intel_digital_connector_state {int broadcast_rgb; int force_audio; } ;
struct TYPE_2__ {int id; } ;
struct drm_property {int name; TYPE_1__ base; } ;
struct drm_i915_private {struct drm_property* broadcast_rgb_property; struct drm_property* force_audio_property; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 struct drm_i915_private* FUNC_1 (struct drm_device*) ;
 struct intel_digital_connector_state* FUNC_2 (struct drm_connector_state const*) ;

int FUNC_3(struct drm_connector *VAR_1,
      const struct drm_connector_state *VAR_2,
      struct drm_property *VAR_3,
      u64 *VAR_4)
{
 struct drm_device *VAR_5 = VAR_1->dev;
 struct drm_i915_private *VAR_6 = FUNC_1(VAR_5);
 struct intel_digital_connector_state *VAR_7 =
  FUNC_2(VAR_2);

 if (VAR_3 == VAR_6->force_audio_property)
  *VAR_4 = VAR_7->force_audio;
 else if (VAR_3 == VAR_6->broadcast_rgb_property)
  *VAR_4 = VAR_7->broadcast_rgb;
 else {
  FUNC_0("Unknown property [PROP:%d:%s]\n",
     VAR_3->base.id, VAR_3->name);
  return -VAR_0;
 }

 return 0;
}
