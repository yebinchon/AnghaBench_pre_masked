
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_si544_muldiv {int hs_div; scalar_t__ fb_div_int; scalar_t__ fb_div_frac; int ls_div_bits; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static unsigned long FUNC_2(
  const struct clk_si544_muldiv *VAR_1)
{
 u32 VAR_2 = VAR_1->hs_div * FUNC_0(VAR_1->ls_div_bits);
 u64 VAR_3;


 VAR_3 = (u64)VAR_1->fb_div_frac * VAR_0;
 VAR_3 += (VAR_0 / 2);
 VAR_3 >>= 32;


 VAR_3 += (u64)VAR_1->fb_div_int * VAR_0;


 FUNC_1(VAR_3, VAR_2);

 return VAR_3;
}
