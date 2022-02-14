
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_10__ {int lock; } ;
struct bcm2835_chan {TYPE_5__ vc; TYPE_2__* desc; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_9__ {TYPE_1__ tx; } ;
struct TYPE_8__ {TYPE_3__ vd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm2835_chan*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct bcm2835_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_2)
{
 struct bcm2835_chan *VAR_3 = FUNC_4(VAR_2);
 unsigned long VAR_4;
 FUNC_0(VAR_1);

 FUNC_2(&VAR_3->vc.lock, VAR_4);


 if (VAR_3->desc) {
  if (VAR_3->desc->vd.tx.flags & VAR_0)
   FUNC_7(&VAR_3->desc->vd);
  else
   FUNC_8(&VAR_3->desc->vd);
  VAR_3->desc = ((void*)0);
  FUNC_1(VAR_3);
 }

 FUNC_6(&VAR_3->vc, &VAR_1);
 FUNC_3(&VAR_3->vc.lock, VAR_4);
 FUNC_5(&VAR_3->vc, &VAR_1);

 return 0;
}
