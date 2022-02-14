
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_plane_state {scalar_t__ bo; scalar_t__ surf; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_1 (scalar_t__*) ;
 struct vmw_plane_state* FUNC_2 (struct drm_plane_state*) ;
 int FUNC_3 (scalar_t__*) ;

void
FUNC_4(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct vmw_plane_state *VAR_2 = FUNC_2(VAR_1);



 if (VAR_2->surf)
  FUNC_3(&VAR_2->surf);

 if (VAR_2->bo)
  FUNC_1(&VAR_2->bo);

 FUNC_0(VAR_0, VAR_1);
}
