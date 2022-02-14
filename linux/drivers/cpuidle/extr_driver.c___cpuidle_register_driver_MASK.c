
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int cpumask; scalar_t__ bctimer; int state_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuidle_driver*) ;
 int FUNC_1 (struct cpuidle_driver*) ;
 int FUNC_2 (struct cpuidle_driver*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_5(struct cpuidle_driver *VAR_3)
{
 int VAR_4;

 if (!VAR_3 || !VAR_3->state_count)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (FUNC_3())
  return -VAR_1;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->bctimer)
  FUNC_4(VAR_3->cpumask, VAR_2,
     (void *)1, 1);

 return 0;
}
