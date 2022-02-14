
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int* FUNC_1 (int const*,int const*,struct jit_ctx*) ;
 int** VAR_1 ;
 int FUNC_2 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_3(const s8 VAR_2[], struct jit_ctx *VAR_3)
{
 const s8 *VAR_4 = VAR_1[VAR_0];
 const s8 *VAR_5;
 u16 VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);

 VAR_6 = (1 << VAR_5[1]) | (1 << VAR_5[0]);
 FUNC_2(FUNC_0(VAR_6), VAR_3);
}
