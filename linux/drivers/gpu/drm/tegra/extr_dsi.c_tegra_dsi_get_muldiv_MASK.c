
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(enum mipi_dsi_pixel_format VAR_1,
    unsigned int *VAR_2, unsigned int *VAR_3)
{
 switch (VAR_1) {
 case 129:
 case 128:
  *VAR_2 = 3;
  *VAR_3 = 1;
  break;

 case 131:
  *VAR_2 = 2;
  *VAR_3 = 1;
  break;

 case 130:
  *VAR_2 = 9;
  *VAR_3 = 4;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
