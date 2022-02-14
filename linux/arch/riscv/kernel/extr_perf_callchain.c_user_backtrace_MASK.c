
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {unsigned long ra; unsigned long fp; } ;
struct perf_callchain_entry_ctx {int dummy; } ;
typedef int buftail ;


 scalar_t__ FUNC_0 (struct stackframe*,unsigned long*,int) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (struct perf_callchain_entry_ctx*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct perf_callchain_entry_ctx *VAR_0,
        unsigned long VAR_1, unsigned long VAR_2)
{
 struct stackframe VAR_3;
 unsigned long VAR_4 = 0;
 unsigned long *VAR_5 =
   (unsigned long *)(VAR_1 - sizeof(struct stackframe));


 if (!FUNC_1(VAR_5, sizeof(VAR_3)))
  return 0;
 if (FUNC_0(&VAR_3, VAR_5,
          sizeof(VAR_3)))
  return 0;

 if (VAR_2 != 0)
  VAR_4 = VAR_2;
 else
  VAR_4 = VAR_3.ra;

 VAR_1 = VAR_3.fp;
 if (VAR_4 != 0)
  FUNC_2(VAR_0, VAR_4);
 else
  return 0;

 return VAR_1;
}
