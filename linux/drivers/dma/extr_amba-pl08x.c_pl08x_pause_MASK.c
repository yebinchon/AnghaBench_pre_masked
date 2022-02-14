
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct pl08x_dma_chan {TYPE_1__ vc; int state; int phychan; int at; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pl08x_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_1)
{
 struct pl08x_dma_chan *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;





 FUNC_1(&VAR_2->vc.lock, VAR_3);
 if (!VAR_2->phychan && !VAR_2->at) {
  FUNC_2(&VAR_2->vc.lock, VAR_3);
  return 0;
 }

 FUNC_0(VAR_2->phychan);
 VAR_2->state = VAR_0;

 FUNC_2(&VAR_2->vc.lock, VAR_3);

 return 0;
}
