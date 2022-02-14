
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {int dummy; } ;
struct drm_atomic_helper_damage_iter {int full_update; size_t curr_clip; size_t num_clips; struct drm_rect plane_src; struct drm_rect* clips; } ;


 scalar_t__ FUNC_0 (struct drm_rect*,struct drm_rect*) ;

bool
FUNC_1(struct drm_atomic_helper_damage_iter *VAR_0,
       struct drm_rect *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0->full_update) {
  *VAR_1 = VAR_0->plane_src;
  VAR_0->full_update = 0;
  return 1;
 }

 while (VAR_0->curr_clip < VAR_0->num_clips) {
  *VAR_1 = VAR_0->clips[VAR_0->curr_clip];
  VAR_0->curr_clip++;

  if (FUNC_0(VAR_1, &VAR_0->plane_src)) {
   VAR_2 = 1;
   break;
  }
 }

 return VAR_2;
}
