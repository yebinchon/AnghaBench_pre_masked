
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper_funcs {int dummy; } ;
struct TYPE_2__ {int y1; int x1; } ;
struct drm_fb_helper {struct drm_device* dev; struct drm_fb_helper_funcs const* funcs; int lock; TYPE_1__ dirty_clip; int dirty_work; int resume_work; int dirty_lock; int kernel_fb_list; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_device *VAR_2, struct drm_fb_helper *VAR_3,
      const struct drm_fb_helper_funcs *VAR_4)
{
 FUNC_0(&VAR_3->kernel_fb_list);
 FUNC_3(&VAR_3->dirty_lock);
 FUNC_1(&VAR_3->resume_work, VAR_1);
 FUNC_1(&VAR_3->dirty_work, VAR_0);
 VAR_3->dirty_clip.x1 = VAR_3->dirty_clip.y1 = ~0;
 FUNC_2(&VAR_3->lock);
 VAR_3->funcs = VAR_4;
 VAR_3->dev = VAR_2;
}
