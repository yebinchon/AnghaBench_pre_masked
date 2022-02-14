
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_display_hub {int client; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 struct tegra_display_hub* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct tegra_display_hub *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->client);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev, "failed to unregister host1x client: %d\n",
   VAR_2);
 }

 FUNC_3(&VAR_0->dev);

 return VAR_2;
}
