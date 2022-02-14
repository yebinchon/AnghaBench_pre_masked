
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {int gem; } ;
struct drm_mode_fb_cmd2 {int width; int height; unsigned int* pitches; unsigned int* offsets; int * handles; } ;
struct drm_gem_object {unsigned int size; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_format_info {unsigned int num_planes; int hsub; int vsub; unsigned int* cpp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (int *) ;
 struct drm_format_info* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 struct drm_framebuffer* FUNC_6 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct tegra_bo**,unsigned int) ;
 struct tegra_bo* FUNC_7 (struct drm_gem_object*) ;

struct drm_framebuffer *FUNC_8(struct drm_device *VAR_2,
     struct drm_file *VAR_3,
     const struct drm_mode_fb_cmd2 *VAR_4)
{
 const struct drm_format_info *VAR_5 = FUNC_5(VAR_2, VAR_4);
 struct tegra_bo *VAR_6[4];
 struct drm_gem_object *VAR_7;
 struct drm_framebuffer *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_planes; VAR_9++) {
  unsigned int VAR_11 = VAR_4->width / (VAR_9 ? VAR_5->hsub : 1);
  unsigned int VAR_12 = VAR_4->height / (VAR_9 ? VAR_5->vsub : 1);
  unsigned int VAR_13, VAR_14;

  VAR_7 = FUNC_3(VAR_3, VAR_4->handles[VAR_9]);
  if (!VAR_7) {
   VAR_10 = -VAR_1;
   goto unreference;
  }

  VAR_14 = VAR_5->cpp[VAR_9];

  VAR_13 = (VAR_12 - 1) * VAR_4->pitches[VAR_9] +
         VAR_11 * VAR_14 + VAR_4->offsets[VAR_9];

  if (VAR_7->size < VAR_13) {
   VAR_10 = -VAR_0;
   goto unreference;
  }

  VAR_6[VAR_9] = FUNC_7(VAR_7);
 }

 VAR_8 = FUNC_6(VAR_2, VAR_4, VAR_6, VAR_9);
 if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
  goto unreference;
 }

 return VAR_8;

unreference:
 while (VAR_9--)
  FUNC_4(&VAR_6[VAR_9]->gem);

 return FUNC_0(VAR_10);
}
