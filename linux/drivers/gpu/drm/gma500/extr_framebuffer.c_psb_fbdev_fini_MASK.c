
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int * fbdev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev_private;

 if (!VAR_1->fbdev)
  return;

 FUNC_1(VAR_0, VAR_1->fbdev);
 FUNC_0(VAR_1->fbdev);
 VAR_1->fbdev = ((void*)0);
}
