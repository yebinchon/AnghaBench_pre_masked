
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_hdmi {TYPE_2__* dev; int grf_clk; TYPE_1__* chip_data; int regmap; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_4__ {scalar_t__ lcdsel_grf_reg; int lcdsel_big; int lcdsel_lit; } ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct drm_encoder*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 struct rockchip_hdmi* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_0)
{
 struct rockchip_hdmi *VAR_1 = FUNC_6(VAR_0);
 u32 VAR_2;
 int VAR_3;

 if (VAR_1->chip_data->lcdsel_grf_reg < 0)
  return;

 VAR_3 = FUNC_4(VAR_1->dev->of_node, VAR_0);
 if (VAR_3)
  VAR_2 = VAR_1->chip_data->lcdsel_lit;
 else
  VAR_2 = VAR_1->chip_data->lcdsel_big;

 VAR_3 = FUNC_3(VAR_1->grf_clk);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "failed to enable grfclk %d\n", VAR_3);
  return;
 }

 VAR_3 = FUNC_5(VAR_1->regmap, VAR_1->chip_data->lcdsel_grf_reg, VAR_2);
 if (VAR_3 != 0)
  FUNC_1(VAR_1->dev, "Could not write to GRF: %d\n", VAR_3);

 FUNC_2(VAR_1->grf_clk);
 FUNC_0(VAR_1->dev, "vop %s output to hdmi\n",
        VAR_3 ? "LIT" : "BIG");
}
