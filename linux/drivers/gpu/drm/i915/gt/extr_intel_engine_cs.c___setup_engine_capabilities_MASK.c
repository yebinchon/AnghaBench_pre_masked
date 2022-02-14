
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {scalar_t__ class; scalar_t__ instance; int mask; int uabi_capabilities; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int vdbox_sfc_access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 TYPE_1__* FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;

 if (VAR_4->class == VAR_2) {




  if (FUNC_0(VAR_5) >= 11 ||
      (FUNC_0(VAR_5) >= 9 && VAR_4->instance == 0))
   VAR_4->uabi_capabilities |=
    VAR_1;





  if ((FUNC_0(VAR_5) >= 11 &&
       FUNC_1(VAR_5)->vdbox_sfc_access & VAR_4->mask) ||
      (FUNC_0(VAR_5) >= 9 && VAR_4->instance == 0))
   VAR_4->uabi_capabilities |=
    VAR_0;
 } else if (VAR_4->class == VAR_3) {
  if (FUNC_0(VAR_5) >= 9)
   VAR_4->uabi_capabilities |=
    VAR_0;
 }
}
