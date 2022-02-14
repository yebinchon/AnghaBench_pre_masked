
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ cr_ifs; } ;



__attribute__((used)) static inline int
FUNC_0 (struct pt_regs *VAR_0)
{
 return (long) VAR_0->cr_ifs >= 0;
}
