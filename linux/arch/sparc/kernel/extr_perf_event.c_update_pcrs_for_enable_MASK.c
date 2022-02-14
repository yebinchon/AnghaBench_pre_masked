
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_hw_events {scalar_t__ n_added; } ;
struct TYPE_2__ {int num_pcrs; } ;


 int FUNC_0 (struct cpu_hw_events*) ;
 int FUNC_1 (struct cpu_hw_events*) ;
 int FUNC_2 (struct cpu_hw_events*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct cpu_hw_events *VAR_1)
{
 if (VAR_1->n_added)
  FUNC_2(VAR_1);

 if (VAR_0->num_pcrs == 1) {
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1);
 }
}
