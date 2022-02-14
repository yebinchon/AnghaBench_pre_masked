
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct mdp5_mdss {int * vsync_clk; int * axi_clk; int * ahb_clk; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (struct platform_device*,char*) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mdp5_mdss *VAR_0)
{
 struct platform_device *VAR_1 =
   FUNC_2(VAR_0->base.dev->dev);

 VAR_0->ahb_clk = FUNC_1(VAR_1, "iface");
 if (FUNC_0(VAR_0->ahb_clk))
  VAR_0->ahb_clk = ((void*)0);

 VAR_0->axi_clk = FUNC_1(VAR_1, "bus");
 if (FUNC_0(VAR_0->axi_clk))
  VAR_0->axi_clk = ((void*)0);

 VAR_0->vsync_clk = FUNC_1(VAR_1, "vsync");
 if (FUNC_0(VAR_0->vsync_clk))
  VAR_0->vsync_clk = ((void*)0);

 return 0;
}
