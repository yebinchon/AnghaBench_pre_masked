
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_hw_events {int idx_mask; scalar_t__ n_added; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpu_hw_events* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pmu *VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_0(&VAR_1);

 if (!VAR_3->enabled)
  return;

 VAR_3->enabled = 0;
 VAR_3->n_added = 0;

 FUNC_1(VAR_0, VAR_3->idx_mask);
}
