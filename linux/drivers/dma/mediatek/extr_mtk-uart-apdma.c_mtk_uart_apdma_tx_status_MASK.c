
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_chan {int rx_status; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,int ) ;
 struct mtk_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_3(struct dma_chan *VAR_0,
      dma_cookie_t VAR_1,
      struct dma_tx_state *VAR_2)
{
 struct mtk_chan *VAR_3 = FUNC_2(VAR_0);
 enum dma_status VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_2)
  return VAR_4;

 FUNC_1(VAR_2, VAR_3->rx_status);

 return VAR_4;
}
