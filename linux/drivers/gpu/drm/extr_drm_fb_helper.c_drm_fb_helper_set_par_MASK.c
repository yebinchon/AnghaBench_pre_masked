
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {scalar_t__ pixclock; } ;
struct fb_info {struct fb_var_screeninfo var; struct drm_fb_helper* par; } ;
struct drm_fb_helper {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_fb_helper*) ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct fb_info *VAR_3)
{
 struct drm_fb_helper *VAR_4 = VAR_3->par;
 struct fb_var_screeninfo *VAR_5 = &VAR_3->var;

 if (VAR_2)
  return -VAR_0;

 if (VAR_5->pixclock != 0) {
  FUNC_0("PIXEL CLOCK SET\n");
  return -VAR_1;
 }

 FUNC_1(VAR_4);

 return 0;
}
