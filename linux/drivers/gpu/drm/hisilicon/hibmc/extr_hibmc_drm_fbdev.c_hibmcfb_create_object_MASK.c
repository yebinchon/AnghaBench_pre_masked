
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hibmc_drm_private {struct drm_device* dev; } ;
struct drm_mode_fb_cmd2 {int* pitches; int height; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int,int,struct drm_gem_object**) ;

__attribute__((used)) static int FUNC_1(
    struct hibmc_drm_private *VAR_0,
    const struct drm_mode_fb_cmd2 *VAR_1,
    struct drm_gem_object **VAR_2)
{
 struct drm_gem_object *VAR_3;
 struct drm_device *VAR_4 = VAR_0->dev;
 u32 VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_1->pitches[0] * VAR_1->height;
 VAR_6 = FUNC_0(VAR_4, VAR_5, 1, &VAR_3);
 if (VAR_6)
  return VAR_6;

 *VAR_2 = VAR_3;
 return VAR_6;
}
