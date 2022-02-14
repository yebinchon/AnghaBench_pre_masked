
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct jz4780_dma_dev {int dummy; } ;
struct TYPE_5__ {int lock; } ;
struct jz4780_dma_chan {TYPE_2__ vchan; int id; TYPE_1__* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int vdesc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct jz4780_dma_dev*,int ) ;
 struct jz4780_dma_dev* FUNC_2 (struct jz4780_dma_chan*) ;
 int FUNC_3 (struct jz4780_dma_dev*,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct jz4780_dma_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dma_chan *VAR_2)
{
 struct jz4780_dma_chan *VAR_3 = FUNC_6(VAR_2);
 struct jz4780_dma_dev *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;
 FUNC_0(VAR_1);

 FUNC_4(&VAR_3->vchan.lock, VAR_5);


 FUNC_3(VAR_4, VAR_3->id, VAR_0, 0);
 if (VAR_3->desc) {
  FUNC_9(&VAR_3->desc->vdesc);
  VAR_3->desc = ((void*)0);
 }

 FUNC_1(VAR_4, VAR_3->id);

 FUNC_8(&VAR_3->vchan, &VAR_1);

 FUNC_5(&VAR_3->vchan.lock, VAR_5);

 FUNC_7(&VAR_3->vchan, &VAR_1);
 return 0;
}
