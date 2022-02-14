
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_gt {int i915; struct intel_uncore* uncore; } ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct intel_gt *VAR_2)
{
 struct intel_uncore *VAR_3 = VAR_2->uncore;

 FUNC_0(VAR_3, VAR_1);
 if (FUNC_1(VAR_2->i915) >= 6)
  FUNC_0(VAR_3, VAR_0);
}
