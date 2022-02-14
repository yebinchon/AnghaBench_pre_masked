
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_context {int channel; } ;
struct tegra_drm_client {int dummy; } ;
struct gr3d {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct gr3d* FUNC_1 (struct tegra_drm_client*) ;

__attribute__((used)) static int FUNC_2(struct tegra_drm_client *VAR_1,
        struct tegra_drm_context *VAR_2)
{
 struct gr3d *VAR_3 = FUNC_1(VAR_1);

 VAR_2->channel = FUNC_0(VAR_3->channel);
 if (!VAR_2->channel)
  return -VAR_0;

 return 0;
}
