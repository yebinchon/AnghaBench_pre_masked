
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int width; int height; unsigned int* pitches; unsigned int* offsets; int * handles; } ;
struct drm_gem_object {unsigned int size; } ;
struct drm_framebuffer_funcs {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_format_info {int num_planes; int hsub; int vsub; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 unsigned int FUNC_4 (struct drm_format_info const*,int,unsigned int) ;
 struct drm_framebuffer* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object**,int,struct drm_framebuffer_funcs const*) ;
 struct drm_gem_object* FUNC_6 (struct drm_file*,int ) ;
 int FUNC_7 (struct drm_gem_object*) ;
 struct drm_format_info* FUNC_8 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;

struct drm_framebuffer *
FUNC_9(struct drm_device *VAR_2, struct drm_file *VAR_3,
        const struct drm_mode_fb_cmd2 *VAR_4,
        const struct drm_framebuffer_funcs *VAR_5)
{
 const struct drm_format_info *VAR_6;
 struct drm_gem_object *VAR_7[4];
 struct drm_framebuffer *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_8(VAR_2, VAR_4);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_6->num_planes; VAR_10++) {
  unsigned int VAR_11 = VAR_4->width / (VAR_10 ? VAR_6->hsub : 1);
  unsigned int VAR_12 = VAR_4->height / (VAR_10 ? VAR_6->vsub : 1);
  unsigned int VAR_13;

  VAR_7[VAR_10] = FUNC_6(VAR_3, VAR_4->handles[VAR_10]);
  if (!VAR_7[VAR_10]) {
   FUNC_0("Failed to lookup GEM object\n");
   VAR_9 = -VAR_1;
   goto err_gem_object_put;
  }

  VAR_13 = (VAR_12 - 1) * VAR_4->pitches[VAR_10]
    + FUNC_4(VAR_6, VAR_10, VAR_11)
    + VAR_4->offsets[VAR_10];

  if (VAR_7[VAR_10]->size < VAR_13) {
   FUNC_7(VAR_7[VAR_10]);
   VAR_9 = -VAR_0;
   goto err_gem_object_put;
  }
 }

 VAR_8 = FUNC_5(VAR_2, VAR_4, VAR_7, VAR_10, VAR_5);
 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_3(VAR_8);
  goto err_gem_object_put;
 }

 return VAR_8;

err_gem_object_put:
 for (VAR_10--; VAR_10 >= 0; VAR_10--)
  FUNC_7(VAR_7[VAR_10]);

 return FUNC_1(VAR_9);
}
