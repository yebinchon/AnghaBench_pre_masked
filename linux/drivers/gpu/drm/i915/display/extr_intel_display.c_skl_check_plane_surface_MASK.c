
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int visible; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_2__* color_plane; TYPE_3__ base; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct TYPE_5__ {int offset; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {int format; } ;


 int FUNC_0 (struct intel_plane_state*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct intel_plane_state*) ;
 int FUNC_4 (struct intel_plane_state*) ;
 int FUNC_5 (struct intel_plane_state*) ;

int FUNC_6(struct intel_plane_state *VAR_0)
{
 const struct drm_framebuffer *VAR_1 = VAR_0->base.fb;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (!VAR_0->base.visible)
  return 0;





 if (FUNC_2(VAR_1->format->format)) {
  VAR_2 = FUNC_5(VAR_0);
  if (VAR_2)
   return VAR_2;
 } else if (FUNC_1(VAR_1->modifier)) {
  VAR_2 = FUNC_3(VAR_0);
  if (VAR_2)
   return VAR_2;
 } else {
  VAR_0->color_plane[1].offset = ~0xfff;
  VAR_0->color_plane[1].x = 0;
  VAR_0->color_plane[1].y = 0;
 }

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
