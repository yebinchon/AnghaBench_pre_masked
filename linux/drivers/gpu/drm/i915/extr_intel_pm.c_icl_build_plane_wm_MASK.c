
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__* linked_plane; TYPE_1__ base; scalar_t__ slave; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int num_planes; int is_yuv; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct intel_crtc_state*,struct intel_plane_state const*) ;
 int FUNC_2 (struct intel_crtc_state*,struct intel_plane_state const*,int,int) ;
 TYPE_4__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct intel_crtc_state *VAR_0,
         const struct intel_plane_state *VAR_1)
{
 enum plane_id VAR_2 = FUNC_3(VAR_1->base.plane)->id;
 int VAR_3;


 if (VAR_1->slave)
  return 0;

 if (VAR_1->linked_plane) {
  const struct drm_framebuffer *VAR_4 = VAR_1->base.fb;
  enum plane_id VAR_5 = VAR_1->linked_plane->id;

  FUNC_0(!FUNC_1(VAR_0, VAR_1));
  FUNC_0(!VAR_4->format->is_yuv ||
   VAR_4->format->num_planes == 1);

  VAR_3 = FUNC_2(VAR_0, VAR_1,
      VAR_5, 0);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_0, VAR_1,
      VAR_2, 1);
  if (VAR_3)
   return VAR_3;
 } else if (FUNC_1(VAR_0, VAR_1)) {
  VAR_3 = FUNC_2(VAR_0, VAR_1,
      VAR_2, 0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
