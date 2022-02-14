
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int tasklet; } ;
struct intel_engine_cs {TYPE_1__ execlists; } ;
struct TYPE_4__ {int timer; } ;


 struct intel_engine_cs* VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct intel_engine_cs* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct intel_engine_cs *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.timer);


 FUNC_1(&VAR_3->execlists.tasklet);
}
