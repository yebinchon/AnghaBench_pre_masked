
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int debugcause; scalar_t__ pc; } ;
struct TYPE_2__ {scalar_t__ bp_addr; int disabled; } ;
struct perf_event {TYPE_1__ attr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct perf_event*,struct pt_regs*) ;
 int FUNC_3 (int ) ;
 struct perf_event** FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;
 int VAR_10 ;
 int FUNC_6 (int ,scalar_t__) ;

int FUNC_7(struct pt_regs *VAR_11)
{
 if (VAR_11->debugcause & FUNC_0(VAR_3)) {
  int VAR_12;
  struct perf_event **VAR_13 = FUNC_4(VAR_9);

  for (VAR_12 = 0; VAR_12 < VAR_8; ++VAR_12) {
   if (VAR_13[VAR_12] && !VAR_13[VAR_12]->attr.disabled &&
       VAR_11->pc == VAR_13[VAR_12]->attr.bp_addr)
    FUNC_2(VAR_13[VAR_12], VAR_11);
  }
  return 0;
 } else if (VAR_11->debugcause & FUNC_0(VAR_2)) {
  struct perf_event **VAR_14 = FUNC_4(VAR_10);
  int VAR_15 = (VAR_11->debugcause & VAR_0) >>
   VAR_1;

  if (VAR_15 < VAR_7 && VAR_14[VAR_15]) {
   if (FUNC_5(VAR_11)) {
    FUNC_2(VAR_14[VAR_15], VAR_11);
   } else {
    FUNC_3(VAR_6);
    FUNC_6(0, VAR_5 + VAR_15);
   }
  } else {
   FUNC_1(1,
      "Wrong/unconfigured DBNUM reported in DEBUGCAUSE: %d\n",
      VAR_15);
  }
  return 0;
 }
 return -VAR_4;
}
