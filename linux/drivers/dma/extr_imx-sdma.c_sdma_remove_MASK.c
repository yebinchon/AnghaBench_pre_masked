
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_engine {struct sdma_channel* channel; int clk_ipg; int clk_ahb; int script_addrs; int dma_device; int irq; } ;
struct TYPE_2__ {int chan; int task; } ;
struct sdma_channel {TYPE_1__ vc; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,struct sdma_engine*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct sdma_engine* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct sdma_engine *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_1(&VAR_1->dev, VAR_2->irq, VAR_2);
 FUNC_2(&VAR_2->dma_device);
 FUNC_3(VAR_2->script_addrs);
 FUNC_0(VAR_2->clk_ahb);
 FUNC_0(VAR_2->clk_ipg);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct sdma_channel *VAR_4 = &VAR_2->channel[VAR_3];

  FUNC_7(&VAR_4->vc.task);
  FUNC_6(&VAR_4->vc.chan);
 }

 FUNC_5(VAR_1, ((void*)0));
 return 0;
}
