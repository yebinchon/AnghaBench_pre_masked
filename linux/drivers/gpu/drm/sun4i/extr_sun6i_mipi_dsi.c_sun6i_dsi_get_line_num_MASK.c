
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct sun6i_dsi {struct mipi_dsi_device* device; } ;
struct mipi_dsi_device {unsigned int lanes; int format; } ;
struct drm_display_mode {unsigned int htotal; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct sun6i_dsi *VAR_0,
      struct drm_display_mode *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = VAR_0->device;
 unsigned int VAR_3 = FUNC_0(VAR_2->format) / 8;

 return VAR_1->htotal * VAR_3 / VAR_2->lanes;
}
