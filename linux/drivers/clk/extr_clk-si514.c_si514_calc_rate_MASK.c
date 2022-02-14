
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long u32 ;
struct clk_si514_muldiv {int m_frac; unsigned long hs_div; int ls_div_bits; scalar_t__ m_int; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_si514_muldiv *VAR_1)
{
 u64 VAR_2 = VAR_1->m_frac | ((u64)VAR_1->m_int << 29);
 u32 VAR_3 = VAR_1->hs_div * FUNC_0(VAR_1->ls_div_bits);

 return ((u32)(((VAR_2 * VAR_0) + (VAR_0 / 2)) >> 29)) / VAR_3;
}
