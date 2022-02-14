
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int desc_lock; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct fsldma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fsldma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_5(struct dma_chan *VAR_1,
     dma_cookie_t VAR_2,
     struct dma_tx_state *VAR_3)
{
 struct fsldma_chan *VAR_4 = FUNC_4(VAR_1);
 enum dma_status VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == VAR_0)
  return VAR_5;

 FUNC_2(&VAR_4->desc_lock);
 FUNC_1(VAR_4);
 FUNC_3(&VAR_4->desc_lock);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
