
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct edma_chan {TYPE_2__ vchan; TYPE_1__* edesc; int tc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int vdesc; scalar_t__ cyclic; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct edma_chan*,int ) ;
 int FUNC_2 (struct edma_chan*) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct edma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_2)
{
 struct edma_chan *VAR_3 = FUNC_5(VAR_2);
 unsigned long VAR_4;
 FUNC_0(VAR_1);

 FUNC_3(&VAR_3->vchan.lock, VAR_4);






 if (VAR_3->edesc) {
  FUNC_2(VAR_3);

  if (!VAR_3->tc && VAR_3->edesc->cyclic)
   FUNC_1(VAR_3, VAR_0);

  FUNC_8(&VAR_3->edesc->vdesc);
  VAR_3->edesc = ((void*)0);
 }

 FUNC_7(&VAR_3->vchan, &VAR_1);
 FUNC_4(&VAR_3->vchan.lock, VAR_4);
 FUNC_6(&VAR_3->vchan, &VAR_1);

 return 0;
}
