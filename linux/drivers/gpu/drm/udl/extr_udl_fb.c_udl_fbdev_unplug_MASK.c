
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_fbdev {int helper; } ;
struct udl_device {struct udl_fbdev* fbdev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct udl_device* FUNC_1 (struct drm_device*) ;

void FUNC_2(struct drm_device *VAR_0)
{
 struct udl_device *VAR_1 = FUNC_1(VAR_0);
 struct udl_fbdev *VAR_2;
 if (!VAR_1->fbdev)
  return;

 VAR_2 = VAR_1->fbdev;
 FUNC_0(&VAR_2->helper);
}
