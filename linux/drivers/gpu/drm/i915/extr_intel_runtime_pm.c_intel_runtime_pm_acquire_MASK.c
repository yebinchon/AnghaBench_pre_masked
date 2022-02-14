
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int wakeref_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_runtime_pm*) ;
 int FUNC_1 (struct intel_runtime_pm*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct intel_runtime_pm *VAR_1, bool VAR_2)
{
 if (VAR_2) {
  FUNC_2(1 + VAR_0, &VAR_1->wakeref_count);
  FUNC_1(VAR_1);
 } else {
  FUNC_3(&VAR_1->wakeref_count);
  FUNC_0(VAR_1);
 }
}
