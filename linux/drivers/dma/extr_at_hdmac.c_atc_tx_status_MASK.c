
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
struct at_dma_chan {int lock; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_chan*,int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_4 (struct dma_tx_state*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct at_dma_chan* FUNC_7 (struct dma_chan*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static enum dma_status
FUNC_9(struct dma_chan *VAR_2,
  dma_cookie_t VAR_3,
  struct dma_tx_state *VAR_4)
{
 struct at_dma_chan *VAR_5 = FUNC_7(VAR_2);
 unsigned long VAR_6;
 enum dma_status VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_7 == VAR_0)
  return VAR_7;




 if (!VAR_4)
  return VAR_1;

 FUNC_5(&VAR_5->lock, VAR_6);


 VAR_8 = FUNC_0(VAR_2, VAR_3);

 FUNC_6(&VAR_5->lock, VAR_6);

 if (FUNC_8(VAR_8 < 0)) {
  FUNC_2(FUNC_1(VAR_2), "get residual bytes error\n");
  return VAR_1;
 } else {
  FUNC_4(VAR_4, VAR_8);
 }

 FUNC_2(FUNC_1(VAR_2), "tx_status %d: cookie = %d residue = %d\n",
   VAR_7, VAR_3, VAR_8);

 return VAR_7;
}
