
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdfld_dsi_connector {int dummy; } ;
struct mdfld_dsi_config {TYPE_2__* encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {struct drm_encoder base; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 struct mdfld_dsi_connector* FUNC_0 (struct drm_connector*) ;
 struct mdfld_dsi_config* FUNC_1 (struct mdfld_dsi_connector*) ;

__attribute__((used)) static struct drm_encoder *FUNC_2(
    struct drm_connector *VAR_0)
{
 struct mdfld_dsi_connector *VAR_1 =
    FUNC_0(VAR_0);
 struct mdfld_dsi_config *VAR_2 =
    FUNC_1(VAR_1);
 return &VAR_2->encoder->base.base;
}
