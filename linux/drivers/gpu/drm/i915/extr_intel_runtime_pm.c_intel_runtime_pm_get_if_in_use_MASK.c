
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int kdev; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_runtime_pm*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct intel_runtime_pm*) ;

intel_wakeref_t FUNC_4(struct intel_runtime_pm *VAR_1)
{
 if (FUNC_0(VAR_0)) {






  if (FUNC_2(VAR_1->kdev) <= 0)
   return 0;
 }

 FUNC_1(VAR_1, 1);

 return FUNC_3(VAR_1);
}
