
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int const,int const,int ,int const) ;
 int FUNC_3 (int const,int const,int const,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_4 (int const*,int const*,struct jit_ctx*) ;
 int FUNC_5 (int const*,int const*,struct jit_ctx*) ;
 int ** VAR_4 ;
 int FUNC_6 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_7(const s8 VAR_5[],
        const u32 VAR_6, struct jit_ctx *VAR_7) {
 const s8 *VAR_8 = VAR_4[VAR_2];
 const s8 *VAR_9 = VAR_4[VAR_3];
 const s8 *VAR_10;


 VAR_10 = FUNC_4(VAR_5, VAR_8, VAR_7);


 if (VAR_6 < 32) {
  FUNC_6(FUNC_2(VAR_9[1], VAR_10[1], VAR_1, VAR_6), VAR_7);
  FUNC_6(FUNC_3(VAR_10[1], VAR_9[1], VAR_10[0], VAR_0, 32 - VAR_6), VAR_7);
  FUNC_6(FUNC_2(VAR_10[0], VAR_10[0], VAR_1, VAR_6), VAR_7);
 } else if (VAR_6 == 32) {
  FUNC_6(FUNC_1(VAR_10[1], VAR_10[0]), VAR_7);
  FUNC_6(FUNC_0(VAR_10[0], 0), VAR_7);
 } else {
  FUNC_6(FUNC_2(VAR_10[1], VAR_10[0], VAR_1, VAR_6 - 32), VAR_7);
  FUNC_6(FUNC_0(VAR_10[0], 0), VAR_7);
 }

 FUNC_5(VAR_5, VAR_10, VAR_7);
}
