
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {unsigned int* image; size_t idx; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_1, struct jit_ctx *VAR_2)
{
 if (VAR_2->image != ((void*)0)) {
  void *VAR_3 = &VAR_2->image[VAR_2->idx];
  unsigned int VAR_4;

  VAR_4 = (void *)VAR_1 - VAR_3;
  VAR_2->image[VAR_2->idx] = VAR_0 | ((VAR_4 >> 2) & 0x3fffffff);
 }
 VAR_2->idx++;
}
