
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {int nr; } ;
struct cpu_hw_events {TYPE_2__ lbr_stack; TYPE_1__* lbr_entries; } ;
struct TYPE_6__ {int lbr_nr; scalar_t__ lbr_from; } ;
struct TYPE_4__ {scalar_t__ reserved; scalar_t__ type; scalar_t__ cycles; scalar_t__ abort; scalar_t__ in_tx; scalar_t__ predicted; scalar_t__ mispred; int to; int from; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct cpu_hw_events *VAR_1)
{
 unsigned long VAR_2 = VAR_0.lbr_nr - 1;
 u64 VAR_3 = FUNC_0();
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0.lbr_nr; VAR_4++) {
  unsigned long VAR_5 = (VAR_3 - VAR_4) & VAR_2;
  union {
   struct {
    u32 from;
    u32 to;
   };
   u64 lbr;
  } VAR_6;

  FUNC_1(VAR_0.lbr_from + VAR_5, VAR_6.lbr);

  VAR_1->lbr_entries[VAR_4].from = VAR_6.from;
  VAR_1->lbr_entries[VAR_4].to = VAR_6.to;
  VAR_1->lbr_entries[VAR_4].mispred = 0;
  VAR_1->lbr_entries[VAR_4].predicted = 0;
  VAR_1->lbr_entries[VAR_4].in_tx = 0;
  VAR_1->lbr_entries[VAR_4].abort = 0;
  VAR_1->lbr_entries[VAR_4].cycles = 0;
  VAR_1->lbr_entries[VAR_4].type = 0;
  VAR_1->lbr_entries[VAR_4].reserved = 0;
 }
 VAR_1->lbr_stack.nr = VAR_4;
}
