
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_display_mode {unsigned long crtc_clock; } ;
struct armada_crtc {int clk; struct armada510_variant_data* variant_data; } ;
struct armada_clk_result {int div; int clk; int desired_clk_hz; } ;
struct armada510_variant_data {int sel_clk; int clks; } ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct armada_crtc*,struct armada_clk_result*,int *,int ,int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct armada_crtc *VAR_2,
 const struct drm_display_mode *VAR_3, uint32_t *VAR_4)
{
 struct armada510_variant_data *VAR_5 = VAR_2->variant_data;
 unsigned long VAR_6 = VAR_3->crtc_clock;
 struct armada_clk_result VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_2, &VAR_7, &VAR_1,
           VAR_5->clks, FUNC_0(VAR_5->clks),
           VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_3(VAR_7.clk);
 if (VAR_8)
  return VAR_8;

 if (VAR_4) {
  FUNC_4(VAR_7.clk, VAR_7.desired_clk_hz);

  *VAR_4 = VAR_7.div | VAR_0[VAR_9];


  VAR_5->sel_clk = VAR_7.clk;
  FUNC_5(VAR_2->clk, VAR_7.clk);
 }

 FUNC_2(VAR_7.clk);

 return 0;
}
