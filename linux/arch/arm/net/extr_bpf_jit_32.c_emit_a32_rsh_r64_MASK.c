
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const,int const,int ,int ) ;
 int FUNC_1 (int const,int const,int const,int ,int const) ;
 int FUNC_2 (int const,int ,int) ;
 int FUNC_3 (int const,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 (int ,int const,struct jit_ctx*) ;
 int * FUNC_5 (int const*,int const*,struct jit_ctx*) ;
 int FUNC_6 (int ,int const,struct jit_ctx*) ;
 int ** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,struct jit_ctx*) ;
 int VAR_9 ;

__attribute__((used)) static inline void FUNC_8(const s8 VAR_10[], const s8 VAR_11[],
        struct jit_ctx *VAR_12) {
 const s8 *VAR_13 = VAR_6[VAR_4];
 const s8 *VAR_14 = VAR_6[VAR_5];
 const s8 *VAR_15;
 s8 VAR_16;


 VAR_16 = FUNC_4(VAR_9, VAR_14[1], VAR_12);
 VAR_15 = FUNC_5(VAR_10, VAR_13, VAR_12);


 FUNC_7(FUNC_2(VAR_0, VAR_16, 32), VAR_12);
 FUNC_7(FUNC_3(VAR_14[0], VAR_16, 32), VAR_12);
 FUNC_7(FUNC_0(VAR_1, VAR_15[1], VAR_3, VAR_16), VAR_12);
 FUNC_7(FUNC_1(VAR_1, VAR_1, VAR_15[0], VAR_2, VAR_0), VAR_12);
 FUNC_7(FUNC_1(VAR_1, VAR_1, VAR_15[0], VAR_3, VAR_14[0]), VAR_12);
 FUNC_7(FUNC_0(VAR_0, VAR_15[0], VAR_3, VAR_16), VAR_12);

 FUNC_6(VAR_8, VAR_1, VAR_12);
 FUNC_6(VAR_7, VAR_0, VAR_12);
}
