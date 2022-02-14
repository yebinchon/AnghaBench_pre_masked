
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hash_ctx {TYPE_3__* device; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_5__ {int sg_len; int sg; struct dma_chan* chan_mem2hash; } ;
struct TYPE_6__ {TYPE_2__ dma; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct hash_ctx *VAR_1)
{
 struct dma_chan *VAR_2;

 VAR_2 = VAR_1->device->dma.chan_mem2hash;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2->device->dev, VAR_1->device->dma.sg,
       VAR_1->device->dma.sg_len, VAR_0);
}
