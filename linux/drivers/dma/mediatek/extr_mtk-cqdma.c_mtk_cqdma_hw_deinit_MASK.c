
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mtk_cqdma_device {size_t dma_channels; int clk; TYPE_1__** pc; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_cqdma_device*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct mtk_cqdma_device *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->dma_channels; ++VAR_2) {
  FUNC_6(&VAR_0->pc[VAR_2]->lock, VAR_1);
  if (FUNC_3(VAR_0->pc[VAR_2]) < 0)
   FUNC_2(FUNC_1(VAR_0), "cqdma hard reset timeout\n");
  FUNC_7(&VAR_0->pc[VAR_2]->lock, VAR_1);
 }

 FUNC_0(VAR_0->clk);

 FUNC_5(FUNC_1(VAR_0));
 FUNC_4(FUNC_1(VAR_0));
}
