
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct TYPE_5__ {int lock; } ;
struct sprd_dma_chn {TYPE_2__ vc; TYPE_1__* cur_desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {struct virt_dma_desc vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct virt_dma_desc*) ;
 int FUNC_4 (struct sprd_dma_chn*) ;
 struct sprd_dma_chn* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct sprd_dma_chn *VAR_2 = FUNC_5(VAR_1);
 struct virt_dma_desc *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 FUNC_0(VAR_0);

 FUNC_1(&VAR_2->vc.lock, VAR_4);
 if (VAR_2->cur_desc)
  VAR_3 = &VAR_2->cur_desc->vd;

 FUNC_4(VAR_2);

 FUNC_7(&VAR_2->vc, &VAR_0);
 FUNC_2(&VAR_2->vc.lock, VAR_4);

 if (VAR_3)
  FUNC_3(VAR_3);

 FUNC_6(&VAR_2->vc, &VAR_0);
 return 0;
}
