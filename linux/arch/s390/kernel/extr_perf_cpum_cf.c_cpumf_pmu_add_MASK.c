
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int config_base; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_cf_events {int txn_flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct perf_event*) ;
 struct cpu_cf_events* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_7, int VAR_8)
{
 struct cpu_cf_events *VAR_9 = FUNC_3(&VAR_6);






 if (!(VAR_9->txn_flags & VAR_5))
  if (FUNC_4(&VAR_7->hw))
   return -VAR_0;

 FUNC_1(&VAR_9->state, VAR_7->hw.config_base);
 VAR_7->hw.state = VAR_4 | VAR_3;

 if (VAR_8 & VAR_2)
  FUNC_0(VAR_7, VAR_1);

 FUNC_2(VAR_7);

 return 0;
}
