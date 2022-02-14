
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_sdvo {int ddc; } ;
struct TYPE_3__ {int * sdvo_lvds_vbt_mode; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct drm_display_mode {int type; } ;
struct TYPE_4__ {int id; } ;
struct drm_connector {int dev; int name; TYPE_2__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 struct intel_sdvo* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_connector *VAR_2)
{
 struct intel_sdvo *VAR_3 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_2->dev);
 struct drm_display_mode *VAR_5;

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_2->base.id, VAR_2->name);





 if (VAR_4->vbt.sdvo_lvds_vbt_mode != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_2->dev,
          VAR_4->vbt.sdvo_lvds_vbt_mode);
  if (VAR_5 != ((void*)0)) {

   VAR_5->type = (VAR_1 |
      VAR_0);
   FUNC_2(VAR_2, VAR_5);
  }
 }






 FUNC_4(VAR_2, &VAR_3->ddc);
}
