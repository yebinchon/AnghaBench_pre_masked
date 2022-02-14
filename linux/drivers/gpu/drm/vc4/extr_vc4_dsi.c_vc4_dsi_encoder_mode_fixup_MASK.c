
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dsi_encoder {struct vc4_dsi* dsi; } ;
struct vc4_dsi {unsigned long divider; int pll_phy_clock; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; int htotal; int hsync_start; int hsync_end; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk*) ;
 struct vc4_dsi_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_3(struct drm_encoder *VAR_0,
           const struct drm_display_mode *VAR_1,
           struct drm_display_mode *VAR_2)
{
 struct vc4_dsi_encoder *VAR_3 = FUNC_2(VAR_0);
 struct vc4_dsi *VAR_4 = VAR_3->dsi;
 struct clk *VAR_5 = FUNC_0(VAR_4->pll_phy_clock);
 unsigned long VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7 = VAR_1->clock * 1000;
 unsigned long VAR_8 = VAR_7 * VAR_4->divider;
 int VAR_9;




 for (VAR_9 = 1; VAR_9 < 8; VAR_9++) {
  if (VAR_6 / VAR_9 < VAR_8) {
   VAR_9--;
   break;
  }
 }




 VAR_8 = VAR_6 / VAR_9;
 VAR_7 = VAR_8 / VAR_4->divider;

 VAR_2->clock = VAR_7 / 1000;


 VAR_2->htotal = VAR_2->clock * VAR_1->htotal /
    VAR_1->clock;
 VAR_2->hsync_end += VAR_2->htotal - VAR_1->htotal;
 VAR_2->hsync_start += VAR_2->htotal - VAR_1->htotal;

 return 1;
}
