
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int dummy; } ;
struct drm_i915_private {struct intel_crtc** plane_to_crtc_mapping; } ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;



__attribute__((used)) static inline struct intel_crtc *
FUNC_0(struct drm_i915_private *VAR_0, enum i9xx_plane_id VAR_1)
{
 return VAR_0->plane_to_crtc_mapping[VAR_1];
}
