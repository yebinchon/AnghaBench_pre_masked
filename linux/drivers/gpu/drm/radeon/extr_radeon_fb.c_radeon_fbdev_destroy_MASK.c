
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int ** obj; } ;
struct radeon_fbdev {int helper; struct drm_framebuffer fb; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_0, struct radeon_fbdev *VAR_1)
{
 struct drm_framebuffer *VAR_2 = &VAR_1->fb;

 FUNC_1(&VAR_1->helper);

 if (VAR_2->obj[0]) {
  FUNC_4(VAR_2->obj[0]);
  VAR_2->obj[0] = ((void*)0);
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }
 FUNC_0(&VAR_1->helper);

 return 0;
}
