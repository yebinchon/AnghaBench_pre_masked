
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int type; } ;
struct drm_device {int dummy; } ;
struct drm_cmdline_mode {int xres; int refresh; int margins; int interlace; scalar_t__ refresh_specified; int yres; int rb; scalar_t__ cvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,int,int ,int,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int,int ,int,int ,int ) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*,int ) ;

struct drm_display_mode *
FUNC_4(struct drm_device *VAR_2,
      struct drm_cmdline_mode *VAR_3)
{
 struct drm_display_mode *VAR_4;

 if (VAR_3->cvt)
  VAR_4 = FUNC_0(VAR_2,
        VAR_3->xres, VAR_3->yres,
        VAR_3->refresh_specified ? VAR_3->refresh : 60,
        VAR_3->rb, VAR_3->interlace,
        VAR_3->margins);
 else
  VAR_4 = FUNC_1(VAR_2,
        VAR_3->xres, VAR_3->yres,
        VAR_3->refresh_specified ? VAR_3->refresh : 60,
        VAR_3->interlace,
        VAR_3->margins);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->type |= VAR_1;

 if (VAR_3->xres == 1366)
  FUNC_2(VAR_4);
 FUNC_3(VAR_4, VAR_0);
 return VAR_4;
}
