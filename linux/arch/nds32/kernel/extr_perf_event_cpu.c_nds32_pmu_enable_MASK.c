
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int used_mask; } ;
struct pmu {int dummy; } ;
struct nds32_pmu {int (* start ) (struct nds32_pmu*) ;int num_events; struct pmu_hw_events* (* get_hw_events ) () ;} ;


 int FUNC_0 (int ,int ) ;
 struct pmu_hw_events* FUNC_1 () ;
 int FUNC_2 (struct nds32_pmu*) ;
 struct nds32_pmu* FUNC_3 (struct pmu*) ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_0)
{
 struct nds32_pmu *VAR_1 = FUNC_3(VAR_0);
 struct pmu_hw_events *VAR_2 = VAR_1->get_hw_events();
 int VAR_3 = FUNC_0(VAR_2->used_mask,
        VAR_1->num_events);

 if (VAR_3)
  VAR_1->start(VAR_1);
}
