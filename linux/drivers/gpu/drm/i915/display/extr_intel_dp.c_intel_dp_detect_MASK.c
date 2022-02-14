
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct TYPE_10__ {scalar_t__ i2c_defer_count; scalar_t__ i2c_nack_count; } ;
struct TYPE_12__ {int mst_state; } ;
struct intel_dp {int is_mst; int reset_link_params; TYPE_4__ aux; int max_link_rate; int max_link_lane_count; TYPE_6__ mst_mgr; int * dsc_dpcd; int compliance; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_8__ {int connection_mutex; } ;
struct TYPE_9__ {TYPE_2__ mode_config; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct TYPE_7__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; int dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_11__ {scalar_t__ detect_edid; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct intel_digital_port* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct intel_dp*) ;
 struct intel_dp* FUNC_7 (struct drm_connector*) ;
 scalar_t__ FUNC_8 (struct intel_encoder*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (struct intel_dp*) ;
 int FUNC_13 (struct intel_dp*) ;
 scalar_t__ FUNC_14 (struct intel_dp*) ;
 int FUNC_15 (struct intel_dp*) ;
 int FUNC_16 (struct intel_dp*) ;
 int FUNC_17 (struct intel_dp*) ;
 int FUNC_18 (struct intel_encoder*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_19 (struct intel_dp*) ;
 int FUNC_20 (struct intel_dp*) ;
 int FUNC_21 (int *,int ,int) ;
 struct drm_i915_private* FUNC_22 (int ) ;
 TYPE_5__* FUNC_23 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_24(struct drm_connector *VAR_2,
  struct drm_modeset_acquire_ctx *VAR_3,
  bool VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_22(VAR_2->dev);
 struct intel_dp *VAR_6 = FUNC_7(VAR_2);
 struct intel_digital_port *VAR_7 = FUNC_3(VAR_6);
 struct intel_encoder *VAR_8 = &VAR_7->base;
 enum drm_connector_status VAR_9;

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_2->base.id, VAR_2->name);
 FUNC_2(!FUNC_5(&VAR_5->drm.mode_config.connection_mutex));


 if (FUNC_14(VAR_6))
  VAR_9 = FUNC_6(VAR_6);
 else if (FUNC_8(VAR_8))
  VAR_9 = FUNC_12(VAR_6);
 else
  VAR_9 = VAR_1;

 if (VAR_9 == VAR_1) {
  FUNC_21(&VAR_6->compliance, 0, sizeof(VAR_6->compliance));
  FUNC_21(VAR_6->dsc_dpcd, 0, sizeof(VAR_6->dsc_dpcd));

  if (VAR_6->is_mst) {
   FUNC_0("MST device may have disappeared %d vs %d\n",
          VAR_6->is_mst,
          VAR_6->mst_mgr.mst_state);
   VAR_6->is_mst = 0;
   FUNC_4(&VAR_6->mst_mgr,
       VAR_6->is_mst);
  }

  goto out;
 }

 if (VAR_6->reset_link_params) {

  VAR_6->max_link_lane_count = FUNC_15(VAR_6);


  VAR_6->max_link_rate = FUNC_16(VAR_6);

  VAR_6->reset_link_params = 0;
 }

 FUNC_17(VAR_6);


 if (FUNC_1(VAR_5) >= 11)
  FUNC_13(VAR_6);

 FUNC_11(VAR_6);

 if (VAR_6->is_mst) {





  VAR_9 = VAR_1;
  goto out;
 }





 if (!FUNC_14(VAR_6)) {
  int VAR_10;

  VAR_10 = FUNC_18(VAR_8, VAR_3);
  if (VAR_10)
   return VAR_10;
 }






 VAR_6->aux.i2c_nack_count = 0;
 VAR_6->aux.i2c_defer_count = 0;

 FUNC_19(VAR_6);
 if (FUNC_14(VAR_6) ||
     FUNC_23(VAR_2)->detect_edid)
  VAR_9 = VAR_0;

 FUNC_10(VAR_6);

out:
 if (VAR_9 != VAR_0 && !VAR_6->is_mst)
  FUNC_20(VAR_6);





 FUNC_9(VAR_5);

 return VAR_9;
}
