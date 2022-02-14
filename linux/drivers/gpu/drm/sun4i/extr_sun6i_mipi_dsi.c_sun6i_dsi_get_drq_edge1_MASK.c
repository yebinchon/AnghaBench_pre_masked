
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sun6i_dsi {struct mipi_dsi_device* device; } ;
struct mipi_dsi_device {unsigned int lanes; int format; } ;
struct drm_display_mode {unsigned int htotal; unsigned int hsync_end; unsigned int hdisplay; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct sun6i_dsi *VAR_1,
       struct drm_display_mode *VAR_2,
       u16 VAR_3)
{
 struct mipi_dsi_device *VAR_4 = VAR_1->device;
 unsigned int VAR_5 = FUNC_0(VAR_4->format) / 8;
 unsigned int VAR_6 = VAR_2->htotal - VAR_2->hsync_end;
 u16 VAR_7;

 VAR_7 = VAR_0;
 VAR_7 += (VAR_2->hdisplay + VAR_6 + 20) * VAR_5 / VAR_4->lanes;

 if (VAR_7 > VAR_3)
  return VAR_3;

 return VAR_7;
}
