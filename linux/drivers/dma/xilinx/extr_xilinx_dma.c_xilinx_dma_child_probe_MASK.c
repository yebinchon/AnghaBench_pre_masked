
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_device {int nr_channels; int chan_id; int dev; scalar_t__ mcdma; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct xilinx_dma_device*,struct device_node*,int ) ;

__attribute__((used)) static int FUNC_3(struct xilinx_dma_device *VAR_0,
        struct device_node *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 1;

 VAR_2 = FUNC_1(VAR_1, "dma-channels", &VAR_4);
 if ((VAR_2 < 0) && VAR_0->mcdma)
  FUNC_0(VAR_0->dev, "missing dma-channels property\n");

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_2(VAR_0, VAR_1, VAR_0->chan_id++);

 VAR_0->nr_channels += VAR_4;

 return 0;
}
