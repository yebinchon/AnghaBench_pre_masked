
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmp_clk_mix_reg_info {int shift_div; int width_div; int reg_clk_sel; int reg_clk_ctrl; } ;
struct mmp_clk_mix {scalar_t__ type; struct mmp_clk_mix_reg_info reg_info; scalar_t__ lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (struct mmp_clk_mix*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 struct mmp_clk_mix* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk_hw *VAR_2,
     unsigned long VAR_3)
{
 struct mmp_clk_mix *VAR_4 = FUNC_5(VAR_2);
 struct mmp_clk_mix_reg_info *VAR_5 = &VAR_4->reg_info;
 unsigned long VAR_6 = 0;
 u32 VAR_7 = 0;
 u8 VAR_8, VAR_9;
 unsigned int VAR_10;

 if (VAR_4->lock)
  FUNC_3(VAR_4->lock, VAR_6);

 if (VAR_4->type == VAR_0
  || VAR_4->type == VAR_1)
  VAR_7 = FUNC_2(VAR_5->reg_clk_ctrl);
 else
  VAR_7 = FUNC_2(VAR_5->reg_clk_sel);

 if (VAR_4->lock)
  FUNC_4(VAR_4->lock, VAR_6);

 VAR_8 = VAR_4->reg_info.width_div;
 VAR_9 = VAR_4->reg_info.shift_div;

 VAR_10 = FUNC_1(VAR_4, FUNC_0(VAR_7, VAR_8, VAR_9));

 return VAR_3 / VAR_10;
}
