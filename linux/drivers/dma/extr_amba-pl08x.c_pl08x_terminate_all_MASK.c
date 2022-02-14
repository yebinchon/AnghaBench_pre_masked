
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pl08x_driver_data {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct pl08x_dma_chan {TYPE_2__ vc; TYPE_1__* at; scalar_t__ phychan; int state; struct pl08x_driver_data* host; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {int vd; } ;


 int VAR_0 ;
 int FUNC_0 (struct pl08x_driver_data*,struct pl08x_dma_chan*) ;
 int FUNC_1 (struct pl08x_dma_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct pl08x_dma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_1)
{
 struct pl08x_dma_chan *VAR_2 = FUNC_4(VAR_1);
 struct pl08x_driver_data *VAR_3 = VAR_2->host;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->vc.lock, VAR_4);
 if (!VAR_2->phychan && !VAR_2->at) {
  FUNC_3(&VAR_2->vc.lock, VAR_4);
  return 0;
 }

 VAR_2->state = VAR_0;

 if (VAR_2->phychan) {




  FUNC_1(VAR_2);
 }

 if (VAR_2->at) {
  FUNC_5(&VAR_2->at->vd);
  VAR_2->at = ((void*)0);
 }

 FUNC_0(VAR_3, VAR_2);

 FUNC_3(&VAR_2->vc.lock, VAR_4);

 return 0;
}
