
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmp_clk_mix_reg_info {int shift_mux; int width_mux; int reg_clk_sel; int reg_clk_ctrl; } ;
struct mmp_clk_mix {scalar_t__ type; struct mmp_clk_mix_reg_info reg_info; scalar_t__ lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mmp_clk_mix*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 struct mmp_clk_mix* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_6(struct clk_hw *VAR_2)
{
 struct mmp_clk_mix *VAR_3 = FUNC_5(VAR_2);
 struct mmp_clk_mix_reg_info *VAR_4 = &VAR_3->reg_info;
 unsigned long VAR_5 = 0;
 u32 VAR_6 = 0;
 u8 VAR_7, VAR_8;
 u32 VAR_9;

 if (VAR_3->lock)
  FUNC_3(VAR_3->lock, VAR_5);

 if (VAR_3->type == VAR_0
  || VAR_3->type == VAR_1)
  VAR_6 = FUNC_2(VAR_4->reg_clk_ctrl);
 else
  VAR_6 = FUNC_2(VAR_4->reg_clk_sel);

 if (VAR_3->lock)
  FUNC_4(VAR_3->lock, VAR_5);

 VAR_7 = VAR_3->reg_info.width_mux;
 VAR_8 = VAR_3->reg_info.shift_mux;

 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8);

 return FUNC_1(VAR_3, VAR_9);
}
