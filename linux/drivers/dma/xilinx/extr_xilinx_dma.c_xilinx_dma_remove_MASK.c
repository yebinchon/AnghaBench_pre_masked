
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xilinx_dma_device {int nr_channels; scalar_t__* chan; int common; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct xilinx_dma_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct xilinx_dma_device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct xilinx_dma_device *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_1(VAR_0->dev.of_node);

 FUNC_0(&VAR_1->common);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_channels; VAR_2++)
  if (VAR_1->chan[VAR_2])
   FUNC_4(VAR_1->chan[VAR_2]);

 FUNC_3(VAR_1);

 return 0;
}
