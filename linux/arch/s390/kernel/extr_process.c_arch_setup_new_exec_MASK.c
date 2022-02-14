
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current_pid; int lpp; } ;
struct TYPE_3__ {scalar_t__ pid; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(void)
{
 if (VAR_0.current_pid != VAR_1->pid) {
  VAR_0.current_pid = VAR_1->pid;
  if (FUNC_1(40))
   FUNC_0(&VAR_0.lpp);
 }
}
