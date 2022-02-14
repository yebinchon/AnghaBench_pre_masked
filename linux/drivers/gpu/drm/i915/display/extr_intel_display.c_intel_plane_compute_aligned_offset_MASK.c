
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned int rotation; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_1__* color_plane; TYPE_2__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_plane {scalar_t__ id; TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_4__ {int stride; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int*,int*,struct drm_framebuffer const*,int,int,unsigned int,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_framebuffer const*,int) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_plane* FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(int *VAR_1, int *VAR_2,
           const struct intel_plane_state *VAR_3,
           int VAR_4)
{
 struct intel_plane *VAR_5 = FUNC_4(VAR_3->base.plane);
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_5->base.dev);
 const struct drm_framebuffer *VAR_7 = VAR_3->base.fb;
 unsigned int VAR_8 = VAR_3->base.rotation;
 int VAR_9 = VAR_3->color_plane[VAR_4].stride;
 u32 VAR_10;

 if (VAR_5->id == VAR_0)
  VAR_10 = FUNC_1(VAR_6);
 else
  VAR_10 = FUNC_2(VAR_7, VAR_4);

 return FUNC_0(VAR_6, VAR_1, VAR_2, VAR_7, VAR_4,
         VAR_9, VAR_8, VAR_10);
}
