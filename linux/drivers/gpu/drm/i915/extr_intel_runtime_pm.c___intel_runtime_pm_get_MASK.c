
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int kdev; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct intel_runtime_pm*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_runtime_pm*) ;

__attribute__((used)) static intel_wakeref_t FUNC_4(struct intel_runtime_pm *VAR_0,
           bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0->kdev);
 FUNC_0(VAR_2 < 0, "pm_runtime_get_sync() failed: %d\n", VAR_2);

 FUNC_1(VAR_0, VAR_1);

 return FUNC_3(VAR_0);
}
