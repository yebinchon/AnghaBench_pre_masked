
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int ,int ,struct perf_event*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct perf_event *VAR_7)
{
 struct arch_hw_breakpoint *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;

 if (VAR_8->type == VAR_4) {
  unsigned long VAR_10;


  VAR_9 = FUNC_1(FUNC_2(VAR_5), VAR_3, VAR_7);
  if (VAR_9 >= 0) {
   VAR_10 = FUNC_3(VAR_1);
   FUNC_4(VAR_10 & ~(1 << VAR_9),
          VAR_1);
  }
 } else {

  VAR_9 = FUNC_1(FUNC_2(VAR_6), VAR_2, VAR_7);
  if (VAR_9 >= 0)
   FUNC_5(0, VAR_0 + VAR_9);
 }
}
