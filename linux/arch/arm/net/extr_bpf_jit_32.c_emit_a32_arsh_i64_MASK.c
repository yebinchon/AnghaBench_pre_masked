
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int const,int const,int ,int const) ;
 int FUNC_2 (int const,int const,int const,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int * FUNC_3 (int const*,int const*,struct jit_ctx*) ;
 int FUNC_4 (int const*,int const*,struct jit_ctx*) ;
 int ** VAR_5 ;
 int FUNC_5 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_6(const s8 VAR_6[],
         const u32 VAR_7, struct jit_ctx *VAR_8){
 const s8 *VAR_9 = VAR_5[VAR_3];
 const s8 *VAR_10 = VAR_5[VAR_4];
 const s8 *VAR_11;


 VAR_11 = FUNC_3(VAR_6, VAR_9, VAR_8);


 if (VAR_7 < 32) {
  FUNC_5(FUNC_1(VAR_10[1], VAR_11[1], VAR_2, VAR_7), VAR_8);
  FUNC_5(FUNC_2(VAR_11[1], VAR_10[1], VAR_11[0], VAR_0, 32 - VAR_7), VAR_8);
  FUNC_5(FUNC_1(VAR_11[0], VAR_11[0], VAR_1, VAR_7), VAR_8);
 } else if (VAR_7 == 32) {
  FUNC_5(FUNC_0(VAR_11[1], VAR_11[0]), VAR_8);
  FUNC_5(FUNC_1(VAR_11[0], VAR_11[0], VAR_1, 31), VAR_8);
 } else {
  FUNC_5(FUNC_1(VAR_11[1], VAR_11[0], VAR_1, VAR_7 - 32), VAR_8);
  FUNC_5(FUNC_1(VAR_11[0], VAR_11[0], VAR_1, 31), VAR_8);
 }

 FUNC_4(VAR_6, VAR_11, VAR_8);
}
