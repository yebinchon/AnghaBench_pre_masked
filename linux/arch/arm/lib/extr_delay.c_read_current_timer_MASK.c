
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long (* read_current_timer ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_0 () ;

int FUNC_1(unsigned long *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 *VAR_2 = VAR_1->read_current_timer();
 return 0;
}
