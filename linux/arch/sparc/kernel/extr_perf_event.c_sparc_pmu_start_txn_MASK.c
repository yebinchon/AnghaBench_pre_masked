
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_hw_events {unsigned int txn_flags; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (struct pmu*) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pmu *VAR_2, unsigned int VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_2(&VAR_1);

 FUNC_0(VAR_4->txn_flags);

 VAR_4->txn_flags = VAR_3;
 if (VAR_3 & ~VAR_0)
  return;

 FUNC_1(VAR_2);
}
