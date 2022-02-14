
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venc_device {struct clk* tv_dac_clk; TYPE_1__* pdev; scalar_t__ requires_tv_dac_clk; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct venc_device *VAR_0)
{
 struct clk *VAR_1;

 if (VAR_0->requires_tv_dac_clk) {
  VAR_1 = FUNC_3(&VAR_0->pdev->dev, "tv_dac_clk");
  if (FUNC_1(VAR_1)) {
   FUNC_0("can't get tv_dac_clk\n");
   return FUNC_2(VAR_1);
  }
 } else {
  VAR_1 = ((void*)0);
 }

 VAR_0->tv_dac_clk = VAR_1;

 return 0;
}
