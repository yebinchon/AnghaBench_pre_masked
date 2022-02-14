
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stacktrace_ops {int dummy; } ;
struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct stacktrace_ops const*,void*,struct pt_regs*) ;

__attribute__((used)) static inline void FUNC_1(const struct stacktrace_ops *VAR_1, void *VAR_2,
     unsigned long VAR_3, unsigned long VAR_4)
{
 if ((VAR_4 >= VAR_0) &&
     ((VAR_4 & 7) == 0))
  FUNC_0(VAR_1, VAR_2, (struct pt_regs *)VAR_4);
}
