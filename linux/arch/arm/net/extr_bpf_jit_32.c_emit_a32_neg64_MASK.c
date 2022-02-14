
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const,int const,int ) ;
 int FUNC_1 (int const,int const,int ) ;
 size_t VAR_0 ;
 int * FUNC_2 (int const*,int const*,struct jit_ctx*) ;
 int FUNC_3 (int const*,int const*,struct jit_ctx*) ;
 int ** VAR_1 ;
 int FUNC_4 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_5(const s8 VAR_2[],
    struct jit_ctx *VAR_3){
 const s8 *VAR_4 = VAR_1[VAR_0];
 const s8 *VAR_5;


 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_3);


 FUNC_4(FUNC_0(VAR_5[1], VAR_5[1], 0), VAR_3);
 FUNC_4(FUNC_1(VAR_5[0], VAR_5[0], 0), VAR_3);

 FUNC_3(VAR_2, VAR_5, VAR_3);
}
