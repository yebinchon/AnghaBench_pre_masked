
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct cpu_hw_events {int enabled; int * pcr; scalar_t__ n_events; } ;
struct TYPE_4__ {int (* write_pcr ) (int,int ) ;} ;
struct TYPE_3__ {int num_pcrs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,int ) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 int FUNC_3 (struct cpu_hw_events*) ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_2(&VAR_0);
 int VAR_5;

 if (VAR_4->enabled)
  return;

 VAR_4->enabled = 1;
 FUNC_0();

 if (VAR_4->n_events)
  FUNC_3(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_pcrs; VAR_5++)
  VAR_1->write_pcr(VAR_5, VAR_4->pcr[VAR_5]);
}
