
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int chan_id; } ;
struct TYPE_6__ {int lock; TYPE_1__ chan; } ;
struct st_fdma_chan {TYPE_2__ vchan; int * fdesc; TYPE_4__* fdev; } ;
struct dma_chan {int dummy; } ;
struct TYPE_7__ {int dev; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_4__*,unsigned long,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct st_fdma_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_2)
{
 unsigned long VAR_3;
 FUNC_1(VAR_1);
 struct st_fdma_chan *VAR_4 = FUNC_6(VAR_2);
 int VAR_5 = VAR_4->vchan.chan.chan_id;
 unsigned long VAR_6 = FUNC_0(VAR_5);

 FUNC_2(VAR_4->fdev->dev, "terminate chan:%d\n", VAR_5);

 FUNC_4(&VAR_4->vchan.lock, VAR_3);
 FUNC_3(VAR_4->fdev, VAR_6, VAR_0);
 VAR_4->fdesc = ((void*)0);
 FUNC_8(&VAR_4->vchan, &VAR_1);
 FUNC_5(&VAR_4->vchan.lock, VAR_3);
 FUNC_7(&VAR_4->vchan, &VAR_1);

 return 0;
}
