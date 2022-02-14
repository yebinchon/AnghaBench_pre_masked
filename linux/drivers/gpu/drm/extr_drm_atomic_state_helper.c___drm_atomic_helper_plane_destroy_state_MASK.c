
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int fb_damage_clips; scalar_t__ commit; scalar_t__ fence; scalar_t__ fb; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct drm_plane_state *VAR_0)
{
 if (VAR_0->fb)
  FUNC_2(VAR_0->fb);

 if (VAR_0->fence)
  FUNC_0(VAR_0->fence);

 if (VAR_0->commit)
  FUNC_1(VAR_0->commit);

 FUNC_3(VAR_0->fb_damage_clips);
}
