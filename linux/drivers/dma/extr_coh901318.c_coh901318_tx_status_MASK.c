
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
struct coh901318_chan {scalar_t__ stopped; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct dma_tx_state*,int ) ;
 struct coh901318_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status
FUNC_4(struct dma_chan *VAR_3, dma_cookie_t VAR_4,
   struct dma_tx_state *VAR_5)
{
 struct coh901318_chan *VAR_6 = FUNC_3(VAR_3);
 enum dma_status VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 == VAR_0 || !VAR_5)
  return VAR_7;

 FUNC_2(VAR_5, FUNC_0(VAR_3));

 if (VAR_7 == VAR_1 && VAR_6->stopped)
  VAR_7 = VAR_2;

 return VAR_7;
}
