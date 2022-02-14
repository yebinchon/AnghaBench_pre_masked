
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hb_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1,
         unsigned long VAR_2)
{
 struct hb_clk *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = (FUNC_0(VAR_3->reg) & VAR_0) ? 8 : 4;
 return VAR_2 / VAR_4;
}
