
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_i2c_priv {scalar_t__ dma_direction; scalar_t__ devtype; int flags; int sg; struct dma_chan* dma_tx; struct dma_chan* dma_rx; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct rcar_i2c_priv*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rcar_i2c_priv *VAR_5)
{
 struct dma_chan *VAR_6 = VAR_5->dma_direction == VAR_0
  ? VAR_5->dma_rx : VAR_5->dma_tx;

 FUNC_0(VAR_6->device->dev, FUNC_2(&VAR_5->sg),
    FUNC_3(&VAR_5->sg), VAR_5->dma_direction);


 if (VAR_5->devtype == VAR_2 &&
     VAR_5->dma_direction == VAR_0)
  VAR_5->flags |= VAR_4;

 VAR_5->dma_direction = VAR_1;


 FUNC_1(VAR_5, VAR_3, 0);
}
