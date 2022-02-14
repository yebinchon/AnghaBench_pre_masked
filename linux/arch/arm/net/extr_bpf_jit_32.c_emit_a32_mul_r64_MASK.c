
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const,int const,int const) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_1 (int const,int const,int const) ;
 int FUNC_2 (int const,int const,int const,int const) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_3 (int const*,int const*,struct jit_ctx*) ;
 int FUNC_4 (int ,int const,struct jit_ctx*) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_6(const s8 VAR_7[], const s8 VAR_8[],
        struct jit_ctx *VAR_9) {
 const s8 *VAR_10 = VAR_4[VAR_2];
 const s8 *VAR_11 = VAR_4[VAR_3];
 const s8 *VAR_12, *VAR_13;


 VAR_12 = FUNC_3(VAR_7, VAR_10, VAR_9);
 VAR_13 = FUNC_3(VAR_8, VAR_11, VAR_9);


 FUNC_5(FUNC_1(VAR_0, VAR_12[1], VAR_13[0]), VAR_9);
 FUNC_5(FUNC_1(VAR_1, VAR_12[0], VAR_13[1]), VAR_9);
 FUNC_5(FUNC_0(VAR_1, VAR_0, VAR_1), VAR_9);

 FUNC_5(FUNC_2(VAR_0, VAR_12[0], VAR_12[1], VAR_13[1]), VAR_9);
 FUNC_5(FUNC_0(VAR_12[0], VAR_1, VAR_12[0]), VAR_9);

 FUNC_4(VAR_6, VAR_0, VAR_9);
 FUNC_4(VAR_5, VAR_12[0], VAR_9);
}
