
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hb_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
          unsigned long VAR_1)
{
 struct hb_clk *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->reg) & 0x1f;
 VAR_3++;
 VAR_3 *= 2;

 return VAR_1 / VAR_3;
}
