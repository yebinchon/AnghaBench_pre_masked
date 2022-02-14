
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_plane {int id; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
struct TYPE_3__ {int num_planes; scalar_t__ is_yuv; } ;


 int FUNC_0 (struct intel_crtc_state*,struct intel_plane_state const*) ;
 int FUNC_1 (struct intel_crtc_state*,struct intel_plane_state const*,int,int ) ;
 int FUNC_2 (struct intel_crtc_state*,struct intel_plane_state const*,int) ;
 struct intel_plane* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct intel_crtc_state *VAR_0,
         const struct intel_plane_state *VAR_1)
{
 struct intel_plane *VAR_2 = FUNC_3(VAR_1->base.plane);
 const struct drm_framebuffer *VAR_3 = VAR_1->base.fb;
 enum plane_id VAR_4 = VAR_2->id;
 int VAR_5;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1,
     VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->format->is_yuv && VAR_3->format->num_planes > 1) {
  VAR_5 = FUNC_2(VAR_0, VAR_1,
         VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
