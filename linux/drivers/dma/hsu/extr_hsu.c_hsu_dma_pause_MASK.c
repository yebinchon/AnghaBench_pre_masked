
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct hsu_dma_chan {TYPE_1__ vchan; TYPE_2__* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hsu_dma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct hsu_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_2)
{
 struct hsu_dma_chan *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->vchan.lock, VAR_4);
 if (VAR_3->desc && VAR_3->desc->status == VAR_0) {
  FUNC_0(VAR_3);
  VAR_3->desc->status = VAR_1;
 }
 FUNC_2(&VAR_3->vchan.lock, VAR_4);

 return 0;
}
