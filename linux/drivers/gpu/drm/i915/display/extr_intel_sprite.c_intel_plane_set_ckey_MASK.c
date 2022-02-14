
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_intel_sprite_colorkey {int flags; } ;
struct TYPE_3__ {int plane; } ;
struct intel_plane_state {struct drm_intel_sprite_colorkey ckey; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_plane {scalar_t__ id; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_2 ;
 struct drm_i915_private* FUNC_1 (int ) ;
 struct intel_plane* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct intel_plane_state *VAR_3,
     const struct drm_intel_sprite_colorkey *VAR_4)
{
 struct intel_plane *VAR_5 = FUNC_2(VAR_3->base.plane);
 struct drm_i915_private *VAR_6 = FUNC_1(VAR_5->base.dev);
 struct drm_intel_sprite_colorkey *VAR_7 = &VAR_3->ckey;

 *VAR_7 = *VAR_4;





 if (VAR_5->id == VAR_2 &&
     VAR_4->flags & VAR_1)
  VAR_7->flags = 0;





 if (FUNC_0(VAR_6) >= 9 && VAR_5->id != VAR_2 &&
     VAR_4->flags & VAR_0)
  VAR_7->flags = 0;
}
