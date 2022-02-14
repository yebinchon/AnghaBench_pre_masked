
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {struct clk* clk; struct clk_init_data* init; } ;
struct pl111_drm_dev_private {struct clk* clk; TYPE_1__* variant; int tim2_lock; struct clk_hw clk_div; } ;
struct drm_device {int dev; struct pl111_drm_dev_private* dev_private; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int flags; int * ops; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {scalar_t__ broken_clockdivider; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 char* FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,char*) ;
 struct clk* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct clk_hw*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct drm_device *VAR_2)
{
 struct pl111_drm_dev_private *VAR_3 = VAR_2->dev_private;
 struct clk *VAR_4 = FUNC_4(VAR_2->dev, "clcdclk");
 struct clk_hw *VAR_5 = &VAR_3->clk_div;
 const char *VAR_6;
 struct clk_init_data VAR_7 = {
  .name = "pl111_div",
  .ops = &VAR_1,
  .parent_names = &VAR_6,
  .num_parents = 1,
  .flags = VAR_0,
 };
 int VAR_8;

 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_2->dev, "CLCD: unable to get clcdclk.\n");
  return FUNC_1(VAR_4);
 }

 FUNC_6(&VAR_3->tim2_lock);


 if (VAR_3->variant->broken_clockdivider) {
  VAR_3->clk = VAR_4;
  return 0;
 }
 VAR_6 = FUNC_2(VAR_4);
 VAR_5->init = &VAR_7;

 VAR_8 = FUNC_5(VAR_2->dev, VAR_5);

 VAR_3->clk = VAR_5->clk;
 return VAR_8;
}
