
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {int * fbdev; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hibmc_drm_private *VAR_0)
{
 if (!VAR_0->fbdev)
  return;

 FUNC_0(VAR_0->fbdev);
 VAR_0->fbdev = ((void*)0);
}
