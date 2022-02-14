
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_3,
     struct intel_shared_dpll *VAR_4)
{
 enum port VAR_5 = (enum port)VAR_4->info->id;
 u32 VAR_6;

 VAR_6 = FUNC_2(FUNC_0(VAR_5));
 VAR_6 &= ~VAR_0;
 FUNC_3(FUNC_0(VAR_5), VAR_6);
 FUNC_5(FUNC_0(VAR_5));

 if (FUNC_4(VAR_3)) {
  VAR_6 = FUNC_2(FUNC_0(VAR_5));
  VAR_6 &= ~VAR_1;
  FUNC_3(FUNC_0(VAR_5), VAR_6);

  if (FUNC_6(!(FUNC_2(FUNC_0(VAR_5)) &
    VAR_2), 200))
   FUNC_1("Power state not reset for PLL:%d\n", VAR_5);
 }
}
