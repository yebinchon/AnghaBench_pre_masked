
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_dma_device {TYPE_1__* chan; } ;
struct of_phandle_args {int dummy; } ;
struct of_dma {struct zynqmp_dma_device* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int common; } ;


 struct dma_chan* FUNC_0 (int *) ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_0,
         struct of_dma *VAR_1)
{
 struct zynqmp_dma_device *VAR_2 = VAR_1->of_dma_data;

 return FUNC_0(&VAR_2->chan->common);
}
