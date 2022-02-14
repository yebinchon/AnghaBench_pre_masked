
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct perf_branch_entry {int mispred; int predicted; int in_tx; int abort; int cycles; scalar_t__ reserved; int to; int from; } ;
struct pebs_lbr {TYPE_2__* lbr; } ;
struct TYPE_4__ {int nr; } ;
struct cpu_hw_events {struct perf_branch_entry* lbr_entries; TYPE_1__ lbr_stack; } ;
struct TYPE_6__ {int lbr_nr; } ;
struct TYPE_5__ {int info; int to; int from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 TYPE_3__ VAR_5 ;

void FUNC_2(struct pebs_lbr *VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_1(&VAR_4);
 int VAR_8;

 VAR_7->lbr_stack.nr = VAR_5.lbr_nr;
 for (VAR_8 = 0; VAR_8 < VAR_5.lbr_nr; VAR_8++) {
  u64 VAR_9 = VAR_6->lbr[VAR_8].info;
  struct perf_branch_entry *VAR_10 = &VAR_7->lbr_entries[VAR_8];

  VAR_10->from = VAR_6->lbr[VAR_8].from;
  VAR_10->to = VAR_6->lbr[VAR_8].to;
  VAR_10->mispred = !!(VAR_9 & VAR_3);
  VAR_10->predicted = !(VAR_9 & VAR_3);
  VAR_10->in_tx = !!(VAR_9 & VAR_2);
  VAR_10->abort = !!(VAR_9 & VAR_0);
  VAR_10->cycles = VAR_9 & VAR_1;
  VAR_10->reserved = 0;
 }
 FUNC_0(VAR_7);
}
