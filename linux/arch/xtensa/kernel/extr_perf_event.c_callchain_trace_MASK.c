
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {int pc; } ;
struct perf_callchain_entry_ctx {int dummy; } ;


 int FUNC_0 (struct perf_callchain_entry_ctx*,int ) ;

__attribute__((used)) static int FUNC_1(struct stackframe *VAR_0, void *VAR_1)
{
 struct perf_callchain_entry_ctx *VAR_2 = VAR_1;

 FUNC_0(VAR_2, VAR_0->pc);
 return 0;
}
