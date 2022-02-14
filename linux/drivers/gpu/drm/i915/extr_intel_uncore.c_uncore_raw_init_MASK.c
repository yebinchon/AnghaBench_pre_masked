
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int i915; } ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct intel_uncore*) ;

__attribute__((used)) static void FUNC_5(struct intel_uncore *VAR_2)
{
 FUNC_2(FUNC_4(VAR_2));

 if (FUNC_3(VAR_2->i915, 5)) {
  FUNC_1(VAR_2, VAR_1);
  FUNC_0(VAR_2, VAR_1);
 } else {
  FUNC_1(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_0);
 }
}
