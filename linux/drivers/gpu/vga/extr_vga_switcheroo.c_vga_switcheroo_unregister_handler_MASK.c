
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active; int mux_hw_lock; int * handler; scalar_t__ handler_flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_4(void)
{
 FUNC_0(&VAR_0);
 FUNC_0(&VAR_1.mux_hw_lock);
 VAR_1.handler_flags = 0;
 VAR_1.handler = ((void*)0);
 if (VAR_1.active) {
  FUNC_2("disabled\n");
  FUNC_3(&VAR_1);
  VAR_1.active = 0;
 }
 FUNC_1(&VAR_1.mux_hw_lock);
 FUNC_1(&VAR_0);
}
