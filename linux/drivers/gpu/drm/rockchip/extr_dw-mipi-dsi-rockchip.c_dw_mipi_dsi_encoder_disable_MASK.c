
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mipi_dsi_rockchip {int dev; TYPE_1__* slave; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 struct dw_mipi_dsi_rockchip* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0)
{
 struct dw_mipi_dsi_rockchip *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->slave)
  FUNC_0(VAR_1->slave->dev);
 FUNC_0(VAR_1->dev);
}
