
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cpu_init_idle ) (unsigned int) ;scalar_t__ cpu_suspend; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (unsigned int) ;

int FUNC_1(unsigned int VAR_2)
{
 int VAR_3 = -VAR_0;

 if (VAR_1[VAR_2] && VAR_1[VAR_2]->cpu_suspend &&
   VAR_1[VAR_2]->cpu_init_idle)
  VAR_3 = VAR_1[VAR_2]->cpu_init_idle(VAR_2);

 return VAR_3;
}
