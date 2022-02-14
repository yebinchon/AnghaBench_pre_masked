
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_format_info {int num_planes; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct drm_format_info* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 struct drm_framebuffer* FUNC_6 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object**) ;

struct drm_framebuffer *FUNC_7(struct drm_device *VAR_1,
  struct drm_file *VAR_2, const struct drm_mode_fb_cmd2 *VAR_3)
{
 const struct drm_format_info *VAR_4 = FUNC_5(VAR_1,
         VAR_3);
 struct drm_gem_object *VAR_5[4] = {0};
 struct drm_framebuffer *VAR_6;
 int VAR_7, VAR_8, VAR_9 = VAR_4->num_planes;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5[VAR_8] = FUNC_3(VAR_2, VAR_3->handles[VAR_8]);
  if (!VAR_5[VAR_8]) {
   VAR_7 = -VAR_0;
   goto out_unref;
  }
 }

 VAR_6 = FUNC_6(VAR_1, VAR_3, VAR_5);
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto out_unref;
 }

 return VAR_6;

out_unref:
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_4(VAR_5[VAR_8]);
 return FUNC_0(VAR_7);
}
