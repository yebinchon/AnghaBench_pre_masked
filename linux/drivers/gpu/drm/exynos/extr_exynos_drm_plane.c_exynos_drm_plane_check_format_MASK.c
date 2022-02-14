
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_framebuffer* fb; } ;
struct exynos_drm_plane_state {TYPE_1__ base; } ;
struct exynos_drm_plane_config {int capabilities; } ;
struct drm_framebuffer {int modifier; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(const struct exynos_drm_plane_config *VAR_2,
         struct exynos_drm_plane_state *VAR_3)
{
 struct drm_framebuffer *VAR_4 = VAR_3->base.fb;
 struct drm_device *VAR_5 = VAR_4->dev;

 switch (VAR_4->modifier) {
 case 128:
  if (!(VAR_2->capabilities & VAR_1))
   return -VAR_0;
  break;

 case 129:
  break;

 default:
  FUNC_0(VAR_5->dev, "unsupported pixel format modifier");
  return -VAR_0;
 }

 return 0;
}
