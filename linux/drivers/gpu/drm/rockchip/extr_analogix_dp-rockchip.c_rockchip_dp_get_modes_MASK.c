
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_info {int color_formats; int bpc; } ;
struct drm_connector {struct drm_display_info display_info; } ;
struct analogix_dp_plat_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct analogix_dp_plat_data *VAR_3,
     struct drm_connector *VAR_4)
{
 struct drm_display_info *VAR_5 = &VAR_4->display_info;

 u32 VAR_6 = VAR_2 | VAR_1;

 if ((VAR_5->color_formats & VAR_6)) {
  FUNC_0("Swapping display color format from YUV to RGB\n");
  VAR_5->color_formats &= ~VAR_6;
  VAR_5->color_formats |= VAR_0;
  VAR_5->bpc = 8;
 }

 return 0;
}
