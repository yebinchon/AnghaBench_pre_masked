
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct TYPE_6__ {int lock; } ;
struct sprd_dma_chn {TYPE_3__ vc; TYPE_2__* cur_desc; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_5__ {struct virt_dma_desc vd; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct virt_dma_desc*) ;
 int FUNC_4 (struct sprd_dma_chn*) ;
 struct sprd_dma_chn* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct sprd_dma_chn *VAR_1 = FUNC_5(VAR_0);
 struct virt_dma_desc *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_1(&VAR_1->vc.lock, VAR_3);
 if (VAR_1->cur_desc)
  VAR_2 = &VAR_1->cur_desc->vd;

 FUNC_4(VAR_1);
 FUNC_2(&VAR_1->vc.lock, VAR_3);

 if (VAR_2)
  FUNC_3(VAR_2);

 FUNC_6(&VAR_1->vc);
 FUNC_0(VAR_0->device->dev);
}
