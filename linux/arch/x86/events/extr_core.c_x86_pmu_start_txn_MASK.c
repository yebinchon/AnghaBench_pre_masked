
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct cpu_hw_events {unsigned int txn_flags; } ;
struct TYPE_3__ {int n_txn; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct pmu*) ;
 struct cpu_hw_events* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_2, unsigned int VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_3(&VAR_1);

 FUNC_0(VAR_4->txn_flags);

 VAR_4->txn_flags = VAR_3;
 if (VAR_3 & ~VAR_0)
  return;

 FUNC_2(VAR_2);
 FUNC_1(VAR_1.n_txn, 0);
}
