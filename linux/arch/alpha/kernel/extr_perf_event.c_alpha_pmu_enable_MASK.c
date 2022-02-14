
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_hw_events {int enabled; scalar_t__ n_events; int idx_mask; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_2(&VAR_4);

 if (VAR_6->enabled)
  return;

 VAR_6->enabled = 1;
 FUNC_0();

 if (VAR_6->n_events > 0) {

  FUNC_1(VAR_6);


  FUNC_3(VAR_3, VAR_0);
  FUNC_3(VAR_1, VAR_6->config);
  FUNC_3(VAR_2, VAR_6->idx_mask);
 }
}
