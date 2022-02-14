
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rotation; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_plane {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_plane* FUNC_3 (int ) ;

int FUNC_4(const struct intel_plane_state *VAR_3)
{
 struct intel_plane *VAR_4 = FUNC_3(VAR_3->base.plane);
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_4->base.dev);
 unsigned int VAR_6 = VAR_3->base.rotation;


 if (FUNC_1(VAR_5) &&
     VAR_6 & VAR_1 &&
     VAR_6 & VAR_0) {
  FUNC_0("Cannot rotate and reflect at the same time\n");
  return -VAR_2;
 }

 return 0;
}
