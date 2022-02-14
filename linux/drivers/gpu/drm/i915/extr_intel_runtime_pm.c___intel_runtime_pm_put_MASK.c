
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {struct device* kdev; } ;
struct device {int dummy; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (struct intel_runtime_pm*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct intel_runtime_pm*,int ) ;

__attribute__((used)) static void FUNC_4(struct intel_runtime_pm *VAR_0,
       intel_wakeref_t VAR_1,
       bool VAR_2)
{
 struct device *VAR_3 = VAR_0->kdev;

 FUNC_3(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_2);

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
}
