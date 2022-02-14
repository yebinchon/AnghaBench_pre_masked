
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gvt_irq {TYPE_1__* events; } ;
struct TYPE_2__ {int v_handler; int * info; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(
 struct intel_gvt_irq *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->events[VAR_3].info = ((void*)0);
  VAR_2->events[VAR_3].v_handler = VAR_1;
 }
}
