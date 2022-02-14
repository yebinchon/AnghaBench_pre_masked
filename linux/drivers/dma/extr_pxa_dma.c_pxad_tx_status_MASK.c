
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxad_chan {scalar_t__ bus_error; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct pxad_chan*,scalar_t__) ;
 struct pxad_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_5(struct dma_chan *VAR_1,
          dma_cookie_t VAR_2,
          struct dma_tx_state *VAR_3)
{
 struct pxad_chan *VAR_4 = FUNC_4(VAR_1);
 enum dma_status VAR_5;

 if (VAR_2 == VAR_4->bus_error)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (FUNC_2(VAR_3 && (VAR_5 != VAR_0)))
  FUNC_1(VAR_3, FUNC_3(VAR_4, VAR_2));

 return VAR_5;
}
