
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct TYPE_4__ {int is_mst; } ;
struct intel_digital_port {TYPE_2__ dp; } ;
struct TYPE_3__ {scalar_t__ connector_type; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
typedef enum intel_hotplug_state { ____Placeholder_intel_hotplug_state } intel_hotplug_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct drm_modeset_acquire_ctx*) ;
 struct intel_digital_port* FUNC_5 (int *) ;
 int FUNC_6 (struct intel_encoder*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_connector*,int) ;
 int FUNC_8 (struct intel_encoder*,struct drm_modeset_acquire_ctx*) ;

__attribute__((used)) static enum intel_hotplug_state
FUNC_9(struct intel_encoder *VAR_4,
    struct intel_connector *VAR_5,
    bool VAR_6)
{
 struct intel_digital_port *VAR_7 = FUNC_5(&VAR_4->base);
 struct drm_modeset_acquire_ctx VAR_8;
 enum intel_hotplug_state VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_6);

 FUNC_2(&VAR_8, 0);

 for (;;) {
  if (VAR_5->base.connector_type == VAR_0)
   VAR_10 = FUNC_8(VAR_4, &VAR_8);
  else
   VAR_10 = FUNC_6(VAR_4, &VAR_8);

  if (VAR_10 == -VAR_1) {
   FUNC_3(&VAR_8);
   continue;
  }

  break;
 }

 FUNC_4(&VAR_8);
 FUNC_1(&VAR_8);
 FUNC_0(VAR_10, "Acquiring modeset locks failed with %i\n", VAR_10);
 if (VAR_9 == VAR_3 && VAR_6 &&
     !VAR_7->dp.is_mst)
  VAR_9 = VAR_2;

 return VAR_9;
}
