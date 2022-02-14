
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;
typedef enum dsi_vid_dst_format { ____Placeholder_dsi_vid_dst_format } dsi_vid_dst_format ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline enum dsi_vid_dst_format FUNC_0(
    const enum mipi_dsi_pixel_format VAR_4)
{
 switch (VAR_4) {
 case 128: return VAR_3;
 case 130: return VAR_2;
 case 129: return VAR_1;
 case 131: return VAR_0;
 default: return VAR_3;
 }
}
