
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* is_counter_moving ) (struct timing_generator*) ;} ;


 scalar_t__ FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct timing_generator*) ;

void FUNC_3(struct timing_generator *VAR_0)
{




 while (FUNC_0(VAR_0)) {
  if (!VAR_0->funcs->is_counter_moving(VAR_0)) {

   break;
  }
 }

 while (!FUNC_0(VAR_0)) {
  if (!VAR_0->funcs->is_counter_moving(VAR_0)) {

   break;
  }
 }
}
