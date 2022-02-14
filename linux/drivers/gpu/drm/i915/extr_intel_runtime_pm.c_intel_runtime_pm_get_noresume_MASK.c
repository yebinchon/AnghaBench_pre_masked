
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int kdev; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (struct intel_runtime_pm*) ;
 int FUNC_1 (struct intel_runtime_pm*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_runtime_pm*) ;

intel_wakeref_t FUNC_4(struct intel_runtime_pm *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->kdev);

 FUNC_1(VAR_0, 1);

 return FUNC_3(VAR_0);
}
