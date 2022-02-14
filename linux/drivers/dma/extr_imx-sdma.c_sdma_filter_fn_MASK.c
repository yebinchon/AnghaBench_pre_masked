
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_dma_data {int dummy; } ;
struct sdma_channel {struct imx_dma_data data; } ;
struct dma_chan {struct imx_dma_data* private; } ;


 int FUNC_0 (struct dma_chan*) ;
 struct sdma_channel* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_2(struct dma_chan *VAR_0, void *VAR_1)
{
 struct sdma_channel *VAR_2 = FUNC_1(VAR_0);
 struct imx_dma_data *VAR_3 = VAR_1;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_2->data = *VAR_3;
 VAR_0->private = &VAR_2->data;

 return 1;
}
