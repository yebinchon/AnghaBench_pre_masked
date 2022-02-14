
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {int* target; size_t idx; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, u32 VAR_1, struct jit_ctx *VAR_2)
{
 VAR_1 |= (VAR_0 << 28);
 VAR_1 = FUNC_0(VAR_1);

 if (VAR_2->target != ((void*)0))
  VAR_2->target[VAR_2->idx] = VAR_1;

 VAR_2->idx++;
}
