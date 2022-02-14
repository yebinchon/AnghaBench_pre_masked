
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int flags; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int device; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,int ) ;
 int FUNC_2 (struct dw_dma_chan*,int ) ;
 int FUNC_3 (int ,struct dw_dma_chan*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 struct dw_dma_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status
FUNC_7(struct dma_chan *VAR_4,
       dma_cookie_t VAR_5,
       struct dma_tx_state *VAR_6)
{
 struct dw_dma_chan *VAR_7 = FUNC_6(VAR_4);
 enum dma_status VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_8 == VAR_0)
  return VAR_8;

 FUNC_3(FUNC_5(VAR_4->device), VAR_7);

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_8 == VAR_0)
  return VAR_8;

 FUNC_1(VAR_6, FUNC_2(VAR_7, VAR_5));

 if (FUNC_4(VAR_3, &VAR_7->flags) && VAR_8 == VAR_1)
  return VAR_2;

 return VAR_8;
}
