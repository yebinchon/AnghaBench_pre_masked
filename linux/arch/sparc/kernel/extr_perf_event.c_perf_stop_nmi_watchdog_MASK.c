
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_hw_events {int * pcr; } ;
struct TYPE_4__ {int (* read_pcr ) (int) ;} ;
struct TYPE_3__ {int num_pcrs; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_2(&VAR_0);
 int VAR_5;

 FUNC_0(((void*)0));
 for (VAR_5 = 0; VAR_5 < VAR_2->num_pcrs; VAR_5++)
  VAR_4->pcr[VAR_5] = VAR_1->read_pcr(VAR_5);
}
