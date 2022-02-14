
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct TYPE_9__ {int lock; } ;
struct hsu_dma_chan {TYPE_4__ vchan; TYPE_3__* desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_10__ {size_t length; } ;
struct TYPE_6__ {scalar_t__ cookie; } ;
struct TYPE_7__ {TYPE_1__ tx; } ;
struct TYPE_8__ {int status; TYPE_2__ vdesc; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,size_t) ;
 size_t FUNC_2 (struct hsu_dma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct hsu_dma_chan* FUNC_5 (struct dma_chan*) ;
 TYPE_5__* FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_7 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_1,
 dma_cookie_t VAR_2, struct dma_tx_state *VAR_3)
{
 struct hsu_dma_chan *VAR_4 = FUNC_5(VAR_1);
 struct virt_dma_desc *VAR_5;
 enum dma_status VAR_6;
 size_t VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == VAR_0)
  return VAR_6;

 FUNC_3(&VAR_4->vchan.lock, VAR_8);
 VAR_5 = FUNC_7(&VAR_4->vchan, VAR_2);
 if (VAR_4->desc && VAR_2 == VAR_4->desc->vdesc.tx.cookie) {
  VAR_7 = FUNC_2(VAR_4);
  FUNC_1(VAR_3, VAR_7);
  VAR_6 = VAR_4->desc->status;
 } else if (VAR_5) {
  VAR_7 = FUNC_6(VAR_5)->length;
  FUNC_1(VAR_3, VAR_7);
 }
 FUNC_4(&VAR_4->vchan.lock, VAR_8);

 return VAR_6;
}
