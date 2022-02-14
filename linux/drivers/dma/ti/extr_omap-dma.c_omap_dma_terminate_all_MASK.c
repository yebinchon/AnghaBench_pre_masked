
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct omap_chan {int paused; int cyclic; TYPE_2__ vc; TYPE_1__* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct omap_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct omap_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct omap_chan *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_2(&VAR_2->vc.lock, VAR_3);






 if (VAR_2->desc) {
  FUNC_7(&VAR_2->desc->vd);
  VAR_2->desc = ((void*)0);

  if (!VAR_2->paused)
   FUNC_1(VAR_2);
 }

 VAR_2->cyclic = 0;
 VAR_2->paused = 0;

 FUNC_6(&VAR_2->vc, &VAR_0);
 FUNC_3(&VAR_2->vc.lock, VAR_3);
 FUNC_5(&VAR_2->vc, &VAR_0);

 return 0;
}
