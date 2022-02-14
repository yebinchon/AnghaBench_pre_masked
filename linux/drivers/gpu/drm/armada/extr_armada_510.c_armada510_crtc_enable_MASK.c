
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct armada_crtc {scalar_t__ clk; struct armada510_variant_data* variant_data; } ;
struct armada510_variant_data {scalar_t__ sel_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct armada_crtc *VAR_0,
 const struct drm_display_mode *VAR_1)
{
 struct armada510_variant_data *VAR_2 = VAR_0->variant_data;

 if (!VAR_0->clk && VAR_2->sel_clk) {
  if (!FUNC_0(FUNC_1(VAR_2->sel_clk)))
   VAR_0->clk = VAR_2->sel_clk;
 }
}
