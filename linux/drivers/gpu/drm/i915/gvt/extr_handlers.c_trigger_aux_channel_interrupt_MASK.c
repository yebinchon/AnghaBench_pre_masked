
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_gvt_event_type { ____Placeholder_intel_gvt_event_type } intel_gvt_event_type ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (struct intel_vgpu*,int) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_12,
  unsigned int VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_12->gvt->dev_priv;
 enum intel_gvt_event_type VAR_15;

 if (VAR_13 == VAR_5)
  VAR_15 = VAR_0;
 else if (VAR_13 == VAR_9 || VAR_13 == VAR_6)
  VAR_15 = VAR_1;
 else if (VAR_13 == VAR_10 || VAR_13 == VAR_7)
  VAR_15 = VAR_2;
 else if (VAR_13 == VAR_11 || VAR_13 == VAR_8)
  VAR_15 = VAR_3;
 else {
  FUNC_0(1);
  return -VAR_4;
 }

 FUNC_1(VAR_12, VAR_15);
 return 0;
}
