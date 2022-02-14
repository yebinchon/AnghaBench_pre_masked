
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ldb_channel {size_t chno; int panel; int child; struct imx_ldb* ldb; } ;
struct imx_ldb {int ldb_ctrl; int regmap; struct bus_mux* lvds_mux; struct imx_ldb_channel* channel; int * clk; int * clk_sel; } ;
struct drm_encoder {int dummy; } ;
struct bus_mux {int shift; int mask; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct drm_encoder*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct imx_ldb_channel* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_8)
{
 struct imx_ldb_channel *VAR_9 = FUNC_5(VAR_8);
 struct imx_ldb *VAR_10 = VAR_9->ldb;
 int VAR_11 = VAR_10->ldb_ctrl & VAR_7;
 int VAR_12 = FUNC_2(VAR_9->child, VAR_8);

 FUNC_4(VAR_9->panel);

 if (VAR_11) {
  FUNC_1(VAR_10->clk_sel[VAR_12], VAR_10->clk[0]);
  FUNC_1(VAR_10->clk_sel[VAR_12], VAR_10->clk[1]);

  FUNC_0(VAR_10->clk[0]);
  FUNC_0(VAR_10->clk[1]);
 } else {
  FUNC_1(VAR_10->clk_sel[VAR_12], VAR_10->clk[VAR_9->chno]);
 }

 if (VAR_9 == &VAR_10->channel[0] || VAR_11) {
  VAR_10->ldb_ctrl &= ~VAR_1;
  if (VAR_12 == 0 || VAR_10->lvds_mux)
   VAR_10->ldb_ctrl |= VAR_2;
  else if (VAR_12 == 1)
   VAR_10->ldb_ctrl |= VAR_3;
 }
 if (VAR_9 == &VAR_10->channel[1] || VAR_11) {
  VAR_10->ldb_ctrl &= ~VAR_4;
  if (VAR_12 == 1 || VAR_10->lvds_mux)
   VAR_10->ldb_ctrl |= VAR_6;
  else if (VAR_12 == 0)
   VAR_10->ldb_ctrl |= VAR_5;
 }

 if (VAR_10->lvds_mux) {
  const struct bus_mux *VAR_13 = ((void*)0);

  if (VAR_9 == &VAR_10->channel[0])
   VAR_13 = &VAR_10->lvds_mux[0];
  else if (VAR_9 == &VAR_10->channel[1])
   VAR_13 = &VAR_10->lvds_mux[1];

  FUNC_6(VAR_10->regmap, VAR_13->reg, VAR_13->mask,
       VAR_12 << VAR_13->shift);
 }

 FUNC_7(VAR_10->regmap, VAR_0, VAR_10->ldb_ctrl);

 FUNC_3(VAR_9->panel);
}
