
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dw_mipi_dsi_rockchip {scalar_t__ devcnt; int dmd; int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct dw_mipi_dsi_rockchip* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct dw_mipi_dsi_rockchip *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->devcnt == 0)
  FUNC_0(VAR_2->dev, &VAR_0);

 FUNC_1(VAR_2->dmd);

 return 0;
}
