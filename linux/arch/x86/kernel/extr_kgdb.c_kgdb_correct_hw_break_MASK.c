
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disabled; int bp_type; int bp_len; int bp_addr; } ;
struct perf_event {TYPE_1__ attr; } ;
struct arch_hw_breakpoint {int type; int len; int address; } ;
struct TYPE_4__ {int type; int len; int addr; int pev; int enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 TYPE_2__* VAR_1 ;
 struct arch_hw_breakpoint* FUNC_1 (struct perf_event*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 () ;
 struct perf_event** FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct perf_event *VAR_5;
  struct arch_hw_breakpoint *VAR_6;
  int VAR_7;
  int VAR_8 = FUNC_5();
  if (!VAR_1[VAR_4].enabled)
   continue;
  if (VAR_2) {
   FUNC_6(VAR_1[VAR_4].addr, VAR_4);
   VAR_3 |= FUNC_2(VAR_4,
      VAR_1[VAR_4].len,
      VAR_1[VAR_4].type);
   FUNC_6(VAR_3, 7);
   continue;
  }
  VAR_5 = *FUNC_4(VAR_1[VAR_4].pev, VAR_8);
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_5->attr.disabled != 1)
   continue;
  VAR_5->attr.bp_addr = VAR_1[VAR_4].addr;
  VAR_5->attr.bp_len = VAR_1[VAR_4].len;
  VAR_5->attr.bp_type = VAR_1[VAR_4].type;
  VAR_6->address = VAR_1[VAR_4].addr;
  VAR_6->len = VAR_1[VAR_4].len;
  VAR_6->type = VAR_1[VAR_4].type;
  VAR_7 = FUNC_0(VAR_5);
  if (!VAR_7)
   VAR_5->attr.disabled = 0;
 }
 if (!VAR_2)
  FUNC_3();
}
