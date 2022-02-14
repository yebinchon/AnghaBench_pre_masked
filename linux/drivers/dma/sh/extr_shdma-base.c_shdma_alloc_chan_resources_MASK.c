
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shdma_slave {int slave_id; } ;
struct shdma_ops {struct shdma_desc* (* embedded_desc ) (int ,int) ;} ;
struct shdma_dev {int desc_size; struct shdma_ops* ops; } ;
struct TYPE_3__ {int tx_submit; } ;
struct shdma_desc {int node; int mark; TYPE_1__ async_tx; } ;
struct TYPE_4__ {int device; } ;
struct shdma_chan {int desc_num; int ld_free; TYPE_2__ dma_chan; int desc; int slave_id; int real_slave_id; } ;
struct dma_chan {struct shdma_slave* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct shdma_chan*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct shdma_desc* FUNC_5 (int ,int) ;
 struct shdma_chan* FUNC_6 (struct dma_chan*) ;
 struct shdma_dev* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_7)
{
 struct shdma_chan *VAR_8 = FUNC_6(VAR_7);
 struct shdma_dev *VAR_9 = FUNC_7(VAR_8->dma_chan.device);
 const struct shdma_ops *VAR_10 = VAR_9->ops;
 struct shdma_desc *VAR_11;
 struct shdma_slave *VAR_12 = VAR_7->private;
 int VAR_13, VAR_14;





 if (VAR_12) {

  VAR_8->real_slave_id = VAR_12->slave_id;
  VAR_13 = FUNC_4(VAR_8, 0);
  if (VAR_13 < 0)
   goto esetslave;
 } else {

  VAR_8->slave_id = -VAR_1;
 }

 VAR_8->desc = FUNC_2(VAR_4,
         VAR_9->desc_size, VAR_3);
 if (!VAR_8->desc) {
  VAR_13 = -VAR_2;
  goto edescalloc;
 }
 VAR_8->desc_num = VAR_4;

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_11 = VAR_10->embedded_desc(VAR_8->desc, VAR_14);
  FUNC_1(&VAR_11->async_tx,
          &VAR_8->dma_chan);
  VAR_11->async_tx.tx_submit = VAR_6;
  VAR_11->mark = VAR_0;

  FUNC_3(&VAR_11->node, &VAR_8->ld_free);
 }

 return VAR_4;

edescalloc:
 if (VAR_12)
esetslave:
  FUNC_0(VAR_12->slave_id, VAR_5);
 VAR_7->private = ((void*)0);
 return VAR_13;
}
