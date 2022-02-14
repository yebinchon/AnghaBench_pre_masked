
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_drm_context {TYPE_2__* client; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* close_channel ) (struct tegra_drm_context*) ;} ;


 int FUNC_0 (struct tegra_drm_context*) ;
 int FUNC_1 (struct tegra_drm_context*) ;

__attribute__((used)) static void FUNC_2(struct tegra_drm_context *VAR_0)
{
 VAR_0->client->ops->close_channel(VAR_0);
 FUNC_0(VAR_0);
}
