
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {int fb_id; } ;
struct TYPE_2__ {int id; } ;
struct drm_framebuffer {int filp_head; TYPE_1__ base; } ;
struct drm_file {int fbs_lock; int fbs; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 struct drm_framebuffer* FUNC_4 (struct drm_device*,struct drm_mode_fb_cmd2*,struct drm_file*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_device *VAR_2,
      void *VAR_3, struct drm_file *VAR_4)
{
 struct drm_mode_fb_cmd2 *VAR_5 = VAR_3;
 struct drm_framebuffer *VAR_6;

 if (!FUNC_3(VAR_2, VAR_0))
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_4);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_0("[FB:%d]\n", VAR_6->base.id);
 VAR_5->fb_id = VAR_6->base.id;


 FUNC_6(&VAR_4->fbs_lock);
 FUNC_5(&VAR_6->filp_head, &VAR_4->fbs);
 FUNC_7(&VAR_4->fbs_lock);

 return 0;
}
