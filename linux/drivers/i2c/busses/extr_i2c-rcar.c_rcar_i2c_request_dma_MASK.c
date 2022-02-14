
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_i2c_priv {struct dma_chan* dma_tx; struct dma_chan* dma_rx; TYPE_1__* res; } ;
struct i2c_msg {int flags; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dma_chan*) ;
 struct device* FUNC_1 (struct rcar_i2c_priv*) ;
 struct dma_chan* FUNC_2 (struct device*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rcar_i2c_priv *VAR_5,
     struct i2c_msg *VAR_6)
{
 struct device *VAR_7 = FUNC_1(VAR_5);
 bool VAR_8;
 struct dma_chan *VAR_9;
 enum dma_transfer_direction VAR_10;

 VAR_8 = VAR_6->flags & VAR_3;

 VAR_9 = VAR_8 ? VAR_5->dma_rx : VAR_5->dma_tx;
 if (FUNC_0(VAR_9) != -VAR_2)
  return;

 VAR_10 = VAR_8 ? VAR_0 : VAR_1;
 VAR_9 = FUNC_2(VAR_7, VAR_10, VAR_5->res->start + VAR_4);

 if (VAR_8)
  VAR_5->dma_rx = VAR_9;
 else
  VAR_5->dma_tx = VAR_9;
}
