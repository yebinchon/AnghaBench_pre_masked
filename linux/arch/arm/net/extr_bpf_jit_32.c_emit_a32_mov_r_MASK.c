
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int FUNC_0 (int const,int const,struct jit_ctx*) ;
 int FUNC_1 (int const,int ,struct jit_ctx*) ;
 int ** VAR_1 ;

__attribute__((used)) static inline void FUNC_2(const s8 VAR_2, const s8 VAR_3,
      struct jit_ctx *VAR_4) {
 const s8 *VAR_5 = VAR_1[VAR_0];
 s8 VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_5[0], VAR_4);
 FUNC_1(VAR_2, VAR_6, VAR_4);
}
