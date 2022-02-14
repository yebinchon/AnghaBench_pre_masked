
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_dma_dev {TYPE_1__* soc_data; } ;
struct jz4780_dma_desc {int status; scalar_t__ type; scalar_t__ count; int vdesc; } ;
struct TYPE_7__ {TYPE_2__* dev; } ;
struct TYPE_8__ {int lock; TYPE_3__ chan; } ;
struct jz4780_dma_chan {scalar_t__ curr_hwdesc; TYPE_4__ vchan; int id; struct jz4780_dma_desc* desc; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {unsigned int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int const VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct jz4780_dma_chan*) ;
 int FUNC_3 (struct jz4780_dma_dev*,int ,int ) ;
 int FUNC_4 (struct jz4780_dma_dev*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct jz4780_dma_dev *VAR_7,
    struct jz4780_dma_chan *VAR_8)
{
 const unsigned int VAR_9 = VAR_7->soc_data->flags;
 struct jz4780_dma_desc *VAR_10 = VAR_8->desc;
 uint32_t VAR_11;
 bool VAR_12 = 1;

 FUNC_5(&VAR_8->vchan.lock);

 VAR_11 = FUNC_3(VAR_7, VAR_8->id, VAR_5);
 FUNC_4(VAR_7, VAR_8->id, VAR_5, 0);

 if (VAR_11 & VAR_1) {
  FUNC_1(&VAR_8->vchan.chan.dev->device,
    "address error (DCS=0x%x)\n", VAR_11);
 }

 if (VAR_11 & VAR_3) {
  FUNC_1(&VAR_8->vchan.chan.dev->device,
    "channel halt (DCS=0x%x)\n", VAR_11);
 }

 if (VAR_8->desc) {
  VAR_8->desc->status = VAR_11;

  if ((VAR_11 & (VAR_1 | VAR_3)) == 0) {
   if (VAR_8->desc->type == VAR_0) {
    FUNC_8(&VAR_8->desc->vdesc);

    FUNC_2(VAR_8);
   } else if (VAR_11 & VAR_4) {
    if (!(VAR_9 & VAR_6) ||
        (VAR_8->curr_hwdesc + 1 == VAR_10->count)) {
     FUNC_7(&VAR_10->vdesc);
     VAR_8->desc = ((void*)0);
    }

    FUNC_2(VAR_8);
   } else {

    VAR_12 = 0;
    FUNC_4(VAR_7, VAR_8->id,
            VAR_5,
            VAR_2);
   }
  }
 } else {
  FUNC_0(&VAR_8->vchan.chan.dev->device,
   "channel IRQ with no active transfer\n");
 }

 FUNC_6(&VAR_8->vchan.lock);

 return VAR_12;
}
