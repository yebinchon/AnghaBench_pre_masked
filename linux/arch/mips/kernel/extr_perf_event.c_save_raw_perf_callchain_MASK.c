
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_callchain_entry_ctx {scalar_t__ nr; scalar_t__ max_stack; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (struct perf_callchain_entry_ctx*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct perf_callchain_entry_ctx *VAR_0,
        unsigned long VAR_1)
{
 unsigned long *VAR_2 = (unsigned long *)VAR_1;
 unsigned long VAR_3;

 while (!FUNC_1(VAR_2)) {
  VAR_3 = *VAR_2++;
  if (FUNC_0(VAR_3)) {
   FUNC_2(VAR_0, VAR_3);
   if (VAR_0->nr >= VAR_0->max_stack)
    break;
  }
 }
}
