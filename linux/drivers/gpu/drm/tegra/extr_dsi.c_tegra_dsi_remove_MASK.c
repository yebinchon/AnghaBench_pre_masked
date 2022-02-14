
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dsi {int mipi; int host; int output; int client; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tegra_dsi* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct tegra_dsi *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_4(&VAR_0->dev);

 VAR_2 = FUNC_1(&VAR_1->client);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev, "failed to unregister host1x client: %d\n",
   VAR_2);
  return VAR_2;
 }

 FUNC_6(&VAR_1->output);

 FUNC_2(&VAR_1->host);
 FUNC_5(VAR_1->mipi);

 return 0;
}
