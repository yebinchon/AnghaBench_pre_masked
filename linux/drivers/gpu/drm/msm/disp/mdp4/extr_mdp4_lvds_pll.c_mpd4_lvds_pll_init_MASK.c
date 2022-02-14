
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * init; } ;
struct mdp4_lvds_pll {TYPE_1__ pll_hw; struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int ,TYPE_1__*) ;
 struct mdp4_lvds_pll* FUNC_4 (int ,int,int ) ;
 int VAR_2 ;

struct clk *FUNC_5(struct drm_device *VAR_3)
{
 struct mdp4_lvds_pll *VAR_4;
 struct clk *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 VAR_4->dev = VAR_3;

 VAR_4->pll_hw.init = &VAR_2;
 VAR_5 = FUNC_3(VAR_3->dev, &VAR_4->pll_hw);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  goto fail;
 }

 return VAR_5;

fail:
 return FUNC_0(VAR_6);
}
