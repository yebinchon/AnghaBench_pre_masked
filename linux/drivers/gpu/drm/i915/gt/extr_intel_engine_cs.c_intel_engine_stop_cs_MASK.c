
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_engine_cs {int name; int i915; int mmio_base; struct intel_uncore* uncore; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int const) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct intel_uncore*,int const,int ,int ,int,int ,int *) ;
 int FUNC_5 (struct intel_uncore*,int const) ;
 int FUNC_6 (struct intel_uncore*,int const,int ) ;

int FUNC_7(struct intel_engine_cs *VAR_4)
{
 struct intel_uncore *VAR_5 = VAR_4->uncore;
 const u32 VAR_6 = VAR_4->mmio_base;
 const i915_reg_t VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if (FUNC_1(VAR_4->i915) < 3)
  return -VAR_0;

 FUNC_0("%s\n", VAR_4->name);

 FUNC_6(VAR_5, VAR_7, FUNC_3(VAR_3));

 VAR_8 = 0;
 if (FUNC_4(VAR_5,
      VAR_7, VAR_2, VAR_2,
      1000, 0,
      ((void*)0))) {
  FUNC_0("%s: timed out on STOP_RING -> IDLE\n", VAR_4->name);
  VAR_8 = -VAR_1;
 }


 FUNC_5(VAR_5, VAR_7);

 return VAR_8;
}
