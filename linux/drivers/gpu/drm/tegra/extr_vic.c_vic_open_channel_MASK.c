
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vic {int dev; int channel; } ;
struct tegra_drm_context {int channel; } ;
struct tegra_drm_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct vic* FUNC_3 (struct tegra_drm_client*) ;
 int FUNC_4 (struct vic*) ;
 int FUNC_5 (struct vic*) ;

__attribute__((used)) static int FUNC_6(struct tegra_drm_client *VAR_1,
       struct tegra_drm_context *VAR_2)
{
 struct vic *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->dev);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0)
  goto rpm_put;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  goto rpm_put;

 VAR_2->channel = FUNC_0(VAR_3->channel);
 if (!VAR_2->channel) {
  VAR_4 = -VAR_0;
  goto rpm_put;
 }

 return 0;

rpm_put:
 FUNC_2(VAR_3->dev);
 return VAR_4;
}
