
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;
typedef enum dsi_color { ____Placeholder_dsi_color } dsi_color ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





__attribute__((used)) static enum dsi_color FUNC_1(enum mipi_dsi_pixel_format VAR_4)
{
 switch (VAR_4) {
 case 128:
  return VAR_3;
 case 130:
  return VAR_2;
 case 129:
  return VAR_1;
 case 131:
  return VAR_0;
 default:
  FUNC_0("MIPI color invalid, so we use rgb888\n");
 }
 return VAR_3;
}
