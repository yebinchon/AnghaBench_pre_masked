
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shdma_ops {int (* desc_setup ) (struct shdma_chan*,struct shdma_desc*,size_t,size_t,size_t*) ;} ;
struct shdma_dev {struct shdma_ops* ops; } ;
struct TYPE_4__ {unsigned long flags; int cookie; } ;
struct shdma_desc {int direction; scalar_t__ partial; TYPE_2__ async_tx; int mark; } ;
struct TYPE_3__ {int device; } ;
struct shdma_chan {int dev; TYPE_1__ dma_chan; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,size_t,size_t,size_t*,size_t*,TYPE_2__*,int ) ;
 int FUNC_1 (int ,char*) ;
 struct shdma_desc* FUNC_2 (struct shdma_chan*) ;
 int FUNC_3 (struct shdma_chan*,struct shdma_desc*,size_t,size_t,size_t*) ;
 struct shdma_dev* FUNC_4 (int ) ;

__attribute__((used)) static struct shdma_desc *FUNC_5(struct shdma_chan *VAR_6,
 unsigned long VAR_7, dma_addr_t *VAR_8, dma_addr_t *VAR_9, size_t *VAR_10,
 struct shdma_desc **VAR_11, enum dma_transfer_direction VAR_12)
{
 struct shdma_dev *VAR_13 = FUNC_4(VAR_6->dma_chan.device);
 const struct shdma_ops *VAR_14 = VAR_13->ops;
 struct shdma_desc *VAR_15;
 size_t VAR_16 = *VAR_10;

 if (!VAR_16)
  return ((void*)0);


 VAR_15 = FUNC_2(VAR_6);
 if (!VAR_15) {
  FUNC_1(VAR_6->dev, "No free link descriptor available\n");
  return ((void*)0);
 }

 VAR_14->desc_setup(VAR_6, VAR_15, *VAR_9, *VAR_8, &VAR_16);

 if (!*VAR_11) {

  VAR_15->async_tx.cookie = -VAR_4;
  *VAR_11 = VAR_15;
 } else {

  VAR_15->async_tx.cookie = -VAR_5;
 }

 FUNC_0(VAR_6->dev,
  "chaining (%zu/%zu)@%pad -> %pad with %p, cookie %d\n",
  VAR_16, *VAR_10, VAR_9, VAR_8, &VAR_15->async_tx,
  VAR_15->async_tx.cookie);

 VAR_15->mark = VAR_0;
 VAR_15->async_tx.flags = VAR_7;
 VAR_15->direction = VAR_12;
 VAR_15->partial = 0;

 *VAR_10 -= VAR_16;
 if (VAR_12 == VAR_3 || VAR_12 == VAR_2)
  *VAR_9 += VAR_16;
 if (VAR_12 == VAR_3 || VAR_12 == VAR_1)
  *VAR_8 += VAR_16;

 return VAR_15;
}
