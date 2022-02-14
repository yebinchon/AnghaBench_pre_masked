
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
struct axi_dma_chan {scalar_t__ is_paused; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct axi_dma_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*,int ,struct dma_tx_state*) ;

__attribute__((used)) static enum dma_status
FUNC_2(struct dma_chan *VAR_2, dma_cookie_t VAR_3,
    struct dma_tx_state *VAR_4)
{
 struct axi_dma_chan *VAR_5 = FUNC_0(VAR_2);
 enum dma_status VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_5->is_paused && VAR_6 == VAR_0)
  VAR_6 = VAR_1;

 return VAR_6;
}
