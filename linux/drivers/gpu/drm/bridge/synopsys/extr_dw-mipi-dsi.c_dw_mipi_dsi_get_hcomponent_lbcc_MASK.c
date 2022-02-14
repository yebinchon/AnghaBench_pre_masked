
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi {int lane_mbps; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct dw_mipi_dsi *VAR_1,
        const struct drm_display_mode *VAR_2,
        u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_3 * VAR_1->lane_mbps * VAR_0 / 8;

 VAR_4 = VAR_5 % VAR_2->clock;
 VAR_5 = VAR_5 / VAR_2->clock;
 if (VAR_4)
  VAR_5++;

 return VAR_5;
}
