
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ callback; } ;
struct virt_dma_desc {TYPE_1__ tx; int node; } ;
struct jz4780_dma_dev {int dummy; } ;
struct jz4780_dma_chan {int curr_hwdesc; int id; TYPE_3__* desc; scalar_t__ transfer_type; int vchan; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ type; unsigned int count; scalar_t__ desc_phys; TYPE_2__* desc; } ;
struct TYPE_5__ {scalar_t__ dtc; int dcm; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct jz4780_dma_dev*,int ) ;
 struct jz4780_dma_dev* FUNC_2 (struct jz4780_dma_chan*) ;
 int FUNC_3 (struct jz4780_dma_dev*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct jz4780_dma_dev*,int ,int ) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct jz4780_dma_chan *VAR_8)
{
 struct jz4780_dma_dev *VAR_9 = FUNC_2(VAR_8);
 struct virt_dma_desc *VAR_10;
 unsigned int VAR_11;
 dma_addr_t VAR_12;

 if (!VAR_8->desc) {
  VAR_10 = FUNC_7(&VAR_8->vchan);
  if (!VAR_10)
   return;

  FUNC_5(&VAR_10->node);

  VAR_8->desc = FUNC_6(VAR_10);
  VAR_8->curr_hwdesc = 0;

  if (VAR_8->desc->type == VAR_0 && VAR_10->tx.callback) {
   for (VAR_11 = 0; VAR_11 < VAR_8->desc->count; VAR_11++)
    VAR_8->desc->desc[VAR_11].dcm &= ~VAR_1;
  }
 } else {





  VAR_8->curr_hwdesc =
   (VAR_8->curr_hwdesc + 1) % VAR_8->desc->count;
 }


 FUNC_1(VAR_9, VAR_8->id);


 FUNC_3(VAR_9, VAR_8->id, VAR_3, 0);


 FUNC_3(VAR_9, VAR_8->id, VAR_6,
         VAR_8->transfer_type);







 FUNC_3(VAR_9, VAR_8->id, VAR_7,
    VAR_8->desc->desc[VAR_8->curr_hwdesc].dtc);


 VAR_12 = VAR_8->desc->desc_phys +
      (VAR_8->curr_hwdesc * sizeof(*VAR_8->desc->desc));
 FUNC_3(VAR_9, VAR_8->id, VAR_4, VAR_12);
 FUNC_4(VAR_9, VAR_5, FUNC_0(VAR_8->id));


 FUNC_3(VAR_9, VAR_8->id, VAR_3,
         VAR_2);
}
