
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_connector {scalar_t__ connector_type; int dev; struct dentry* debugfs_entry; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,struct dentry*,struct drm_connector*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct drm_i915_private* FUNC_2 (int ) ;

int FUNC_3(struct drm_connector *VAR_11)
{
 struct dentry *VAR_12 = VAR_11->debugfs_entry;
 struct drm_i915_private *VAR_13 = FUNC_2(VAR_11->dev);


 if (!VAR_12)
  return -VAR_4;

 if (VAR_11->connector_type == VAR_0 ||
     VAR_11->connector_type == VAR_3)
  FUNC_1("i915_dpcd", VAR_5, VAR_12,
        VAR_11, &VAR_6);

 if (VAR_11->connector_type == VAR_3) {
  FUNC_1("i915_panel_timings", VAR_5, VAR_12,
        VAR_11, &VAR_9);
  FUNC_1("i915_psr_sink_status", VAR_5, VAR_12,
        VAR_11, &VAR_10);
 }

 if (VAR_11->connector_type == VAR_0 ||
     VAR_11->connector_type == VAR_1 ||
     VAR_11->connector_type == VAR_2) {
  FUNC_1("i915_hdcp_sink_capability", VAR_5, VAR_12,
        VAR_11, &VAR_8);
 }

 if (FUNC_0(VAR_13) >= 10 &&
     (VAR_11->connector_type == VAR_0 ||
      VAR_11->connector_type == VAR_3))
  FUNC_1("i915_dsc_fec_support", VAR_5, VAR_12,
        VAR_11, &VAR_7);

 return 0;
}
