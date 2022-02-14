
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct cpu_hw_events {int txn_flags; long n_events; long n_txn_start; int * events; TYPE_2__** event; int flags; } ;
struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int ,int ,long) ;
 int VAR_2 ;
 int FUNC_2 (struct pmu*) ;
 long FUNC_3 (struct cpu_hw_events*,int *,int ,long) ;
 int VAR_3 ;
 struct cpu_hw_events* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pmu *VAR_4)
{
 struct cpu_hw_events *VAR_5;
 long VAR_6, VAR_7;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_4(&VAR_2);
 FUNC_0(!VAR_5->txn_flags);

 if (VAR_5->txn_flags & ~VAR_1) {
  VAR_5->txn_flags = 0;
  return 0;
 }

 VAR_7 = VAR_5->n_events;
 if (FUNC_1(VAR_5->event, VAR_5->flags, 0, VAR_7))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_5, VAR_5->events, VAR_5->flags, VAR_7);
 if (VAR_6 < 0)
  return -VAR_0;

 for (VAR_6 = VAR_5->n_txn_start; VAR_6 < VAR_7; ++VAR_6)
  VAR_5->event[VAR_6]->hw.config = VAR_5->events[VAR_6];

 VAR_5->txn_flags = 0;
 FUNC_2(VAR_4);
 return 0;
}
