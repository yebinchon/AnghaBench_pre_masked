
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int nr; } ;
struct cpu_hw_events {int br_sel; TYPE_2__* lbr_entries; TYPE_1__ lbr_stack; } ;
struct TYPE_4__ {scalar_t__ from; int type; scalar_t__ in_tx; int abort; scalar_t__ to; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct cpu_hw_events *VAR_6)
{
 u64 VAR_7, VAR_8;
 int VAR_9 = VAR_6->br_sel;
 int VAR_10, VAR_11, VAR_12;
 bool VAR_13 = 0;


 if (((VAR_9 & VAR_0) == VAR_0) &&
     ((VAR_9 & VAR_5) != VAR_5))
  return;

 for (VAR_10 = 0; VAR_10 < VAR_6->lbr_stack.nr; VAR_10++) {

  VAR_7 = VAR_6->lbr_entries[VAR_10].from;
  VAR_8 = VAR_6->lbr_entries[VAR_10].to;

  VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_6->lbr_entries[VAR_10].abort);
  if (VAR_12 != VAR_3 && (VAR_9 & VAR_1)) {
   if (VAR_6->lbr_entries[VAR_10].in_tx)
    VAR_12 |= VAR_2;
   else
    VAR_12 |= VAR_4;
  }


  if (VAR_12 == VAR_3 || (VAR_9 & VAR_12) != VAR_12) {
   VAR_6->lbr_entries[VAR_10].from = 0;
   VAR_13 = 1;
  }

  if ((VAR_9 & VAR_5) == VAR_5)
   VAR_6->lbr_entries[VAR_10].type = FUNC_1(VAR_12);
 }

 if (!VAR_13)
  return;


 for (VAR_10 = 0; VAR_10 < VAR_6->lbr_stack.nr; ) {
  if (!VAR_6->lbr_entries[VAR_10].from) {
   VAR_11 = VAR_10;
   while (++VAR_11 < VAR_6->lbr_stack.nr)
    VAR_6->lbr_entries[VAR_11-1] = VAR_6->lbr_entries[VAR_11];
   VAR_6->lbr_stack.nr--;
   if (!VAR_6->lbr_entries[VAR_10].from)
    continue;
  }
  VAR_10++;
 }
}
