
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dsi {int dev; int mipi; struct tegra_dsi* slave; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tegra_dsi *VAR_0)
{
 int VAR_1;

 if (VAR_0->slave)
  FUNC_3(VAR_0->slave);

 VAR_1 = FUNC_2(VAR_0->mipi);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "failed to disable MIPI calibration: %d\n",
   VAR_1);

 FUNC_1(VAR_0->dev);
}
