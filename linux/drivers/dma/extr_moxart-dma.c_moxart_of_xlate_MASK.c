
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int * args; } ;
struct of_dma {struct moxart_dmadev* of_dma_data; } ;
struct moxart_dmadev {int dma_slave; } ;
struct moxart_chan {int line_reqno; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (int *) ;
 struct moxart_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct of_phandle_args *VAR_0,
     struct of_dma *VAR_1)
{
 struct moxart_dmadev *VAR_2 = VAR_1->of_dma_data;
 struct dma_chan *VAR_3;
 struct moxart_chan *VAR_4;

 VAR_3 = FUNC_0(&VAR_2->dma_slave);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->line_reqno = VAR_0->args[0];

 return VAR_3;
}
