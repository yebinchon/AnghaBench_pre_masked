
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_user_features2; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

int FUNC_1(void)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(&VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_1->cpu_user_features2 |= VAR_0;

 return 0;
}
