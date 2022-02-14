
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct riscv_op {int match; int mask; } ;



__attribute__((used)) static int
FUNC_0(struct riscv_op *VAR_0, uint32_t VAR_1)
{

 if (((VAR_1 ^ VAR_0->match) & VAR_0->mask) == 0)
  return (1);

 return (0);
}
