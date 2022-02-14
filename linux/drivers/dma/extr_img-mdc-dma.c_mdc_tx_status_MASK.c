
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct virt_dma_desc {int tx; } ;
struct TYPE_4__ {scalar_t__ cookie; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct mdc_tx_desc {size_t list_xfer_size; struct mdc_hw_list_desc* list; scalar_t__ list_cmds_done; int cmd_loaded; TYPE_2__ vd; } ;
struct mdc_hw_list_desc {int xfer_size; struct mdc_hw_list_desc* next_desc; } ;
struct TYPE_6__ {int lock; } ;
struct mdc_chan {TYPE_3__ vc; struct mdc_tx_desc* desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,size_t) ;
 int FUNC_2 (struct mdc_chan*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mdc_chan* FUNC_5 (struct dma_chan*) ;
 struct mdc_tx_desc* FUNC_6 (int *) ;
 struct virt_dma_desc* FUNC_7 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_9,
 dma_cookie_t VAR_10, struct dma_tx_state *VAR_11)
{
 struct mdc_chan *VAR_12 = FUNC_5(VAR_9);
 struct mdc_tx_desc *VAR_13;
 struct virt_dma_desc *VAR_14;
 unsigned long VAR_15;
 size_t VAR_16 = 0;
 int VAR_17;

 VAR_17 = FUNC_0(VAR_9, VAR_10, VAR_11);
 if (VAR_17 == VAR_0)
  return VAR_17;

 if (!VAR_11)
  return VAR_17;

 FUNC_3(&VAR_12->vc.lock, VAR_15);
 VAR_14 = FUNC_7(&VAR_12->vc, VAR_10);
 if (VAR_14) {
  VAR_13 = FUNC_6(&VAR_14->tx);
  VAR_16 = VAR_13->list_xfer_size;
 } else if (VAR_12->desc && VAR_12->desc->vd.tx.cookie == VAR_10) {
  struct mdc_hw_list_desc *VAR_18;
  u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
  int VAR_24, VAR_25;

  VAR_13 = VAR_12->desc;





  do {
   VAR_19 = FUNC_2(VAR_12, VAR_2) &
    ~VAR_7;
   VAR_23 = FUNC_2(VAR_12,
       VAR_1);
   VAR_20 = FUNC_2(VAR_12, VAR_2) &
    ~VAR_7;
  } while (VAR_19 != VAR_20);

  VAR_21 = (VAR_19 >> VAR_4) &
   VAR_3;
  VAR_22 = (VAR_19 >> VAR_6) &
   VAR_5;
  VAR_25 = (VAR_21 - VAR_22) %
   (VAR_3 + 1);





  if (!VAR_13->cmd_loaded)
   VAR_25--;
  else
   VAR_25 += VAR_13->list_cmds_done;

  VAR_16 = VAR_13->list_xfer_size;
  VAR_18 = VAR_13->list;
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
   VAR_16 -= VAR_18->xfer_size + 1;
   VAR_18 = VAR_18->next_desc;
  }
  if (VAR_18) {
   if (VAR_23 != VAR_8)
    VAR_16 -= VAR_18->xfer_size - VAR_23;
   else
    VAR_16 -= VAR_18->xfer_size + 1;
  }
 }
 FUNC_4(&VAR_12->vc.lock, VAR_15);

 FUNC_1(VAR_11, VAR_16);

 return VAR_17;
}
