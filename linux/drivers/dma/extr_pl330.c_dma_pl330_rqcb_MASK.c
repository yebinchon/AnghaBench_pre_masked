
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pl330_desc {int status; struct dma_pl330_chan* pchan; } ;
struct dma_pl330_chan {int task; int lock; } ;
typedef enum pl330_op_err { ____Placeholder_pl330_op_err } pl330_op_err ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dma_pl330_desc *VAR_1, enum pl330_op_err VAR_2)
{
 struct dma_pl330_chan *VAR_3;
 unsigned long VAR_4;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->pchan;


 if (!VAR_3)
  return;

 FUNC_0(&VAR_3->lock, VAR_4);

 VAR_1->status = VAR_0;

 FUNC_1(&VAR_3->lock, VAR_4);

 FUNC_2(&VAR_3->task);
}
