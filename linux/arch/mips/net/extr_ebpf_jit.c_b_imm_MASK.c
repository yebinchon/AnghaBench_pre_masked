
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {int* offsets; int idx; int gen_b_offsets; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(unsigned int VAR_1, struct jit_ctx *VAR_2)
{
 if (!VAR_2->gen_b_offsets)
  return 0;
 return (VAR_2->offsets[VAR_1] & ~VAR_0) -
  (VAR_2->idx * 4) - 4;
}
