
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct rcar_du_plane_state {struct drm_plane_state state; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 struct rcar_du_plane_state* FUNC_2 (struct rcar_du_plane_state*,int,int ) ;
 struct rcar_du_plane_state* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_4(struct drm_plane *VAR_1)
{
 struct rcar_du_plane_state *VAR_2;
 struct rcar_du_plane_state *VAR_3;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_3(VAR_1->state);
 VAR_3 = FUNC_2(VAR_2, sizeof(*VAR_2), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_3->state);

 return &VAR_3->state;
}
