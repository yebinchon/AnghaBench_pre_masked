
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dw_mipi_dsi_phy_ops {int (* get_lane_mbps ) (void*,struct drm_display_mode const*,int ,int ,int ,int *) ;int (* init ) (void*) ;} ;
struct dw_mipi_dsi {int dev; int lane_mbps; int format; int mode_flags; int pclk; TYPE_1__* plat_data; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {void* priv_data; struct dw_mipi_dsi_phy_ops* phy_ops; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dw_mipi_dsi*) ;
 int FUNC_3 (struct dw_mipi_dsi*) ;
 int FUNC_4 (struct dw_mipi_dsi*) ;
 int FUNC_5 (struct dw_mipi_dsi*) ;
 int FUNC_6 (struct dw_mipi_dsi*) ;
 int FUNC_7 (struct dw_mipi_dsi*) ;
 int FUNC_8 (struct dw_mipi_dsi*,struct drm_display_mode const*) ;
 int FUNC_9 (struct dw_mipi_dsi*) ;
 int FUNC_10 (struct dw_mipi_dsi*) ;
 int FUNC_11 (struct dw_mipi_dsi*,struct drm_display_mode const*) ;
 int FUNC_12 (struct dw_mipi_dsi*) ;
 int FUNC_13 (struct dw_mipi_dsi*,int ) ;
 int FUNC_14 (struct dw_mipi_dsi*,struct drm_display_mode const*) ;
 int FUNC_15 (struct dw_mipi_dsi*) ;
 int FUNC_16 (struct dw_mipi_dsi*,struct drm_display_mode const*) ;
 int FUNC_17 (struct drm_display_mode const*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (void*,struct drm_display_mode const*,int ,int ,int ,int *) ;
 int FUNC_20 (void*) ;

__attribute__((used)) static void FUNC_21(struct dw_mipi_dsi *VAR_0,
     const struct drm_display_mode *VAR_1)
{
 const struct dw_mipi_dsi_phy_ops *VAR_2 = VAR_0->plat_data->phy_ops;
 void *VAR_3 = VAR_0->plat_data->priv_data;
 int VAR_4;
 u32 VAR_5 = FUNC_9(VAR_0);

 FUNC_1(VAR_0->pclk);

 VAR_4 = VAR_2->get_lane_mbps(VAR_3, VAR_1, VAR_0->mode_flags,
         VAR_5, VAR_0->format, &VAR_0->lane_mbps);
 if (VAR_4)
  FUNC_0("Phy get_lane_mbps() failed\n");

 FUNC_18(VAR_0->dev);
 FUNC_10(VAR_0);
 FUNC_8(VAR_0, VAR_1);
 FUNC_12(VAR_0);
 FUNC_15(VAR_0);
 FUNC_16(VAR_0, VAR_1);
 FUNC_3(VAR_0);
 FUNC_11(VAR_0, VAR_1);
 FUNC_14(VAR_0, VAR_1);

 FUNC_5(VAR_0);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);

 FUNC_2(VAR_0);

 VAR_4 = VAR_2->init(VAR_3);
 if (VAR_4)
  FUNC_0("Phy init() failed\n");

 FUNC_4(VAR_0);

 FUNC_17(VAR_1);


 FUNC_13(VAR_0, 0);
}
