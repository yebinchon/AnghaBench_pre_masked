
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gmi {int dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tegra_gmi* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct tegra_gmi*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct tegra_gmi *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->dev);
 FUNC_2(VAR_1);

 return 0;
}
