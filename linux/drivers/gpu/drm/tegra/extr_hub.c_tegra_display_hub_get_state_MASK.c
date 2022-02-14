
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_display_hub_state {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct tegra_display_hub {int base; TYPE_1__ client; } ;
struct drm_private_state {int dummy; } ;
struct TYPE_4__ {int connection_mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_atomic_state {int dummy; } ;


 struct tegra_display_hub_state* FUNC_0 (struct drm_private_state*) ;
 scalar_t__ FUNC_1 (struct drm_private_state*) ;
 int FUNC_2 (int) ;
 struct drm_device* FUNC_3 (int ) ;
 struct drm_private_state* FUNC_4 (struct drm_atomic_state*,int *) ;
 int FUNC_5 (int *) ;
 struct tegra_display_hub_state* FUNC_6 (struct drm_private_state*) ;

__attribute__((used)) static struct tegra_display_hub_state *
FUNC_7(struct tegra_display_hub *VAR_0,
       struct drm_atomic_state *VAR_1)
{
 struct drm_device *VAR_2 = FUNC_3(VAR_0->client.parent);
 struct drm_private_state *VAR_3;

 FUNC_2(!FUNC_5(&VAR_2->mode_config.connection_mutex));

 VAR_3 = FUNC_4(VAR_1, &VAR_0->base);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 return FUNC_6(VAR_3);
}
