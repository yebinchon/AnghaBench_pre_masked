
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dsi {struct tegra_dsi* slave; int dev; int mipi; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tegra_dsi*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_dsi *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0->dev);

 VAR_1 = FUNC_3(VAR_0->mipi);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "failed to enable MIPI calibration: %d\n",
   VAR_1);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "MIPI calibration failed: %d\n", VAR_1);

 if (VAR_0->slave)
  FUNC_4(VAR_0->slave);
}
