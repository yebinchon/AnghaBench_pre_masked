
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_simple_display_pipe {int dummy; } ;
struct drm_plane_state {TYPE_1__* fb; } ;
struct drm_gem_vram_object {int dummy; } ;
struct TYPE_2__ {int * obj; } ;


 int VAR_0 ;
 struct drm_gem_vram_object* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_gem_vram_object*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_simple_display_pipe *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct drm_gem_vram_object *VAR_3;

 if (!VAR_2->fb)
  return 0;
 VAR_3 = FUNC_0(VAR_2->fb->obj[0]);
 return FUNC_1(VAR_3, VAR_0);
}
