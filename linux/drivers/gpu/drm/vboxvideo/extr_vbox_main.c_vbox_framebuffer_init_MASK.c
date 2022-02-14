
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbox_private {int ddev; } ;
struct vbox_framebuffer {int base; struct drm_gem_object* obj; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,struct drm_mode_fb_cmd2 const*) ;
 int VAR_0 ;

int FUNC_3(struct vbox_private *VAR_1,
     struct vbox_framebuffer *VAR_2,
     const struct drm_mode_fb_cmd2 *VAR_3,
     struct drm_gem_object *VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_1->ddev, &VAR_2->base, VAR_3);
 VAR_2->obj = VAR_4;
 VAR_5 = FUNC_1(&VAR_1->ddev, &VAR_2->base, &VAR_0);
 if (VAR_5) {
  FUNC_0("framebuffer init failed %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
