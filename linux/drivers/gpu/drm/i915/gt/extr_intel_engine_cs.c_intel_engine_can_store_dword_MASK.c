
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int class; int i915; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

bool FUNC_3(struct intel_engine_cs *VAR_1)
{
 switch (FUNC_0(VAR_1->i915)) {
 case 2:
  return 0;
 case 3:

  return !(FUNC_1(VAR_1->i915) || FUNC_2(VAR_1->i915));
 case 6:
  return VAR_1->class != VAR_0;
 default:
  return 1;
 }
}
