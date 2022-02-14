
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int FUNC_0 (int const,int const,struct jit_ctx*) ;
 int ** VAR_1 ;
 int FUNC_1 (int const,int const,struct jit_ctx*) ;
 scalar_t__ FUNC_2 (int const) ;

__attribute__((used)) static inline void FUNC_3(const s8 VAR_2, const u32 VAR_3,
      struct jit_ctx *VAR_4)
{
 const s8 *VAR_5 = VAR_1[VAR_0];

 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_5[1], VAR_3, VAR_4);
  FUNC_0(VAR_2, VAR_5[1], VAR_4);
 } else {
  FUNC_1(VAR_2, VAR_3, VAR_4);
 }
}
