
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct drm_connector {int dummy; } ;
struct cdv_intel_dp {int adapter; struct drm_connector* panel_fixed_mode; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 struct gma_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct gma_encoder*) ;
 int FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_6(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_2(VAR_0);
 struct cdv_intel_dp *VAR_2 = VAR_1->dev_priv;

 if (FUNC_4(VAR_1)) {

  FUNC_5(VAR_2->panel_fixed_mode);
  VAR_2->panel_fixed_mode = ((void*)0);
 }
 FUNC_3(&VAR_2->adapter);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_5(VAR_0);
}
