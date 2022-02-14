
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_gem_vram_object {int dummy; } ;
struct TYPE_4__ {int obj; } ;
struct TYPE_3__ {int fb; } ;


 struct drm_gem_vram_object* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_gem_vram_object*) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
       struct drm_plane_state *VAR_1)
{
 struct drm_gem_vram_object *VAR_2;

 if (!VAR_0->state->fb)
  return;

 VAR_2 = FUNC_0(FUNC_2(VAR_0->state->fb)->obj);
 FUNC_1(VAR_2);
}
