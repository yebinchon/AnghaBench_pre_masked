
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hp_sdc_irqhook ;
struct TYPE_2__ {int im; int set_im; int task; int hook_lock; int * hil; int * cooked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(hp_sdc_irqhook *VAR_4)
{
 FUNC_1(&VAR_3.hook_lock);
 if ((VAR_4 != VAR_3.cooked) ||
     (VAR_3.cooked == ((void*)0))) {
  FUNC_2(&VAR_3.hook_lock);
  return -VAR_0;
 }

 VAR_3.cooked = ((void*)0);

 if(VAR_3.hil == ((void*)0)) {
  VAR_3.im |= (VAR_1 | VAR_2);
  VAR_3.set_im = 1;
 }
 FUNC_2(&VAR_3.hook_lock);
 FUNC_0(&VAR_3.task);

 return 0;
}
