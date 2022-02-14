
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc {int syncpt; int group; int dev; int irq; } ;
struct host1x_client {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,struct tegra_dc*) ;
 int FUNC_2 (struct host1x_client*,int ) ;
 struct tegra_dc* FUNC_3 (struct host1x_client*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_dc*) ;
 int FUNC_6 (struct tegra_dc*) ;

__attribute__((used)) static int FUNC_7(struct host1x_client *VAR_0)
{
 struct tegra_dc *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 if (!FUNC_5(VAR_1))
  return 0;

 FUNC_1(VAR_1->dev, VAR_1->irq, VAR_1);

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed to shutdown RGB output: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_2(VAR_0, VAR_1->group);
 FUNC_4(VAR_1->syncpt);

 return 0;
}
