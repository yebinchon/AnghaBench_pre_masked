
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vbase; } ;
struct imx6_cpu_pm_info {TYPE_1__ l2_base; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1)
{
 if (!&FUNC_2) {
  FUNC_0();
 } else {




  FUNC_3();

  if (!((struct imx6_cpu_pm_info *)
   VAR_0)->l2_base.vbase)
   FUNC_1();
  FUNC_2(VAR_0);
 }

 return 0;
}
