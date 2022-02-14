
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chan_id; } ;
struct TYPE_5__ {int lock; TYPE_1__ chan; } ;
struct st_fdma_chan {TYPE_2__ vchan; TYPE_3__* fdev; scalar_t__ fdesc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_3__*,unsigned long,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct st_fdma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_1)
{
 unsigned long VAR_2;
 struct st_fdma_chan *VAR_3 = FUNC_5(VAR_1);
 int VAR_4 = VAR_3->vchan.chan.chan_id;
 unsigned long VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_3->fdev->dev, "pause chan:%d\n", VAR_4);

 FUNC_3(&VAR_3->vchan.lock, VAR_2);
 if (VAR_3->fdesc)
  FUNC_2(VAR_3->fdev, VAR_5, VAR_0);
 FUNC_4(&VAR_3->vchan.lock, VAR_2);

 return 0;
}
