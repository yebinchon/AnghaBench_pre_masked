
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_cf_events {unsigned int txn_flags; scalar_t__ tx_state; scalar_t__ state; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct pmu*) ;
 struct cpu_cf_events* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_2)
{
 unsigned int VAR_3;
 struct cpu_cf_events *VAR_4 = FUNC_3(&VAR_1);

 FUNC_1(!VAR_4->txn_flags);

 VAR_3 = VAR_4->txn_flags;
 VAR_4->txn_flags = 0;
 if (VAR_3 & ~VAR_0)
  return;

 FUNC_0(VAR_4->tx_state != VAR_4->state);

 FUNC_2(VAR_2);
}
