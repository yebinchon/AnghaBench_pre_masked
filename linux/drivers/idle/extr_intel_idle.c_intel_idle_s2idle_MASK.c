
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {TYPE_1__* states; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct cpuidle_device *VAR_0,
        struct cpuidle_driver *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 1;
 unsigned long VAR_4 = FUNC_0(VAR_1->states[VAR_2].flags);

 FUNC_1(VAR_4, VAR_3);
}
