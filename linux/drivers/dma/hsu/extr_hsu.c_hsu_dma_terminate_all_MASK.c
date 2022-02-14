
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct hsu_dma_chan {TYPE_2__ vchan; TYPE_1__* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int vdesc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hsu_dma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct hsu_dma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct hsu_dma_chan *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_2->vchan.lock, VAR_3);

 FUNC_2(VAR_2);
 if (VAR_2->desc) {
  FUNC_1(&VAR_2->desc->vdesc);
  VAR_2->desc = ((void*)0);
 }

 FUNC_7(&VAR_2->vchan, &VAR_0);
 FUNC_4(&VAR_2->vchan.lock, VAR_3);
 FUNC_6(&VAR_2->vchan, &VAR_0);

 return 0;
}
