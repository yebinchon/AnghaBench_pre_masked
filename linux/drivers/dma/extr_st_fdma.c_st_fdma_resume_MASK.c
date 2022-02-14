
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chan_id; } ;
struct TYPE_5__ {int lock; TYPE_1__ chan; } ;
struct st_fdma_chan {TYPE_2__ vchan; scalar_t__ fdesc; TYPE_3__* fdev; } ;
struct dma_chan {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned long FUNC_1 (struct st_fdma_chan*,int ) ;
 int FUNC_2 (struct st_fdma_chan*,unsigned long,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct st_fdma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 struct st_fdma_chan *VAR_5 = FUNC_5(VAR_2);
 int VAR_6 = VAR_5->vchan.chan.chan_id;

 FUNC_0(VAR_5->fdev->dev, "resume chan:%d\n", VAR_6);

 FUNC_3(&VAR_5->vchan.lock, VAR_3);
 if (VAR_5->fdesc) {
  VAR_4 = FUNC_1(VAR_5, VAR_1);
  VAR_4 &= VAR_0;
  FUNC_2(VAR_5, VAR_4, VAR_1);
 }
 FUNC_4(&VAR_5->vchan.lock, VAR_3);

 return 0;
}
