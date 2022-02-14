
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmw_plane_state {scalar_t__ surf; scalar_t__ bo; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_6__ {scalar_t__ bo; } ;
struct TYPE_5__ {scalar_t__ buffer; } ;
struct TYPE_4__ {scalar_t__ surface; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 TYPE_3__* FUNC_2 (struct drm_framebuffer*) ;
 TYPE_2__* FUNC_3 (struct drm_framebuffer*) ;
 TYPE_1__* FUNC_4 (struct drm_framebuffer*) ;
 struct vmw_plane_state* FUNC_5 (struct drm_plane_state*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;

int
FUNC_8(struct drm_plane *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct drm_framebuffer *VAR_2 = VAR_1->fb;
 struct vmw_plane_state *VAR_3 = FUNC_5(VAR_1);


 if (VAR_3->surf)
  FUNC_7(&VAR_3->surf);

 if (VAR_3->bo)
  FUNC_1(&VAR_3->bo);

 if (VAR_2) {
  if (FUNC_2(VAR_2)->bo) {
   VAR_3->bo = FUNC_3(VAR_2)->buffer;
   FUNC_0(VAR_3->bo);
  } else {
   VAR_3->surf = FUNC_4(VAR_2)->surface;
   FUNC_6(VAR_3->surf);
  }
 }

 return 0;
}
