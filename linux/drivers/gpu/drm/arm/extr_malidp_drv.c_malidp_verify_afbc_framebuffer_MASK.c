
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_1 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_device *VAR_0, struct drm_file *VAR_1,
          const struct drm_mode_fb_cmd2 *VAR_2)
{
 if (FUNC_0(VAR_0, VAR_2))
  return FUNC_1(VAR_0, VAR_1, VAR_2);

 return 0;
}
