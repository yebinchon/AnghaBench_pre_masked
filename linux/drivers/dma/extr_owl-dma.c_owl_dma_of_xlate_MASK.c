
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct owl_dma_vchan {scalar_t__ drq; } ;
struct owl_dma {scalar_t__ nr_vchans; int dma; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct of_dma {struct owl_dma* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (int *) ;
 struct owl_dma_vchan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct of_phandle_args *VAR_0,
      struct of_dma *VAR_1)
{
 struct owl_dma *VAR_2 = VAR_1->of_dma_data;
 struct owl_dma_vchan *VAR_3;
 struct dma_chan *VAR_4;
 u8 VAR_5 = VAR_0->args[0];

 if (VAR_5 > VAR_2->nr_vchans)
  return ((void*)0);

 VAR_4 = FUNC_0(&VAR_2->dma);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_4);
 VAR_3->drq = VAR_5;

 return VAR_4;
}
