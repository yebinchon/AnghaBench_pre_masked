
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_lvds_priv {int ddc_bus; } ;
struct gma_encoder {struct psb_intel_lvds_priv* dev_priv; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 struct gma_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_2(VAR_0);
 struct psb_intel_lvds_priv *VAR_2 = VAR_1->dev_priv;

 FUNC_4(VAR_2->ddc_bus);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
}
