
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int * args; } ;
struct of_dma {struct bcm2835_dmadev* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct bcm2835_dmadev {int ddev; } ;
struct TYPE_2__ {int dreq; } ;


 struct dma_chan* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct of_phandle_args *VAR_0,
        struct of_dma *VAR_1)
{
 struct bcm2835_dmadev *VAR_2 = VAR_1->of_dma_data;
 struct dma_chan *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->ddev);
 if (!VAR_3)
  return ((void*)0);


 FUNC_1(VAR_3)->dreq = VAR_0->args[0];

 return VAR_3;
}
