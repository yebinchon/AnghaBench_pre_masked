
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {TYPE_1__* states; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cpuidle_device *VAR_1,
    struct cpuidle_driver *VAR_2,
    int VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;
 FUNC_0();

 if (VAR_2->states[VAR_3].flags & VAR_0)
  VAR_5 = 1;

 VAR_4 = FUNC_2(VAR_5);
 FUNC_1();

 if (VAR_4)
  return VAR_4;

 return VAR_3;
}
