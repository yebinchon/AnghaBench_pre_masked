
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_pl330_chan {int active; int lock; int work_list; int submitted_list; TYPE_2__* dmac; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ ddma; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct dma_pl330_chan* FUNC_7 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_8(struct dma_chan *VAR_0)
{
 struct dma_pl330_chan *VAR_1 = FUNC_7(VAR_0);
 unsigned long VAR_2;

 FUNC_5(&VAR_1->lock, VAR_2);
 if (FUNC_1(&VAR_1->work_list)) {





  FUNC_0(FUNC_1(&VAR_1->submitted_list));
  VAR_1->active = 1;
  FUNC_4(VAR_1->dmac->ddma.dev);
 }
 FUNC_2(&VAR_1->submitted_list, &VAR_1->work_list);
 FUNC_6(&VAR_1->lock, VAR_2);

 FUNC_3((unsigned long)VAR_1);
}
