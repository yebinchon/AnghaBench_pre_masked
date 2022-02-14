
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
 int FUNC_1 (char*) ;
 int FUNC_2 (struct intel_engine_cs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct intel_engine_cs*) ;
 int VAR_3 ;
 int FUNC_6 (struct intel_engine_cs*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct intel_engine_cs*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_9 (int ) ;


 scalar_t__ FUNC_10 (struct intel_uncore*,int ,int,int,int,int ,int *) ;
 int FUNC_11 (struct intel_uncore*,int ) ;
 int FUNC_12 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static u32 FUNC_13(struct intel_engine_cs *VAR_6)
{
 struct intel_uncore *VAR_7 = VAR_6->uncore;
 u8 VAR_8 = FUNC_9(VAR_6->i915)->vdbox_sfc_access;
 i915_reg_t VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 i915_reg_t VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 switch (VAR_6->class) {
 case 129:
  if ((FUNC_0(VAR_6->instance) & VAR_8) == 0)
   return 0;

  VAR_9 = FUNC_2(VAR_6);
  VAR_11 = VAR_0;

  VAR_10 = FUNC_3(VAR_6);
  VAR_12 = VAR_1;

  VAR_13 = FUNC_3(VAR_6);
  VAR_14 = VAR_2;
  VAR_15 = FUNC_4(VAR_6->instance);
  break;

 case 128:
  VAR_9 = FUNC_5(VAR_6);
  VAR_11 = VAR_3;

  VAR_10 = FUNC_6(VAR_6);
  VAR_12 = VAR_4;

  VAR_13 = FUNC_8(VAR_6);
  VAR_14 = VAR_5;
  VAR_15 = FUNC_7(VAR_6->instance);
  break;

 default:
  return 0;
 }
 FUNC_12(VAR_7, VAR_9, VAR_11);

 if (FUNC_10(VAR_7,
      VAR_10,
      VAR_12,
      VAR_12,
      1000, 0, ((void*)0))) {
  FUNC_1("Wait for SFC forced lock ack failed\n");
  return 0;
 }

 if (FUNC_11(VAR_7, VAR_13) & VAR_14)
  return VAR_15;

 return 0;
}
