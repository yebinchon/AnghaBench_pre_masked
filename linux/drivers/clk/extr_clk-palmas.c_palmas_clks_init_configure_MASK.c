
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clk; } ;
struct palmas_clock_info {TYPE_2__ hw; TYPE_1__* clk_desc; int dev; scalar_t__ ext_control_pin; int palmas; } ;
struct TYPE_3__ {int clk_name; int sleep_reqstr_id; int control_reg; int sleep_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct palmas_clock_info *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->palmas, VAR_0,
     VAR_1->clk_desc->control_reg,
     VAR_1->clk_desc->sleep_mask, 0);
 if (VAR_2 < 0) {
  FUNC_2(VAR_1->dev, "Reg 0x%02x update failed, %d\n",
   VAR_1->clk_desc->control_reg, VAR_2);
  return VAR_2;
 }

 if (VAR_1->ext_control_pin) {
  VAR_2 = FUNC_0(VAR_1->hw.clk);
  if (VAR_2 < 0) {
   FUNC_2(VAR_1->dev, "Clock prep failed, %d\n", VAR_2);
   return VAR_2;
  }

  VAR_2 = FUNC_3(VAR_1->palmas,
     VAR_1->clk_desc->sleep_reqstr_id,
     VAR_1->ext_control_pin, 1);
  if (VAR_2 < 0) {
   FUNC_2(VAR_1->dev, "Ext config for %s failed, %d\n",
    VAR_1->clk_desc->clk_name, VAR_2);
   FUNC_1(VAR_1->hw.clk);
   return VAR_2;
  }
 }

 return VAR_2;
}
