
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_device {int * fbdev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct udl_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int *) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct udl_device *VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1->fbdev)
  return;

 FUNC_2(VAR_0, VAR_1->fbdev);
 FUNC_0(VAR_1->fbdev);
 VAR_1->fbdev = ((void*)0);
}
