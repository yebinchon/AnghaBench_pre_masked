
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct jit_ctx {unsigned int imm_count; scalar_t__* imms; int* offsets; int idx; int flags; scalar_t__* target; scalar_t__ epilogue_bytes; scalar_t__ prologue_bytes; TYPE_1__* prog; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(u32 VAR_1, struct jit_ctx *VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4;
 u16 VAR_5;


 if (VAR_2->target == ((void*)0)) {
  VAR_2->imm_count++;
  return 0;
 }

 while ((VAR_3 < VAR_2->imm_count) && VAR_2->imms[VAR_3]) {
  if (VAR_2->imms[VAR_3] == VAR_1)
   break;
  VAR_3++;
 }

 if (VAR_2->imms[VAR_3] == 0)
  VAR_2->imms[VAR_3] = VAR_1;


 VAR_4 = VAR_2->offsets[VAR_2->prog->len - 1] * 4;
 VAR_4 += VAR_2->prologue_bytes;
 VAR_4 += VAR_2->epilogue_bytes;
 VAR_4 += VAR_3 * 4;

 VAR_2->target[VAR_4 / 4] = VAR_1;


 VAR_5 = VAR_4 - (8 + VAR_2->idx * 4);

 if (VAR_5 & ~0xfff) {




  VAR_2->flags |= VAR_0;
  return 0;
 }

 return VAR_5;
}
