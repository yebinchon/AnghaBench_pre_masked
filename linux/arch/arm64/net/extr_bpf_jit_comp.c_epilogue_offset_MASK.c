
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int epilogue_offset; int idx; } ;



__attribute__((used)) static inline int FUNC_0(const struct jit_ctx *VAR_0)
{
 int VAR_1 = VAR_0->epilogue_offset;
 int VAR_2 = VAR_0->idx;

 return VAR_1 - VAR_2;
}
