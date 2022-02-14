
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_callchain_entry_ctx {int dummy; } ;
struct arc_callchain_trace {int depth; struct perf_callchain_entry_ctx* perf_stuff; } ;


 int FUNC_0 (struct perf_callchain_entry_ctx*,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_0, void *VAR_1)
{
 struct arc_callchain_trace *VAR_2 = VAR_1;
 struct perf_callchain_entry_ctx *VAR_3 = VAR_2->perf_stuff;

 FUNC_0(VAR_3, VAR_0);

 if (VAR_2->depth++ < 3)
  return 0;

 return -1;
}
