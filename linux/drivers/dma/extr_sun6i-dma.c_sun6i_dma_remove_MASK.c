
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun6i_dma_dev {int rstc; int clk; int clk_mbus; int slave; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct sun6i_dma_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sun6i_dma_dev*) ;
 int FUNC_6 (struct sun6i_dma_dev*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct sun6i_dma_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_0->dev.of_node);
 FUNC_1(&VAR_1->slave);

 FUNC_6(VAR_1);

 FUNC_0(VAR_1->clk_mbus);
 FUNC_0(VAR_1->clk);
 FUNC_4(VAR_1->rstc);

 FUNC_5(VAR_1);

 return 0;
}
