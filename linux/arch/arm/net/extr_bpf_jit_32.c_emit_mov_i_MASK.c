
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct jit_ctx {int dummy; } ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int ,struct jit_ctx*) ;
 int FUNC_2 (int const,int ,struct jit_ctx*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(const u8 VAR_0, u32 VAR_1, struct jit_ctx *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1);

 if (VAR_3 >= 0)
  FUNC_1(FUNC_0(VAR_0, VAR_3), VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);
}
