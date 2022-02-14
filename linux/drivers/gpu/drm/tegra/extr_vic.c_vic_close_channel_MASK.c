
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vic {int dev; } ;
struct tegra_drm_context {int channel; int client; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vic* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tegra_drm_context *VAR_0)
{
 struct vic *VAR_1 = FUNC_2(VAR_0->client);

 FUNC_0(VAR_0->channel);

 FUNC_1(VAR_1->dev);
}
