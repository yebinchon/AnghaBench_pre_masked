
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct virt_dma_desc {int dummy; } ;
struct dw_edma_desc {scalar_t__ xfer_sz; scalar_t__ alloc_sz; } ;
struct TYPE_2__ {int lock; } ;
struct dw_edma_chan {scalar_t__ status; TYPE_1__ vc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dw_edma_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct dma_tx_state*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct virt_dma_desc* FUNC_5 (TYPE_1__*,int ) ;
 struct dw_edma_desc* FUNC_6 (struct virt_dma_desc*) ;

__attribute__((used)) static enum dma_status
FUNC_7(struct dma_chan *VAR_4, dma_cookie_t VAR_5,
    struct dma_tx_state *VAR_6)
{
 struct dw_edma_chan *VAR_7 = FUNC_0(VAR_4);
 struct dw_edma_desc *VAR_8;
 struct virt_dma_desc *VAR_9;
 unsigned long VAR_10;
 enum dma_status VAR_11;
 u32 VAR_12 = 0;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_11 == VAR_0)
  return VAR_11;

 if (VAR_11 == VAR_1 && VAR_7->status == VAR_3)
  VAR_11 = VAR_2;

 if (!VAR_6)
  goto ret_residue;

 FUNC_3(&VAR_7->vc.lock, VAR_10);
 VAR_9 = FUNC_5(&VAR_7->vc, VAR_5);
 if (VAR_9) {
  VAR_8 = FUNC_6(VAR_9);
  if (VAR_8)
   VAR_12 = VAR_8->alloc_sz - VAR_8->xfer_sz;
 }
 FUNC_4(&VAR_7->vc.lock, VAR_10);

ret_residue:
 FUNC_2(VAR_6, VAR_12);

 return VAR_11;
}
