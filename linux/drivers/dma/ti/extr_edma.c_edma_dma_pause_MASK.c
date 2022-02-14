
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int edesc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct edma_chan*) ;
 struct edma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_1)
{
 struct edma_chan *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->edesc)
  return -VAR_0;

 FUNC_0(VAR_2);
 return 0;
}
