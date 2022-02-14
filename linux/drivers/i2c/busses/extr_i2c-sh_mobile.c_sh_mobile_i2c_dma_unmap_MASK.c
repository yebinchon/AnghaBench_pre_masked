
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_i2c_data {scalar_t__ dma_direction; TYPE_2__* msg; int sg; struct dma_chan* dma_tx; struct dma_chan* dma_rx; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sh_mobile_i2c_data *VAR_2)
{
 struct dma_chan *VAR_3 = VAR_2->dma_direction == VAR_0
    ? VAR_2->dma_rx : VAR_2->dma_tx;

 FUNC_0(VAR_3->device->dev, FUNC_1(&VAR_2->sg),
    VAR_2->msg->len, VAR_2->dma_direction);

 VAR_2->dma_direction = VAR_1;
}
