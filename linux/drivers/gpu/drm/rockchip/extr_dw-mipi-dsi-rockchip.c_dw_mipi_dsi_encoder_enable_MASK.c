
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dw_mipi_dsi_rockchip {int grf_clk; struct dw_mipi_dsi_rockchip* slave; TYPE_1__* dev; int encoder; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dw_mipi_dsi_rockchip*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 struct dw_mipi_dsi_rockchip* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_0)
{
 struct dw_mipi_dsi_rockchip *VAR_1 = FUNC_6(VAR_0);
 int VAR_2, VAR_3;

 VAR_3 = FUNC_3(VAR_1->dev->of_node,
      &VAR_1->encoder);
 if (VAR_3 < 0)
  return;

 FUNC_5(VAR_1->dev);
 if (VAR_1->slave)
  FUNC_5(VAR_1->slave->dev);






 VAR_2 = FUNC_2(VAR_1->grf_clk);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "Failed to enable grf_clk: %d\n", VAR_2);
  return;
 }

 FUNC_4(VAR_1, VAR_3);
 if (VAR_1->slave)
  FUNC_4(VAR_1->slave, VAR_3);

 FUNC_1(VAR_1->grf_clk);
}
