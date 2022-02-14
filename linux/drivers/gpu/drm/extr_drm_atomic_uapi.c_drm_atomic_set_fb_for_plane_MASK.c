
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {int fb; struct drm_plane* plane; } ;
struct TYPE_4__ {int id; } ;
struct drm_plane {int name; TYPE_2__ base; } ;
struct TYPE_3__ {int id; } ;
struct drm_framebuffer {TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ,struct drm_plane_state*,...) ;
 int FUNC_1 (int *,struct drm_framebuffer*) ;

void
FUNC_2(struct drm_plane_state *VAR_0,
       struct drm_framebuffer *VAR_1)
{
 struct drm_plane *VAR_2 = VAR_0->plane;

 if (VAR_1)
  FUNC_0("Set [FB:%d] for [PLANE:%d:%s] state %p\n",
     VAR_1->base.id, VAR_2->base.id, VAR_2->name,
     VAR_0);
 else
  FUNC_0("Set [NOFB] for [PLANE:%d:%s] state %p\n",
     VAR_2->base.id, VAR_2->name, VAR_0);

 FUNC_1(&VAR_0->fb, VAR_1);
}
