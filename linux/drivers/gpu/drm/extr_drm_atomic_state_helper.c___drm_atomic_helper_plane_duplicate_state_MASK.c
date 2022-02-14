
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int * fb_damage_clips; int * commit; int * fence; scalar_t__ fb; } ;
struct drm_plane {int state; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_plane_state*,int ,int) ;

void FUNC_2(struct drm_plane *VAR_0,
            struct drm_plane_state *VAR_1)
{
 FUNC_1(VAR_1, VAR_0->state, sizeof(*VAR_1));

 if (VAR_1->fb)
  FUNC_0(VAR_1->fb);

 VAR_1->fence = ((void*)0);
 VAR_1->commit = ((void*)0);
 VAR_1->fb_damage_clips = ((void*)0);
}
