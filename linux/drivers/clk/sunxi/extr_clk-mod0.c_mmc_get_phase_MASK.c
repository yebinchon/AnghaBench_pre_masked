
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mmc_phase {int offset; int reg; } ;
struct clk_hw {struct clk* clk; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct clk* FUNC_1 (struct clk*) ;
 unsigned int FUNC_2 (struct clk*) ;
 int FUNC_3 (int ) ;
 struct mmc_phase* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct clk *VAR_2, *VAR_3, *VAR_4 = VAR_1->clk;
 struct mmc_phase *VAR_5 = FUNC_4(VAR_1);
 unsigned int VAR_6, VAR_7;
 u16 VAR_8, VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_3(VAR_5->reg);
 VAR_11 = (VAR_10 >> VAR_5->offset) & 0x3;

 if (!VAR_11)
  return 180;


 VAR_2 = FUNC_1(VAR_4);
 if (!VAR_2)
  return -VAR_0;


 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_6)
  return -VAR_0;


 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;


 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return -VAR_0;


 VAR_9 = VAR_7 / VAR_6;

 VAR_8 = FUNC_0(360, VAR_9);
 return VAR_11 * VAR_8;
}
