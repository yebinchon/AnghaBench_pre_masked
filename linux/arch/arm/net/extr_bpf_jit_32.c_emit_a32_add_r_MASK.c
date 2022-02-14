
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jit_ctx {int dummy; } ;


 int FUNC_0 (int const,int const,int const) ;
 int FUNC_1 (int const,int const,int const) ;
 int FUNC_2 (int const,int const,int const) ;
 int FUNC_3 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_4(const u8 VAR_0, const u8 VAR_1,
         const bool VAR_2, const bool VAR_3,
         struct jit_ctx *VAR_4) {






 if (!VAR_3 && VAR_2)
  FUNC_3(FUNC_1(VAR_0, VAR_0, VAR_1), VAR_4);
 else if (VAR_3 && VAR_2)
  FUNC_3(FUNC_0(VAR_0, VAR_0, VAR_1), VAR_4);
 else
  FUNC_3(FUNC_2(VAR_0, VAR_0, VAR_1), VAR_4);
}
