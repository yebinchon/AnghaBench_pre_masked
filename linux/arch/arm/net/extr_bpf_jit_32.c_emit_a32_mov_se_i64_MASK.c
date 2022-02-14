
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const*,int,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_1(const bool VAR_0, const s8 VAR_1[],
           const u32 VAR_2, struct jit_ctx *VAR_3) {
 u64 VAR_4 = VAR_2;

 if (VAR_0 && (VAR_2 & (1<<31)))
  VAR_4 |= 0xffffffff00000000ULL;
 FUNC_0(VAR_1, VAR_4, VAR_3);
}
