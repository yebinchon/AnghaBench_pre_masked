
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {int ddc_bus; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 struct gma_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1->ddc_bus);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
}
