
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
typedef scalar_t__ pci_power_t ;
struct TYPE_3__ {scalar_t__ pci_power_state; int parm; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct drm_i915_private*,int ,int ,int *) ;

int FUNC_3(struct drm_i915_private *VAR_3,
      pci_power_t VAR_4)
{
 int VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_4 == VAR_2[VAR_5].pci_power_state)
   return FUNC_2(VAR_3, VAR_1,
         VAR_2[VAR_5].parm, ((void*)0));
 }

 return -VAR_0;
}
