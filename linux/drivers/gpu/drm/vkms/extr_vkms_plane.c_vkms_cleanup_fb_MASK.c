
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int fb; } ;
struct drm_plane {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 struct drm_gem_object* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
       struct drm_plane_state *VAR_1)
{
 struct drm_gem_object *VAR_2;

 if (!VAR_1->fb)
  return;

 VAR_2 = FUNC_0(VAR_1->fb, 0);
 FUNC_1(VAR_2);
}
