
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dw_mipi_dsi_phy_ops {int (* power_off ) (int ) ;} ;
struct dw_mipi_dsi {int dev; int pclk; struct dw_mipi_dsi* slave; TYPE_3__* panel_bridge; TYPE_1__* plat_data; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* post_disable ) (TYPE_3__*) ;} ;
struct TYPE_4__ {int priv_data; struct dw_mipi_dsi_phy_ops* phy_ops; } ;


 struct dw_mipi_dsi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dw_mipi_dsi*) ;
 int FUNC_3 (struct dw_mipi_dsi*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_0)
{
 struct dw_mipi_dsi *VAR_1 = FUNC_0(VAR_0);
 const struct dw_mipi_dsi_phy_ops *VAR_2 = VAR_1->plat_data->phy_ops;

 if (VAR_2->power_off)
  VAR_2->power_off(VAR_1->plat_data->priv_data);







 FUNC_3(VAR_1, 0);







 VAR_1->panel_bridge->funcs->post_disable(VAR_1->panel_bridge);

 if (VAR_1->slave) {
  FUNC_2(VAR_1->slave);
  FUNC_1(VAR_1->slave->pclk);
  FUNC_4(VAR_1->slave->dev);
 }
 FUNC_2(VAR_1);

 FUNC_1(VAR_1->pclk);
 FUNC_4(VAR_1->dev);
}
