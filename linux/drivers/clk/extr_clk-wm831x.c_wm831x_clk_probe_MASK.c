
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * init; } ;
struct wm831x_clk {int xtal_ena; TYPE_3__ clkout_hw; TYPE_3__ fll_hw; TYPE_3__ xtal_hw; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm831x* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 struct wm831x_clk* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct wm831x_clk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct wm831x*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct wm831x *VAR_8 = FUNC_1(VAR_7->dev.parent);
 struct wm831x_clk *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->wm831x = VAR_8;


 VAR_10 = FUNC_5(VAR_8, VAR_2);
 if (VAR_10 < 0) {
  FUNC_0(VAR_8->dev, "Unable to read CLOCK_CONTROL_2: %d\n",
   VAR_10);
  return VAR_10;
 }
 VAR_9->xtal_ena = VAR_10 & VAR_3;

 VAR_9->xtal_hw.init = &VAR_6;
 VAR_10 = FUNC_2(&VAR_7->dev, &VAR_9->xtal_hw);
 if (VAR_10)
  return VAR_10;

 VAR_9->fll_hw.init = &VAR_5;
 VAR_10 = FUNC_2(&VAR_7->dev, &VAR_9->fll_hw);
 if (VAR_10)
  return VAR_10;

 VAR_9->clkout_hw.init = &VAR_4;
 VAR_10 = FUNC_2(&VAR_7->dev, &VAR_9->clkout_hw);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_7, VAR_9);

 return 0;
}
