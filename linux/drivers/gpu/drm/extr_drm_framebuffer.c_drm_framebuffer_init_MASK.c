
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_framebuffer_funcs {int dummy; } ;
struct drm_framebuffer {int base; int head; int comm; struct drm_framebuffer_funcs const* funcs; int filp_head; int format; struct drm_device* dev; } ;
struct TYPE_3__ {int fb_lock; int fb_list; int num_fb; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct TYPE_4__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_device*,int *,int ,int,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct drm_device*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct drm_device *VAR_4, struct drm_framebuffer *VAR_5,
    const struct drm_framebuffer_funcs *VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_5->dev != VAR_4 || !VAR_5->format))
  return -VAR_1;

 FUNC_0(&VAR_5->filp_head);

 VAR_5->funcs = VAR_6;
 FUNC_7(VAR_5->comm, VAR_2->comm);

 VAR_7 = FUNC_2(VAR_4, &VAR_5->base, VAR_0,
        0, VAR_3);
 if (VAR_7)
  goto out;

 FUNC_5(&VAR_4->mode_config.fb_lock);
 VAR_4->mode_config.num_fb++;
 FUNC_4(&VAR_5->head, &VAR_4->mode_config.fb_list);
 FUNC_6(&VAR_4->mode_config.fb_lock);

 FUNC_3(VAR_4, &VAR_5->base);
out:
 return VAR_7;
}
