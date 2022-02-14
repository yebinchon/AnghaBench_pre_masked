
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {scalar_t__ zpos; TYPE_1__* plane; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {TYPE_2__ base; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct drm_plane_state *VAR_2 = *(struct drm_plane_state **)VAR_0;
 const struct drm_plane_state *VAR_3 = *(struct drm_plane_state **)VAR_1;

 if (VAR_2->zpos != VAR_3->zpos)
  return VAR_2->zpos - VAR_3->zpos;
 else
  return VAR_2->plane->base.id - VAR_3->plane->base.id;
}
