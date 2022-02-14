
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jz4780_dma_chan {int desc_pool; } ;
struct dma_chan {TYPE_2__* dev; TYPE_1__* device; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 struct jz4780_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_3)
{
 struct jz4780_dma_chan *VAR_4 = FUNC_3(VAR_3);

 VAR_4->desc_pool = FUNC_2(FUNC_1(&VAR_3->dev->device),
         VAR_3->device->dev,
         VAR_1,
         VAR_2, 0);
 if (!VAR_4->desc_pool) {
  FUNC_0(&VAR_3->dev->device,
   "failed to allocate descriptor pool\n");
  return -VAR_0;
 }

 return 0;
}
