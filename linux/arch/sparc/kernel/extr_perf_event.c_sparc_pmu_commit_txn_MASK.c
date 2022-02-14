
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_hw_events {int txn_flags; int n_events; int events; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct pmu*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 struct cpu_hw_events* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pmu *VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_4(&VAR_3);
 int VAR_7;

 if (!VAR_4)
  return -VAR_1;

 FUNC_0(!VAR_6->txn_flags);

 if (VAR_6->txn_flags & ~VAR_2) {
  VAR_6->txn_flags = 0;
  return 0;
 }

 VAR_7 = VAR_6->n_events;
 if (FUNC_1(VAR_6->event, 0, VAR_7))
  return -VAR_1;
 if (FUNC_3(VAR_6->event, VAR_6->events, VAR_7))
  return -VAR_0;

 VAR_6->txn_flags = 0;
 FUNC_2(VAR_5);
 return 0;
}
