
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct cpu_hw_events {int txn_flags; int n_events; int assign; } ;
struct TYPE_2__ {int (* schedule_events ) (struct cpu_hw_events*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct pmu*) ;
 int FUNC_3 (struct cpu_hw_events*,int,int*) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct pmu *VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_4(&VAR_3);
 int VAR_7[VAR_2];
 int VAR_8, VAR_9;

 FUNC_0(!VAR_6->txn_flags);

 if (VAR_6->txn_flags & ~VAR_1) {
  VAR_6->txn_flags = 0;
  return 0;
 }

 VAR_8 = VAR_6->n_events;

 if (!FUNC_5())
  return -VAR_0;

 VAR_9 = VAR_4.schedule_events(VAR_6, VAR_8, VAR_7);
 if (VAR_9)
  return VAR_9;





 FUNC_1(VAR_6->assign, VAR_7, VAR_8*sizeof(int));

 VAR_6->txn_flags = 0;
 FUNC_2(VAR_5);
 return 0;
}
