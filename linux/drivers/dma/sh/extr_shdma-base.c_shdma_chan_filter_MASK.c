
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct shdma_dev {TYPE_3__* ops; TYPE_2__ dma_dev; } ;
struct shdma_chan {int real_slave_id; int slave_id; TYPE_1__* dev; } ;
struct dma_chan {TYPE_4__* device; } ;
struct TYPE_8__ {scalar_t__ device_alloc_chan_resources; } ;
struct TYPE_7__ {int (* set_slave ) (struct shdma_chan*,int,int ,int) ;} ;
struct TYPE_5__ {scalar_t__ of_node; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct shdma_chan*,int,int ,int) ;
 int FUNC_2 (struct shdma_chan*,int,int ,int) ;
 struct shdma_chan* FUNC_3 (struct dma_chan*) ;
 struct shdma_dev* FUNC_4 (TYPE_4__*) ;

bool FUNC_5(struct dma_chan *VAR_2, void *VAR_3)
{
 struct shdma_chan *VAR_4;
 struct shdma_dev *VAR_5;
 int VAR_6 = (long)VAR_3;
 int VAR_7;


 if (VAR_2->device->device_alloc_chan_resources !=
     VAR_0)
  return 0;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_4(VAR_2->device);







 if (VAR_4->dev->of_node) {
  VAR_7 = VAR_5->ops->set_slave(VAR_4, VAR_6, 0, 1);
  if (VAR_7 < 0)
   return 0;

  VAR_4->real_slave_id = VAR_4->slave_id;
  return 1;
 }

 if (VAR_6 < 0) {

  FUNC_0(VAR_5->dma_dev.dev, "invalid slave ID passed to dma_request_slave\n");
  return 1;
 }

 if (VAR_6 >= VAR_1)
  return 0;

 VAR_7 = VAR_5->ops->set_slave(VAR_4, VAR_6, 0, 1);
 if (VAR_7 < 0)
  return 0;

 VAR_4->real_slave_id = VAR_6;

 return 1;
}
