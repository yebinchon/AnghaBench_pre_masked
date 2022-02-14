
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct usb_dmac_chan {TYPE_1__ vc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct usb_dmac_chan* FUNC_4 (struct dma_chan*) ;
 unsigned int FUNC_5 (struct usb_dmac_chan*,int ) ;
 unsigned int FUNC_6 (struct usb_dmac_chan*,int ) ;

__attribute__((used)) static enum dma_status FUNC_7(struct dma_chan *VAR_1,
       dma_cookie_t VAR_2,
       struct dma_tx_state *VAR_3)
{
 struct usb_dmac_chan *VAR_4 = FUNC_4(VAR_1);
 enum dma_status VAR_5;
 unsigned int VAR_6 = 0;
 unsigned long VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (!VAR_3)
  return VAR_5;

 FUNC_2(&VAR_4->vc.lock, VAR_7);
 if (VAR_5 == VAR_0)
  VAR_6 = FUNC_6(VAR_4, VAR_2);
 else
  VAR_6 = FUNC_5(VAR_4, VAR_2);
 FUNC_3(&VAR_4->vc.lock, VAR_7);

 FUNC_1(VAR_3, VAR_6);

 return VAR_5;
}
