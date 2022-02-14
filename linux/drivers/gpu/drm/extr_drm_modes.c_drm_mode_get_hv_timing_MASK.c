
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int crtc_hdisplay; int crtc_vdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;

void FUNC_1(const struct drm_display_mode *VAR_1,
       int *VAR_2, int *VAR_3)
{
 struct drm_display_mode VAR_4 = *VAR_1;

 FUNC_0(&VAR_4, VAR_0);
 *VAR_2 = VAR_4.crtc_hdisplay;
 *VAR_3 = VAR_4.crtc_vdisplay;
}
