
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {int supports_dvi; int supports_hdmi; int supports_dp; int supports_edp; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct drm_i915_private*,int) ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_private *VAR_3)
{
 enum port VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++) {
  struct ddi_vbt_port_info *VAR_5 =
   &VAR_3->vbt.ddi_port_info[VAR_4];
  enum phy VAR_6 = FUNC_1(VAR_3, VAR_4);





  if (FUNC_0(VAR_3, VAR_6))
   continue;

  VAR_5->supports_dvi = (VAR_4 != VAR_1 && VAR_4 != VAR_2);
  VAR_5->supports_hdmi = VAR_5->supports_dvi;
  VAR_5->supports_dp = (VAR_4 != VAR_2);
  VAR_5->supports_edp = (VAR_4 == VAR_1);
 }
}
