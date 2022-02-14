
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct palmas_clock_info {TYPE_1__* clk_desc; int dev; int palmas; scalar_t__ ext_control_pin; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int control_reg; int enable_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 struct palmas_clock_info* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct palmas_clock_info *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;





 if (VAR_2->ext_control_pin)
  return;

 VAR_3 = FUNC_1(VAR_2->palmas, VAR_0,
     VAR_2->clk_desc->control_reg,
     VAR_2->clk_desc->enable_mask, 0);
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "Reg 0x%02x update failed, %d\n",
   VAR_2->clk_desc->control_reg, VAR_3);
}
