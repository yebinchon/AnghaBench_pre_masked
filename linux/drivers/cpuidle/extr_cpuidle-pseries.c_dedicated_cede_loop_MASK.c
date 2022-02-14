
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {int donate_dedicated_cpu; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct cpuidle_device *VAR_0,
    struct cpuidle_driver *VAR_1,
    int VAR_2)
{
 unsigned long VAR_3;

 FUNC_4(&VAR_3);
 FUNC_2()->donate_dedicated_cpu = 1;

 FUNC_0();
 FUNC_1();

 FUNC_5();
 FUNC_2()->donate_dedicated_cpu = 0;

 FUNC_3(VAR_3);

 return VAR_2;
}
