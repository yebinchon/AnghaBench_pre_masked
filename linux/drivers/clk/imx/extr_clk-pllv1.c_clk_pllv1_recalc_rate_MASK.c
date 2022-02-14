
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv1 {int base; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned long long,unsigned int) ;
 scalar_t__ FUNC_2 (struct clk_pllv1*) ;
 scalar_t__ FUNC_3 (struct clk_pllv1*,unsigned int) ;
 int FUNC_4 (int ) ;
 struct clk_pllv1* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk_hw *VAR_2,
  unsigned long VAR_3)
{
 struct clk_pllv1 *VAR_4 = FUNC_5(VAR_2);
 unsigned long long VAR_5;
 int VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 unsigned long VAR_12;

 VAR_11 = FUNC_4(VAR_4->base);
 VAR_7 = (VAR_11 >> 10) & 0xf;
 VAR_8 = VAR_11 & 0x3ff;
 VAR_9 = (VAR_11 >> 16) & 0x3ff;
 VAR_10 = (VAR_11 >> 26) & 0xf;

 VAR_7 = VAR_7 <= 5 ? 5 : VAR_7;

 VAR_6 = VAR_8;






 if (FUNC_3(VAR_4, VAR_8)) {
  if (FUNC_2(VAR_4))
   VAR_6 = VAR_8 & VAR_1;
  else
   VAR_6 = FUNC_0(VAR_0) - VAR_8;
 }

 VAR_12 = VAR_3 * 2;
 VAR_12 /= VAR_10 + 1;

 VAR_5 = (unsigned long long)VAR_12 * VAR_6;

 FUNC_1(VAR_5, VAR_9 + 1);

 if (FUNC_3(VAR_4, VAR_8))
  VAR_5 = (VAR_12 * VAR_7) - VAR_5;
 else
  VAR_5 = (VAR_12 * VAR_7) + VAR_5;

 return VAR_5;
}
