
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t size; int * mem; int dma; } ;
struct rcar_dmac_desc {TYPE_3__ hwdescs; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct rcar_dmac_chan {TYPE_2__ chan; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int * FUNC_1 (int ,size_t,int *,int ) ;
 int FUNC_2 (int ,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct rcar_dmac_chan *VAR_1,
         struct rcar_dmac_desc *VAR_2, size_t VAR_3)
{






 VAR_3 = FUNC_0(VAR_3);

 if (VAR_2->hwdescs.size == VAR_3)
  return;

 if (VAR_2->hwdescs.mem) {
  FUNC_2(VAR_1->chan.device->dev, VAR_2->hwdescs.size,
      VAR_2->hwdescs.mem, VAR_2->hwdescs.dma);
  VAR_2->hwdescs.mem = ((void*)0);
  VAR_2->hwdescs.size = 0;
 }

 if (!VAR_3)
  return;

 VAR_2->hwdescs.mem = FUNC_1(VAR_1->chan.device->dev, VAR_3,
            &VAR_2->hwdescs.dma, VAR_0);
 if (!VAR_2->hwdescs.mem)
  return;

 VAR_2->hwdescs.size = VAR_3;
}
