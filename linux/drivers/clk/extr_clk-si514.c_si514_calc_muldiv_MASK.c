
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u64 ;
typedef unsigned long u32 ;
struct clk_si514_muldiv {unsigned long ls_div_bits; int hs_div; unsigned long m_frac; unsigned long m_int; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct clk_si514_muldiv *VAR_6,
 unsigned long VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 if ((VAR_7 < VAR_5) || (VAR_7 > VAR_4))
  return -VAR_0;


 VAR_9 = VAR_7;
 if (VAR_7 >= (VAR_1 / VAR_3))
  VAR_6->ls_div_bits = 0;
 else {
  VAR_11 = 1;
  VAR_10 = 2 * VAR_3;
  while (VAR_10 <= (VAR_3 * 32)) {
   if ((VAR_7 * VAR_10) >= VAR_1)
    break;
   ++VAR_11;
   VAR_10 <<= 1;
  }
  VAR_6->ls_div_bits = VAR_11;
  VAR_9 = VAR_7 << VAR_11;
 }


 VAR_6->hs_div = FUNC_1(VAR_1 >> 1, VAR_9) << 1;


 VAR_8 = ((u64)(VAR_9 * VAR_6->hs_div) << 29) + (VAR_2 / 2);
 FUNC_2(VAR_8, VAR_2);
 VAR_6->m_frac = (u32)VAR_8 & (FUNC_0(29) - 1);
 VAR_6->m_int = (u32)(VAR_8 >> 29);

 return 0;
}
