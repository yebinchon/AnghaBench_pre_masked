
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int desc_completed; int lock; } ;
struct mtk_cqdma_vchan {int issue_synchronize; TYPE_2__ vc; int issue_completion; TYPE_1__* pc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mtk_cqdma_vchan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mtk_cqdma_vchan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dma_chan *VAR_0)
{
 struct mtk_cqdma_vchan *VAR_1 = FUNC_5(VAR_0);
 bool VAR_2 = 0;
 unsigned long VAR_3;
 unsigned long VAR_4;


 FUNC_3(&VAR_1->pc->lock, VAR_3);
 FUNC_3(&VAR_1->vc.lock, VAR_4);


 if (FUNC_2(VAR_1)) {
  VAR_1->issue_synchronize = 1;
  VAR_2 = 1;
 }

 FUNC_4(&VAR_1->vc.lock, VAR_4);
 FUNC_4(&VAR_1->pc->lock, VAR_3);


 if (VAR_2)
  FUNC_7(&VAR_1->issue_completion);


 FUNC_6(&VAR_1->vc);

 FUNC_0(!FUNC_1(&VAR_1->vc.desc_completed),
    "Desc pending still in list desc_completed\n");
}
