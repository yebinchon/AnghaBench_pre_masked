
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {scalar_t__ alternate_ddc_pin; scalar_t__ child; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum port FUNC_0(struct drm_i915_private *VAR_3, u8 VAR_4)
{
 const struct ddi_vbt_port_info *VAR_5;
 enum port VAR_6;

 for (VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_3->vbt.ddi_port_info[VAR_6];

  if (VAR_5->child && VAR_4 == VAR_5->alternate_ddc_pin)
   return VAR_6;
 }

 return VAR_2;
}
