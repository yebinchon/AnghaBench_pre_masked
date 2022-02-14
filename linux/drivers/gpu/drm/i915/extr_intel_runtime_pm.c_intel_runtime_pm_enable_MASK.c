
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int available; struct device* kdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*) ;

void FUNC_8(struct intel_runtime_pm *VAR_1)
{
 struct device *VAR_2 = VAR_1->kdev;
 FUNC_1(VAR_2, VAR_0);

 FUNC_6(VAR_2, 10000);
 FUNC_4(VAR_2);







 if (!VAR_1->available) {
  int VAR_3;

  FUNC_2(VAR_2);
  VAR_3 = FUNC_3(VAR_2);
  FUNC_0(VAR_3 < 0, "pm_runtime_get_sync() failed: %d\n", VAR_3);
 } else {
  FUNC_7(VAR_2);
 }






 FUNC_5(VAR_2);
}
