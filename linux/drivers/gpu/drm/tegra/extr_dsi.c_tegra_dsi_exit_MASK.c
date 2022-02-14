
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dsi {int output; } ;
struct host1x_client {int dummy; } ;


 struct tegra_dsi* FUNC_0 (struct host1x_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct host1x_client *VAR_0)
{
 struct tegra_dsi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->output);

 return 0;
}
