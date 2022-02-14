
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct intel_connector {TYPE_3__ base; } ;
struct TYPE_5__ {scalar_t__ type; int refresh_rate_type; int mutex; int work; } ;
struct TYPE_4__ {scalar_t__ drrs_type; } ;
struct drm_i915_private {TYPE_2__ drrs; TYPE_1__ vbt; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct drm_display_mode* FUNC_3 (struct intel_connector*,struct drm_display_mode*) ;
 int FUNC_4 (int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static struct drm_display_mode *
FUNC_6(struct intel_connector *VAR_3,
     struct drm_display_mode *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_5(VAR_3->base.dev);
 struct drm_display_mode *VAR_6 = ((void*)0);

 FUNC_1(&VAR_5->drrs.work, VAR_2);
 FUNC_4(&VAR_5->drrs.mutex);

 if (FUNC_2(VAR_5) <= 6) {
  FUNC_0("DRRS supported for Gen7 and above\n");
  return ((void*)0);
 }

 if (VAR_5->vbt.drrs_type != VAR_1) {
  FUNC_0("VBT doesn't support DRRS\n");
  return ((void*)0);
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_0("Downclock mode is not found. DRRS not supported\n");
  return ((void*)0);
 }

 VAR_5->drrs.type = VAR_5->vbt.drrs_type;

 VAR_5->drrs.refresh_rate_type = VAR_0;
 FUNC_0("seamless DRRS supported for eDP panel.\n");
 return VAR_6;
}
