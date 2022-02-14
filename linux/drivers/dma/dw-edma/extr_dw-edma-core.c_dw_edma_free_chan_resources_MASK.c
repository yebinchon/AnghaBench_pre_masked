
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_edma_chan {TYPE_1__* chip; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 struct dw_edma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_1)
{
 unsigned long VAR_2 = VAR_0 + FUNC_3(5000);
 struct dw_edma_chan *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 while (FUNC_6(VAR_0, VAR_2)) {
  VAR_4 = FUNC_2(VAR_1);
  if (!VAR_4)
   break;

  if (FUNC_5(VAR_0, VAR_2))
   return;

  FUNC_0();
 }

 FUNC_4(VAR_3->chip->dev);
}
