
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc_completed; int lock; } ;
struct mtk_hsdma_vchan {int issue_synchronize; TYPE_1__ vc; int desc_hw_processing; int issue_completion; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mtk_hsdma_vchan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct mtk_hsdma_vchan *VAR_1 = FUNC_4(VAR_0);
 bool VAR_2 = 0;






 FUNC_2(&VAR_1->vc.lock);
 if (!FUNC_1(&VAR_1->desc_hw_processing)) {
  VAR_1->issue_synchronize = 1;
  VAR_2 = 1;
 }
 FUNC_3(&VAR_1->vc.lock);

 if (VAR_2)
  FUNC_6(&VAR_1->issue_completion);




 FUNC_0(!FUNC_1(&VAR_1->desc_hw_processing),
    "Desc pending still in list desc_hw_processing\n");


 FUNC_5(&VAR_1->vc);

 FUNC_0(!FUNC_1(&VAR_1->vc.desc_completed),
    "Desc pending still in list desc_completed\n");
}
