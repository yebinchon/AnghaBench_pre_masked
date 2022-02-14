
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int dummy; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsldma_chan*,int) ;
 struct fsldma_chan* FUNC_1 (struct dma_chan*) ;

int FUNC_2(struct dma_chan *VAR_1, int VAR_2)
{
 struct fsldma_chan *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, VAR_2);
 return 0;
}
