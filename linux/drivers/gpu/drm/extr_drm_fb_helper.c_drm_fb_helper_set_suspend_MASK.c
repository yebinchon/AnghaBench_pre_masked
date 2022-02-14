
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {scalar_t__ fbdev; } ;


 int FUNC_0 (scalar_t__,int) ;

void FUNC_1(struct drm_fb_helper *VAR_0, bool VAR_1)
{
 if (VAR_0 && VAR_0->fbdev)
  FUNC_0(VAR_0->fbdev, VAR_1);
}
