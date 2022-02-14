
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mtk_cqdma_vchan {TYPE_1__* pc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int lock; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct dma_chan*) ;
 struct mtk_cqdma_vchan* FUNC_10 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_11(struct dma_chan *VAR_6)
{
 struct mtk_cqdma_vchan *VAR_7 = FUNC_10(VAR_6);
 unsigned long VAR_8;


 FUNC_3(VAR_6);

 FUNC_7(&VAR_7->pc->lock, VAR_8);


 if (FUNC_6(&VAR_7->pc->refcnt)) {

  FUNC_5(VAR_7->pc, VAR_0, VAR_1);


  if (FUNC_2(VAR_7->pc, 1) < 0)
   FUNC_1(FUNC_0(FUNC_9(VAR_6)), "cqdma flush timeout\n");


  FUNC_4(VAR_7->pc, VAR_0, VAR_1);
  FUNC_4(VAR_7->pc, VAR_4,
       VAR_5);


  FUNC_4(VAR_7->pc, VAR_2, VAR_3);
 }

 FUNC_8(&VAR_7->pc->lock, VAR_8);
}
