
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct clk_si5341 {int freq_vco; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int*,unsigned int*) ;
 struct clk_si5341* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct clk_si5341 *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;
 u64 VAR_5;
 u64 VAR_6;
 u32 VAR_7;
 unsigned int VAR_8;


 VAR_4 = FUNC_1(VAR_3->regmap, VAR_0,
    &VAR_6, &VAR_7);
 if (VAR_4 < 0)
  return 0;

 if (!VAR_6 || !VAR_7)
  return 0;







 VAR_8 = 0;
 VAR_5 = VAR_6;
 while (VAR_5 & 0xffff00000000ULL) {
  ++VAR_8;
  VAR_5 >>= 1;
 }
 VAR_5 *= VAR_2;
 FUNC_0(VAR_5, (VAR_7 >> VAR_8));


 VAR_3->freq_vco = VAR_5;


 FUNC_0(VAR_5, 1000);

 return (unsigned long)VAR_5;
}
