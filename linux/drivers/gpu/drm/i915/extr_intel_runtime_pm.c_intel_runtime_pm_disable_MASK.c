
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int available; struct device* kdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

void FUNC_4(struct intel_runtime_pm *VAR_0)
{
 struct device *VAR_1 = VAR_0->kdev;


 FUNC_0(FUNC_2(VAR_1) < 0,
      "Failed to pass rpm ownership back to core\n");

 FUNC_1(VAR_1);

 if (!VAR_0->available)
  FUNC_3(VAR_1);
}
