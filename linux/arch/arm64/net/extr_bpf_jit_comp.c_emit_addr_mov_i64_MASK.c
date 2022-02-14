
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct jit_ctx {int dummy; } ;


 int FUNC_0 (int,int const,int,int) ;
 int FUNC_1 (int,int const,int,int) ;
 int FUNC_2 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_3(const int VAR_0, const u64 VAR_1,
         struct jit_ctx *VAR_2)
{
 u64 VAR_3 = VAR_1;
 int VAR_4 = 0;

 FUNC_2(FUNC_1(1, VAR_0, ~VAR_3 & 0xffff, VAR_4), VAR_2);
 while (VAR_4 < 32) {
  VAR_3 >>= 16;
  VAR_4 += 16;
  FUNC_2(FUNC_0(1, VAR_0, VAR_3 & 0xffff, VAR_4), VAR_2);
 }
}
