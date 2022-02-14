
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dw_edma_chan {scalar_t__ request; scalar_t__ status; TYPE_1__ vc; scalar_t__ configured; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dw_edma_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dw_edma_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_3)
{
 struct dw_edma_chan *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->vc.lock, VAR_5);
 if (VAR_4->configured && VAR_4->request == VAR_0 &&
     VAR_4->status == VAR_2 && FUNC_4(&VAR_4->vc)) {
  VAR_4->status = VAR_1;
  FUNC_1(VAR_4);
 }
 FUNC_3(&VAR_4->vc.lock, VAR_5);
}
