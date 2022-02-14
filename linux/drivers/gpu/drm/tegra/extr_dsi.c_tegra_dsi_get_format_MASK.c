
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tegra_dsi_format { ____Placeholder_tegra_dsi_format } tegra_dsi_format ;
typedef enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(enum mipi_dsi_pixel_format VAR_5,
    enum tegra_dsi_format *VAR_6)
{
 switch (VAR_5) {
 case 128:
  *VAR_6 = VAR_4;
  break;

 case 130:
  *VAR_6 = VAR_2;
  break;

 case 129:
  *VAR_6 = VAR_3;
  break;

 case 131:
  *VAR_6 = VAR_1;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
