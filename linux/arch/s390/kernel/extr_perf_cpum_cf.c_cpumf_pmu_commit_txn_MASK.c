
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pmu {int dummy; } ;
struct TYPE_2__ {int auth_ctl; } ;
struct cpu_cf_events {int txn_flags; int state; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct pmu*) ;
 struct cpu_cf_events* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pmu *VAR_4)
{
 struct cpu_cf_events *VAR_5 = FUNC_2(&VAR_3);
 u64 VAR_6;

 FUNC_0(!VAR_5->txn_flags);

 if (VAR_5->txn_flags & ~VAR_2) {
  VAR_5->txn_flags = 0;
  return 0;
 }


 VAR_6 = VAR_5->state & ~((1 << VAR_0) - 1);
 VAR_6 >>= VAR_0;
 if ((VAR_6 & VAR_5->info.auth_ctl) != VAR_6)
  return -VAR_1;

 VAR_5->txn_flags = 0;
 FUNC_1(VAR_4);
 return 0;
}
