
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int fb; } ;
struct drm_plane {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct drm_gem_object* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_3 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct drm_gem_object *VAR_2;
 int VAR_3;

 if (!VAR_1->fb)
  return 0;

 VAR_2 = FUNC_1(VAR_1->fb, 0);
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  FUNC_0("vmap failed: %d\n", VAR_3);

 return FUNC_2(VAR_0, VAR_1);
}
