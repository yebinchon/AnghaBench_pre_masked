
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* value; void* mask; int reg; } ;
struct intel_huc {TYPE_1__ status; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* i915; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*) ;
 TYPE_2__* FUNC_1 (struct intel_huc*) ;
 int FUNC_2 (struct intel_huc*) ;

void FUNC_3(struct intel_huc *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_1(VAR_4)->i915;

 FUNC_2(VAR_4);

 if (FUNC_0(VAR_5) >= 11) {
  VAR_4->status.reg = VAR_0;
  VAR_4->status.mask = VAR_2;
  VAR_4->status.value = VAR_2;
 } else {
  VAR_4->status.reg = VAR_3;
  VAR_4->status.mask = VAR_1;
  VAR_4->status.value = VAR_1;
 }
}
