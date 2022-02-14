
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read; void* stop; int start; void* del; int add; int event_init; int commit_txn; int cancel_txn; int start_txn; int capabilities; int ** attr_groups; int task_ctx_nr; } ;
struct imc_pmu {int domain; int ** attr_groups; TYPE_1__ pmu; } ;


 size_t VAR_0 ;




 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_0(struct imc_pmu *VAR_25)
{
 VAR_25->pmu.task_ctx_nr = VAR_11;
 VAR_25->pmu.add = VAR_4;
 VAR_25->pmu.del = VAR_6;
 VAR_25->pmu.start = VAR_5;
 VAR_25->pmu.stop = VAR_6;
 VAR_25->pmu.read = VAR_7;
 VAR_25->pmu.attr_groups = VAR_25->attr_groups;
 VAR_25->pmu.capabilities = VAR_2;
 VAR_25->attr_groups[VAR_1] = &VAR_8;

 switch (VAR_25->domain) {
 case 130:
  VAR_25->pmu.event_init = VAR_10;
  VAR_25->attr_groups[VAR_0] = &VAR_9;
  break;
 case 131:
  VAR_25->pmu.event_init = VAR_3;
  VAR_25->attr_groups[VAR_0] = &VAR_9;
  break;
 case 129:
  VAR_25->pmu.event_init = VAR_14;
  VAR_25->pmu.add = VAR_12;
  VAR_25->pmu.del = VAR_13;
  VAR_25->pmu.start_txn = VAR_17;
  VAR_25->pmu.cancel_txn = VAR_15;
  VAR_25->pmu.commit_txn = VAR_16;
  break;
 case 128:
  VAR_25->pmu.event_init = VAR_20;
  VAR_25->pmu.add = VAR_18;
  VAR_25->pmu.del = VAR_19;
  VAR_25->pmu.start = VAR_22;
  VAR_25->pmu.stop = VAR_23;
  VAR_25->pmu.read = VAR_21;
  VAR_25->attr_groups[VAR_1] = &VAR_24;
 default:
  break;
 }

 return 0;
}
