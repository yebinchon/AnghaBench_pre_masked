
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_hw_breakpoint {scalar_t__ address; scalar_t__ type; scalar_t__ len; } ;



__attribute__((used)) static inline bool FUNC_0(struct arch_hw_breakpoint *VAR_0,
         struct arch_hw_breakpoint *VAR_1)
{
 if (VAR_0->address != VAR_1->address)
  return 0;
 if (VAR_0->type != VAR_1->type)
  return 0;
 if (VAR_0->len != VAR_1->len)
  return 0;
 return 1;
}
