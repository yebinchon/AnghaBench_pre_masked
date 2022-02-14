
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct mtk_cqdma_device {size_t dma_channels; TYPE_1__** pc; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int tasklet; int irq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct mtk_cqdma_device *VAR_6 = VAR_5;
 irqreturn_t VAR_7 = VAR_1;
 bool VAR_8 = 0;
 u32 VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_6->dma_channels; ++VAR_9, VAR_8 = 0) {
  FUNC_3(&VAR_6->pc[VAR_9]->lock);
  if (FUNC_2(VAR_6->pc[VAR_9],
     VAR_2) & VAR_3) {

   FUNC_1(VAR_6->pc[VAR_9], VAR_2,
        VAR_3);

   VAR_8 = 1;
   VAR_7 = VAR_0;
  }
  FUNC_4(&VAR_6->pc[VAR_9]->lock);

  if (VAR_8) {

   FUNC_0(VAR_6->pc[VAR_9]->irq);


   FUNC_5(&VAR_6->pc[VAR_9]->tasklet);
  }
 }

 return VAR_7;
}
