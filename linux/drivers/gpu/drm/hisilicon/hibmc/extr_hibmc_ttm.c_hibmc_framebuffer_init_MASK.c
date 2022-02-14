
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_framebuffer {int fb; struct drm_gem_object* obj; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct hibmc_framebuffer* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,int *,int *) ;
 int FUNC_3 (struct drm_device*,int *,struct drm_mode_fb_cmd2 const*) ;
 int VAR_2 ;
 int FUNC_4 (struct hibmc_framebuffer*) ;
 struct hibmc_framebuffer* FUNC_5 (int,int ) ;

struct hibmc_framebuffer *
FUNC_6(struct drm_device *VAR_3,
         const struct drm_mode_fb_cmd2 *VAR_4,
         struct drm_gem_object *VAR_5)
{
 struct hibmc_framebuffer *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_0("failed to allocate hibmc_fb\n");
  return FUNC_1(-VAR_0);
 }

 FUNC_3(VAR_3, &VAR_6->fb, VAR_4);
 VAR_6->obj = VAR_5;
 VAR_7 = FUNC_2(VAR_3, &VAR_6->fb, &VAR_2);
 if (VAR_7) {
  FUNC_0("drm_framebuffer_init failed: %d\n", VAR_7);
  FUNC_4(VAR_6);
  return FUNC_1(VAR_7);
 }

 return VAR_6;
}
