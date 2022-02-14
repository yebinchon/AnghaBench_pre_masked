
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {unsigned long size; } ;
struct drm_mode_fb_cmd2 {unsigned int height; unsigned int* pitches; unsigned int* offsets; int * handles; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_format_info {int num_planes; int vsub; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct drm_framebuffer*) ;
 int VAR_2 ;
 int FUNC_4 (struct drm_framebuffer*) ;
 struct drm_format_info* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 struct drm_framebuffer* FUNC_6 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct exynos_drm_gem**,int) ;
 struct exynos_drm_gem* FUNC_7 (struct drm_file*,int ) ;
 int FUNC_8 (struct exynos_drm_gem*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_9(struct drm_device *VAR_3, struct drm_file *VAR_4,
        const struct drm_mode_fb_cmd2 *VAR_5)
{
 const struct drm_format_info *VAR_6 = FUNC_5(VAR_3, VAR_5);
 struct exynos_drm_gem *VAR_7[VAR_2];
 struct drm_framebuffer *VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_planes; VAR_9++) {
  unsigned int VAR_11 = (VAR_9 == 0) ? VAR_5->height :
         FUNC_0(VAR_5->height, VAR_6->vsub);
  unsigned long VAR_12 = VAR_11 * VAR_5->pitches[VAR_9] +
         VAR_5->offsets[VAR_9];

  VAR_7[VAR_9] = FUNC_7(VAR_4,
         VAR_5->handles[VAR_9]);
  if (!VAR_7[VAR_9]) {
   FUNC_1(VAR_3->dev,
          "failed to lookup gem object\n");
   VAR_10 = -VAR_1;
   goto err;
  }

  if (VAR_12 > VAR_7[VAR_9]->size) {
   VAR_9++;
   VAR_10 = -VAR_0;
   goto err;
  }
 }

 VAR_8 = FUNC_6(VAR_3, VAR_5, VAR_7, VAR_9);
 if (FUNC_3(VAR_8)) {
  VAR_10 = FUNC_4(VAR_8);
  goto err;
 }

 return VAR_8;

err:
 while (VAR_9--)
  FUNC_8(VAR_7[VAR_9]);

 return FUNC_2(VAR_10);
}
