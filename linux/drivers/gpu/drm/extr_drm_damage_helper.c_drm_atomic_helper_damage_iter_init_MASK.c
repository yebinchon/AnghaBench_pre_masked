
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int x1; int y1; int x2; int y2; } ;
struct drm_plane_state {TYPE_2__ src; int visible; int fb; int crtc; } ;
struct TYPE_4__ {int x1; int y1; int x2; int y2; } ;
struct drm_atomic_helper_damage_iter {int full_update; scalar_t__ num_clips; int * clips; TYPE_1__ plane_src; } ;


 int * FUNC_0 (struct drm_plane_state const*) ;
 scalar_t__ FUNC_1 (struct drm_plane_state const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (struct drm_atomic_helper_damage_iter*,int ,int) ;

void
FUNC_4(struct drm_atomic_helper_damage_iter *VAR_0,
       const struct drm_plane_state *VAR_1,
       const struct drm_plane_state *VAR_2)
{
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));

 if (!VAR_2 || !VAR_2->crtc || !VAR_2->fb || !VAR_2->visible)
  return;

 VAR_0->clips = FUNC_0(VAR_2);
 VAR_0->num_clips = FUNC_1(VAR_2);


 VAR_0->plane_src.x1 = VAR_2->src.x1 >> 16;
 VAR_0->plane_src.y1 = VAR_2->src.y1 >> 16;
 VAR_0->plane_src.x2 = (VAR_2->src.x2 >> 16) + !!(VAR_2->src.x2 & 0xFFFF);
 VAR_0->plane_src.y2 = (VAR_2->src.y2 >> 16) + !!(VAR_2->src.y2 & 0xFFFF);

 if (!VAR_0->clips || !FUNC_2(&VAR_2->src, &VAR_1->src)) {
  VAR_0->clips = ((void*)0);
  VAR_0->num_clips = 0;
  VAR_0->full_update = 1;
 }
}
