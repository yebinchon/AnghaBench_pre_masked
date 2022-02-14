
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_phandle_args {unsigned int* args; } ;
struct of_dma {struct k3_dma_dev* of_dma_data; } ;
struct k3_dma_dev {unsigned int dma_requests; TYPE_2__* chans; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {int chan; } ;
struct TYPE_4__ {TYPE_1__ vc; } ;


 struct dma_chan* FUNC_0 (int *) ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_0,
      struct of_dma *VAR_1)
{
 struct k3_dma_dev *VAR_2 = VAR_1->of_dma_data;
 unsigned int VAR_3 = VAR_0->args[0];

 if (VAR_3 >= VAR_2->dma_requests)
  return ((void*)0);

 return FUNC_0(&(VAR_2->chans[VAR_3].vc.chan));
}
