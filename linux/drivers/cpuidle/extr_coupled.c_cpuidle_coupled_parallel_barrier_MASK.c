
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_device {TYPE_1__* coupled; } ;
typedef int atomic_t ;
struct TYPE_2__ {int online_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct cpuidle_device *VAR_0, atomic_t *VAR_1)
{
 int VAR_2 = VAR_0->coupled->online_count;

 FUNC_5();
 FUNC_0(VAR_1);

 while (FUNC_2(VAR_1) < VAR_2)
  FUNC_4();

 if (FUNC_1(VAR_1) == VAR_2 * 2) {
  FUNC_3(VAR_1, 0);
  return;
 }

 while (FUNC_2(VAR_1) > VAR_2)
  FUNC_4();
}
