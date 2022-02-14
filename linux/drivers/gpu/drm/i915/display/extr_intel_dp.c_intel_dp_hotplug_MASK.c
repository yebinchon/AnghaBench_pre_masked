
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_connector {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
typedef enum intel_hotplug_state { ____Placeholder_intel_hotplug_state } intel_hotplug_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_5 (struct intel_encoder*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_connector*,int) ;

__attribute__((used)) static enum intel_hotplug_state
FUNC_7(struct intel_encoder *VAR_3,
   struct intel_connector *VAR_4,
   bool VAR_5)
{
 struct drm_modeset_acquire_ctx VAR_6;
 enum intel_hotplug_state VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5);

 FUNC_2(&VAR_6, 0);

 for (;;) {
  VAR_8 = FUNC_5(VAR_3, &VAR_6);

  if (VAR_8 == -VAR_0) {
   FUNC_3(&VAR_6);
   continue;
  }

  break;
 }

 FUNC_4(&VAR_6);
 FUNC_1(&VAR_6);
 FUNC_0(VAR_8, "Acquiring modeset locks failed with %i\n", VAR_8);





 if (VAR_7 == VAR_2 && VAR_5)
  VAR_7 = VAR_1;

 return VAR_7;
}
