
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;
struct dm_plane_state {scalar_t__ dc_state; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 struct dm_plane_state* FUNC_2 (struct drm_plane_state*) ;

void FUNC_3(struct drm_plane *VAR_0,
    struct drm_plane_state *VAR_1)
{
 struct dm_plane_state *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->dc_state)
  FUNC_0(VAR_2->dc_state);

 FUNC_1(VAR_0, VAR_1);
}
