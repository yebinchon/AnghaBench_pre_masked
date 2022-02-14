
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sun6i_dsi {int dummy; } ;
struct drm_display_mode {int hdisplay; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct sun6i_dsi *VAR_1,
       struct drm_display_mode *VAR_2,
       u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5 = VAR_4;

 VAR_5 += (VAR_2->hdisplay + 40) * VAR_0 / 8;

 if (VAR_5 > VAR_3)
  return VAR_5 - VAR_3;

 return 1;
}
