
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_drm_info {int front_info; } ;
struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; int height; int width; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct xen_drm_front_drm_info* dev_private; } ;
struct TYPE_2__ {int format; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_framebuffer*) ;
 struct drm_framebuffer* FUNC_3 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*,int *) ;
 int FUNC_4 (struct drm_framebuffer*) ;
 struct drm_gem_object* FUNC_5 (struct drm_file*,int ) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int VAR_1 ;
 int FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct drm_framebuffer*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_10(struct drm_device *VAR_2, struct drm_file *VAR_3,
   const struct drm_mode_fb_cmd2 *VAR_4)
{
 struct xen_drm_front_drm_info *VAR_5 = VAR_2->dev_private;
 struct drm_framebuffer *VAR_6;
 struct drm_gem_object *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_1);
 if (FUNC_2(VAR_6))
  return VAR_6;

 VAR_7 = FUNC_5(VAR_3, VAR_4->handles[0]);
 if (!VAR_7) {
  FUNC_0("Failed to lookup GEM object\n");
  VAR_8 = -VAR_0;
  goto fail;
 }

 FUNC_6(VAR_7);

 VAR_8 = FUNC_8(VAR_5->front_info,
          FUNC_7(VAR_7),
          FUNC_9(VAR_6),
          VAR_6->width, VAR_6->height,
          VAR_6->format->format);
 if (VAR_8 < 0) {
  FUNC_0("Back failed to attach FB %p: %d\n", VAR_6, VAR_8);
  goto fail;
 }

 return VAR_6;

fail:
 FUNC_4(VAR_6);
 return FUNC_1(VAR_8);
}
