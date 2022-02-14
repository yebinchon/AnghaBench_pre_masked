
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {size_t idx; int * image; } ;



__attribute__((used)) static void FUNC_0(const u32 VAR_0, struct jit_ctx *VAR_1)
{
 if (VAR_1->image != ((void*)0))
  VAR_1->image[VAR_1->idx] = VAR_0;

 VAR_1->idx++;
}
