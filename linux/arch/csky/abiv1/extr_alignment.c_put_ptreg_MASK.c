
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pt_regs {int lr; int a0; } ;



__attribute__((used)) static inline void FUNC_0(struct pt_regs *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (VAR_1 == 15)
  VAR_0->lr = VAR_2;
 else
  *((uint32_t *)&(VAR_0->a0) - 2 + VAR_1) = VAR_2;
}
