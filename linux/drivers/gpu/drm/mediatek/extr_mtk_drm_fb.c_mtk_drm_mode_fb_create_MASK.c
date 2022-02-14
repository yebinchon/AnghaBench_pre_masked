
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {unsigned int width; unsigned int height; unsigned int* pitches; scalar_t__* offsets; int * handles; } ;
struct drm_gem_object {unsigned int size; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_format_info {int num_planes; unsigned int* cpp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct drm_format_info* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 struct drm_framebuffer* FUNC_6 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object*) ;

struct drm_framebuffer *FUNC_7(struct drm_device *VAR_2,
            struct drm_file *VAR_3,
            const struct drm_mode_fb_cmd2 *VAR_4)
{
 const struct drm_format_info *VAR_5 = FUNC_5(VAR_2, VAR_4);
 struct drm_framebuffer *VAR_6;
 struct drm_gem_object *VAR_7;
 unsigned int VAR_8 = VAR_4->width;
 unsigned int VAR_9 = VAR_4->height;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 if (VAR_5->num_planes != 1)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_3(VAR_3, VAR_4->handles[0]);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_11 = VAR_5->cpp[0];
 VAR_10 = (VAR_9 - 1) * VAR_4->pitches[0] + VAR_8 * VAR_11;
 VAR_10 += VAR_4->offsets[0];

 if (VAR_7->size < VAR_10) {
  VAR_12 = -VAR_0;
  goto unreference;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_4, VAR_7);
 if (FUNC_1(VAR_6)) {
  VAR_12 = FUNC_2(VAR_6);
  goto unreference;
 }

 return VAR_6;

unreference:
 FUNC_4(VAR_7);
 return FUNC_0(VAR_12);
}
