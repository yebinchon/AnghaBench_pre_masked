
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ldb_channel {int panel; struct imx_ldb* ldb; } ;
struct imx_ldb {int ldb_ctrl; int dev; int * clk_parent; int * clk_sel; struct imx_ldb_channel* channel; int regmap; struct bus_mux* lvds_mux; int * clk; } ;
struct drm_encoder {int dummy; } ;
struct bus_mux {int mask; int shift; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct imx_ldb_channel* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_4)
{
 struct imx_ldb_channel *VAR_5 = FUNC_5(VAR_4);
 struct imx_ldb *VAR_6 = VAR_5->ldb;
 int VAR_7, VAR_8;

 FUNC_3(VAR_5->panel);

 if (VAR_5 == &VAR_6->channel[0])
  VAR_6->ldb_ctrl &= ~VAR_1;
 else if (VAR_5 == &VAR_6->channel[1])
  VAR_6->ldb_ctrl &= ~VAR_2;

 FUNC_7(VAR_6->regmap, VAR_0, VAR_6->ldb_ctrl);

 if (VAR_6->ldb_ctrl & VAR_3) {
  FUNC_0(VAR_6->clk[0]);
  FUNC_0(VAR_6->clk[1]);
 }

 if (VAR_6->lvds_mux) {
  const struct bus_mux *VAR_9 = ((void*)0);

  if (VAR_5 == &VAR_6->channel[0])
   VAR_9 = &VAR_6->lvds_mux[0];
  else if (VAR_5 == &VAR_6->channel[1])
   VAR_9 = &VAR_6->lvds_mux[1];

  FUNC_6(VAR_6->regmap, VAR_9->reg, &VAR_7);
  VAR_7 &= VAR_9->mask;
  VAR_7 >>= VAR_9->shift;
 } else {
  VAR_7 = (VAR_5 == &VAR_6->channel[0]) ? 0 : 1;
 }


 VAR_8 = FUNC_1(VAR_6->clk_sel[VAR_7], VAR_6->clk_parent[VAR_7]);
 if (VAR_8)
  FUNC_2(VAR_6->dev,
   "unable to set di%d parent clock to original parent\n",
   VAR_7);

 FUNC_4(VAR_5->panel);
}
