
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {struct drm_gem_object** obj; } ;
struct drm_format_info {int num_planes; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*,struct drm_framebuffer*,int *) ;
 struct drm_format_info* FUNC_3 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (struct drm_device*,struct drm_framebuffer*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_5 (struct drm_framebuffer*) ;
 struct drm_framebuffer* FUNC_6 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct drm_framebuffer *FUNC_7(struct drm_device *VAR_4,
     const struct drm_mode_fb_cmd2 *VAR_5,
     struct drm_gem_object *VAR_6)
{
 const struct drm_format_info *VAR_7 = FUNC_3(VAR_4, VAR_5);
 struct drm_framebuffer *VAR_8;
 int VAR_9;

 if (VAR_7->num_planes != 1)
  return FUNC_1(-VAR_0);

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_1(-VAR_1);

 FUNC_4(VAR_4, VAR_8, VAR_5);

 VAR_8->obj[0] = VAR_6;

 VAR_9 = FUNC_2(VAR_4, VAR_8, &VAR_3);
 if (VAR_9) {
  FUNC_0("failed to initialize framebuffer\n");
  FUNC_5(VAR_8);
  return FUNC_1(VAR_9);
 }

 return VAR_8;
}
