
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int irq_handler_t ;
struct TYPE_4__ {int max_delta_ticks; int min_delta_ticks; void* min_delta_ns; void* max_delta_ns; int mult; int cpumask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 void* FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;

void FUNC_7(irq_handler_t VAR_6)
{
 VAR_3.cpumask = FUNC_3(FUNC_6());
 VAR_3.mult = FUNC_4(VAR_0, VAR_2, 32);
 VAR_3.max_delta_ns =
  FUNC_0(0xFFFF, &VAR_3);
 VAR_3.max_delta_ticks = 0xFFFF;
 VAR_3.min_delta_ns =
  FUNC_0(0x3f, &VAR_3);
 VAR_3.min_delta_ticks = 0x3f;
 FUNC_1(&VAR_3);

 FUNC_5(VAR_1, &VAR_5);

 FUNC_2(&VAR_4, VAR_0);
}
