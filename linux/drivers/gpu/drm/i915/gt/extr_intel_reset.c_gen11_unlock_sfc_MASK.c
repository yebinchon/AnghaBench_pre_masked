
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_engine_cs {int class; int instance; int i915; struct intel_uncore* uncore; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {int vdbox_sfc_access; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_engine_cs*) ;
 int VAR_0 ;
 int FUNC_2 (struct intel_engine_cs*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int ) ;


 int FUNC_4 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct intel_engine_cs *VAR_2)
{
 struct intel_uncore *VAR_3 = VAR_2->uncore;
 u8 VAR_4 = FUNC_3(VAR_2->i915)->vdbox_sfc_access;
 i915_reg_t VAR_5;
 u32 VAR_6;

 switch (VAR_2->class) {
 case 129:
  if ((FUNC_0(VAR_2->instance) & VAR_4) == 0)
   return;

  VAR_5 = FUNC_1(VAR_2);
  VAR_6 = VAR_0;
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_2);
  VAR_6 = VAR_1;
  break;

 default:
  return;
 }

 FUNC_4(VAR_3, VAR_5, VAR_6);
}
