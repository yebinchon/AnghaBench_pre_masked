
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(int VAR_2, struct perf_event *VAR_3)
{
 struct arch_hw_breakpoint *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_3(VAR_4->address, VAR_0 + VAR_2);
 VAR_5 = FUNC_1(VAR_1);
 FUNC_2(VAR_5 | (1 << VAR_2), VAR_1);
}
