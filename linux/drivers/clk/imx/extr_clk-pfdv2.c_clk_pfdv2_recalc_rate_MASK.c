
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_pfdv2 {int frac_off; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 struct clk_pfdv2* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_1,
        unsigned long VAR_2)
{
 struct clk_pfdv2 *VAR_3 = FUNC_4(VAR_1);
 u64 VAR_4 = VAR_2;
 u8 VAR_5;

 VAR_5 = (FUNC_3(VAR_3->reg) >> VAR_3->frac_off)
  & VAR_0;

 if (!VAR_5) {
  FUNC_2("clk_pfdv2: %s invalid pfd frac value 0\n",
    FUNC_0(VAR_1));
  return 0;
 }

 VAR_4 *= 18;
 FUNC_1(VAR_4, VAR_5);

 return VAR_4;
}
