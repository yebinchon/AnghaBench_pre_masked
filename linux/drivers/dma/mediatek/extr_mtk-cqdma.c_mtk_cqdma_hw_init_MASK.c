
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mtk_cqdma_device {size_t dma_channels; TYPE_1__** pc; int clk; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_cqdma_device*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct mtk_cqdma_device *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 u32 VAR_4;

 FUNC_6(FUNC_2(VAR_1));
 FUNC_7(FUNC_2(VAR_1));

 VAR_3 = FUNC_1(VAR_1->clk);

 if (VAR_3) {
  FUNC_8(FUNC_2(VAR_1));
  FUNC_5(FUNC_2(VAR_1));
  return VAR_3;
 }


 for (VAR_4 = 0; VAR_4 < VAR_1->dma_channels; ++VAR_4) {
  FUNC_9(&VAR_1->pc[VAR_4]->lock, VAR_2);
  if (FUNC_4(VAR_1->pc[VAR_4]) < 0) {
   FUNC_3(FUNC_2(VAR_1), "cqdma hard reset timeout\n");
   FUNC_10(&VAR_1->pc[VAR_4]->lock, VAR_2);

   FUNC_0(VAR_1->clk);
   FUNC_8(FUNC_2(VAR_1));
   FUNC_5(FUNC_2(VAR_1));
   return -VAR_0;
  }
  FUNC_10(&VAR_1->pc[VAR_4]->lock, VAR_2);
 }

 return 0;
}
