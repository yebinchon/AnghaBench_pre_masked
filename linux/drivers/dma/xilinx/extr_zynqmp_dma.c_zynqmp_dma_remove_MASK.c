
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_dma_device {int dev; int chan; int common; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct zynqmp_dma_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct zynqmp_dma_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0->dev.of_node);
 FUNC_0(&VAR_1->common);

 FUNC_5(VAR_1->chan);
 FUNC_3(VAR_1->dev);
 if (!FUNC_4(VAR_1->dev))
  FUNC_6(VAR_1->dev);

 return 0;
}
