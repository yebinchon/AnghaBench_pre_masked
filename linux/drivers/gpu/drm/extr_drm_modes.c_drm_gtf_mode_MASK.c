
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int,int,int,int,int,int,int,int,int) ;

struct drm_display_mode *
FUNC_1(struct drm_device *VAR_0, int VAR_1, int VAR_2, int VAR_3,
      bool VAR_4, int VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5,
        600, 40 * 2, 128, 20 * 2);
}
