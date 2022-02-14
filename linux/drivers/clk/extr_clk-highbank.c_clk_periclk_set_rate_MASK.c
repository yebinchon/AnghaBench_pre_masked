
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct hb_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct hb_clk *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;

 VAR_5 = VAR_3 / VAR_2;
 if (VAR_5 & 0x1)
  return -VAR_0;

 FUNC_1(VAR_5 >> 1, VAR_4->reg);
 return 0;
}
