
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_plane_state {scalar_t__ dlist_count; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (struct drm_plane_state*) ;
 struct vc4_plane_state* FUNC_1 (struct drm_plane_state*) ;
 int FUNC_2 (struct drm_plane_state*) ;
 int FUNC_3 (struct drm_plane*,struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct vc4_plane_state *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_2->dlist_count = 0;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(VAR_1);
}
