
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int FUNC_0 (int const,int const,struct jit_ctx*) ;
 int FUNC_1 (int const,int ,struct jit_ctx*) ;
 int ** VAR_1 ;
 int FUNC_2 (int ,int ,int const,int const,int const,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_3(const s8 VAR_2, const s8 VAR_3,
      struct jit_ctx *VAR_4, const bool VAR_5,
      const bool VAR_6, const u8 VAR_7) {
 const s8 *VAR_8 = VAR_1[VAR_0];
 s8 VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_3, VAR_8[1], VAR_4);
 VAR_10 = FUNC_0(VAR_2, VAR_8[0], VAR_4);

 FUNC_2(VAR_10, VAR_9, VAR_5, VAR_6, VAR_7, VAR_4);
 FUNC_1(VAR_2, VAR_10, VAR_4);
}
