
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int pmu_lock; } ;
struct nds32_pmu {struct pmu_hw_events* (* get_hw_events ) () ;} ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct pmu_hw_events* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct nds32_pmu *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 struct pmu_hw_events *VAR_6 = VAR_3->get_hw_events();

 FUNC_2(&VAR_6->pmu_lock, VAR_4);


 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= ~(VAR_1[0] | VAR_1[1] | VAR_1[2]);
 VAR_5 &= ~(VAR_2[0] | VAR_2[1] | VAR_2[2]);
 FUNC_1(VAR_5, VAR_0);

 FUNC_3(&VAR_6->pmu_lock, VAR_4);
}
