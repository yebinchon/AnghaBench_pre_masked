
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int x1; } ;
struct TYPE_5__ {TYPE_3__ dst; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_crtc_state {int pipe_src_w; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,char*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct intel_crtc_state *VAR_1,
        const struct intel_plane_state *VAR_2)
{
 struct drm_i915_private *VAR_3 =
  FUNC_4(VAR_2->base.plane->dev);
 int VAR_4 = VAR_2->base.dst.x1;
 int VAR_5 = FUNC_3(&VAR_2->base.dst);
 int VAR_6 = VAR_1->pipe_src_w;
 if ((FUNC_2(VAR_3) || FUNC_1(VAR_3)) &&
     (VAR_4 + VAR_5 < 4 || VAR_4 > VAR_6 - 4)) {
  FUNC_0("requested plane X %s position %d invalid (valid range %d-%d)\n",
         VAR_4 + VAR_5 < 4 ? "end" : "start",
         VAR_4 + VAR_5 < 4 ? VAR_4 + VAR_5 : VAR_4,
         4, VAR_6 - 4);
  return -VAR_0;
 }

 return 0;
}
