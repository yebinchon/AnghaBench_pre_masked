
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mipi_dsi_phy_ops {int (* power_on ) (int ) ;} ;
struct dw_mipi_dsi {TYPE_1__* plat_data; struct dw_mipi_dsi* slave; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_2__ {int priv_data; struct dw_mipi_dsi_phy_ops* phy_ops; } ;


 int VAR_0 ;
 struct dw_mipi_dsi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct dw_mipi_dsi*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_1)
{
 struct dw_mipi_dsi *VAR_2 = FUNC_0(VAR_1);
 const struct dw_mipi_dsi_phy_ops *VAR_3 = VAR_2->plat_data->phy_ops;


 FUNC_1(VAR_2, VAR_0);
 if (VAR_2->slave)
  FUNC_1(VAR_2->slave, VAR_0);

 if (VAR_3->power_on)
  VAR_3->power_on(VAR_2->plat_data->priv_data);
}
