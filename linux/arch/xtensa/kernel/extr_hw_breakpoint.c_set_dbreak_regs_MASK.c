
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {unsigned long len; int type; unsigned long address; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(int VAR_7, struct perf_event *VAR_8)
{
 struct arch_hw_breakpoint *VAR_9 = FUNC_0(VAR_8);
 unsigned long VAR_10 = VAR_1 & -VAR_9->len;

 if (VAR_9->type & VAR_5)
  VAR_10 |= VAR_0;
 if (VAR_9->type & VAR_6)
  VAR_10 |= VAR_2;

 FUNC_1(VAR_9->address, VAR_3 + VAR_7);
 FUNC_1(VAR_10, VAR_4 + VAR_7);
}
