
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_wndw_atom {int state; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_wndw_atom*) ;
 struct nv50_wndw_atom* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static void
FUNC_3(struct drm_plane *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct nv50_wndw_atom *VAR_2 = FUNC_2(VAR_1);
 FUNC_0(&VAR_2->state);
 FUNC_1(VAR_2);
}
