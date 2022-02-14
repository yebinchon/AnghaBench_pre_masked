
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_9__ {int nr; } ;
struct cpu_hw_events {TYPE_4__ lbr_stack; TYPE_3__* lbr_entries; TYPE_2__* lbr_sel; } ;
typedef int s64 ;
struct TYPE_6__ {int lbr_format; } ;
struct TYPE_10__ {int lbr_nr; scalar_t__ lbr_double_abort; TYPE_1__ intel_cap; } ;
struct TYPE_8__ {int from; int to; int mispred; int predicted; int in_tx; int abort; int cycles; scalar_t__ reserved; scalar_t__ type; } ;
struct TYPE_7__ {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 () ;
 int* VAR_14 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__,int) ;
 TYPE_5__ VAR_15 ;

__attribute__((used)) static void FUNC_4(struct cpu_hw_events *VAR_16)
{
 bool VAR_17 = 0, VAR_18 = 0;
 unsigned long VAR_19 = VAR_15.lbr_nr - 1;
 int VAR_20 = VAR_15.intel_cap.lbr_format;
 u64 VAR_21 = FUNC_0();
 int VAR_22;
 int VAR_23 = 0;
 int VAR_24 = VAR_15.lbr_nr;

 if (VAR_16->lbr_sel) {
  VAR_17 = !(VAR_16->lbr_sel->config & VAR_11);
  if (VAR_16->lbr_sel->config & VAR_0)
   VAR_18 = 1;
 }

 for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++) {
  unsigned long VAR_25 = (VAR_21 - VAR_22) & VAR_19;
  u64 VAR_26, VAR_27, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;
  int VAR_32 = 0;
  u16 VAR_33 = 0;
  int VAR_34 = VAR_14[VAR_20];

  VAR_26 = FUNC_1(VAR_25);
  VAR_27 = FUNC_2(VAR_25);





  if (VAR_18 && !VAR_26)
   break;

  if (VAR_20 == VAR_2 && VAR_17) {
   u64 VAR_35;

   FUNC_3(VAR_13 + VAR_25, VAR_35);
   VAR_28 = !!(VAR_35 & VAR_10);
   VAR_29 = !VAR_28;
   VAR_30 = !!(VAR_35 & VAR_9);
   VAR_31 = !!(VAR_35 & VAR_7);
   VAR_33 = (VAR_35 & VAR_8);
  }

  if (VAR_20 == VAR_3) {
   VAR_28 = !!(VAR_26 & VAR_6);
   VAR_29 = !VAR_28;
   VAR_32 = 1;
   VAR_33 = ((VAR_27 >> 48) & VAR_8);

   VAR_27 = (u64)((((s64)VAR_27) << 16) >> 16);
  }

  if (VAR_34 & VAR_1) {
   VAR_28 = !!(VAR_26 & VAR_6);
   VAR_29 = !VAR_28;
   VAR_32 = 1;
  }
  if (VAR_34 & VAR_12) {
   VAR_30 = !!(VAR_26 & VAR_5);
   VAR_31 = !!(VAR_26 & VAR_4);
   VAR_32 = 3;
  }
  VAR_26 = (u64)((((s64)VAR_26) << VAR_32) >> VAR_32);
  if (VAR_31 && VAR_15.lbr_double_abort && VAR_23 > 0)
   VAR_23--;

  VAR_16->lbr_entries[VAR_23].from = VAR_26;
  VAR_16->lbr_entries[VAR_23].to = VAR_27;
  VAR_16->lbr_entries[VAR_23].mispred = VAR_28;
  VAR_16->lbr_entries[VAR_23].predicted = VAR_29;
  VAR_16->lbr_entries[VAR_23].in_tx = VAR_30;
  VAR_16->lbr_entries[VAR_23].abort = VAR_31;
  VAR_16->lbr_entries[VAR_23].cycles = VAR_33;
  VAR_16->lbr_entries[VAR_23].type = 0;
  VAR_16->lbr_entries[VAR_23].reserved = 0;
  VAR_23++;
 }
 VAR_16->lbr_stack.nr = VAR_23;
}
