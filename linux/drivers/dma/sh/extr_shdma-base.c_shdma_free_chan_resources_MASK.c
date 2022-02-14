
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shdma_ops {int (* halt_channel ) (struct shdma_chan*) ;} ;
struct shdma_dev {struct shdma_ops* ops; } ;
struct shdma_chan {scalar_t__ slave_id; int desc; int chan_lock; scalar_t__ desc_num; int ld_free; scalar_t__ real_slave_id; int ld_queue; } ;
struct dma_chan {int * private; int device; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct shdma_chan*,int) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct shdma_chan*) ;
 struct shdma_chan* FUNC_9 (struct dma_chan*) ;
 struct shdma_dev* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct dma_chan *VAR_2)
{
 struct shdma_chan *VAR_3 = FUNC_9(VAR_2);
 struct shdma_dev *VAR_4 = FUNC_10(VAR_2->device);
 const struct shdma_ops *VAR_5 = VAR_4->ops;
 FUNC_0(VAR_0);


 FUNC_6(&VAR_3->chan_lock);
 VAR_5->halt_channel(VAR_3);
 FUNC_7(&VAR_3->chan_lock);




 if (!FUNC_3(&VAR_3->ld_queue))
  FUNC_5(VAR_3, 1);

 if (VAR_3->slave_id >= 0) {

  FUNC_1(VAR_3->slave_id, VAR_1);
  VAR_2->private = ((void*)0);
 }

 VAR_3->real_slave_id = 0;

 FUNC_6(&VAR_3->chan_lock);

 FUNC_4(&VAR_3->ld_free, &VAR_0);
 VAR_3->desc_num = 0;

 FUNC_7(&VAR_3->chan_lock);

 FUNC_2(VAR_3->desc);
}
