
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_vsp_plane_state {int format; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (struct drm_plane*,struct drm_plane_state*,int *) ;
 struct rcar_du_vsp_plane_state* FUNC_1 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_2(struct drm_plane *VAR_0,
       struct drm_plane_state *VAR_1)
{
 struct rcar_du_vsp_plane_state *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_1, &VAR_2->format);
}
