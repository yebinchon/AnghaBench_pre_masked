
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int fb; } ;
struct drm_plane {int dummy; } ;
struct drm_gem_vram_object {int dummy; } ;
struct TYPE_2__ {int obj; } ;


 struct drm_gem_vram_object* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_gem_vram_object*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct drm_gem_vram_object *VAR_2;

 if (!VAR_1->fb)
  return;

 VAR_2 = FUNC_0(FUNC_2(VAR_1->fb)->obj);
 FUNC_1(VAR_2);
}
