
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_device {scalar_t__ irq; struct fsldma_device** chan; int dev; } ;
struct fsldma_chan {scalar_t__ irq; struct fsldma_chan** chan; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsldma_device*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,struct fsldma_device*) ;

__attribute__((used)) static void FUNC_3(struct fsldma_device *VAR_1)
{
 struct fsldma_chan *VAR_2;
 int VAR_3;

 if (VAR_1->irq) {
  FUNC_1(VAR_1->dev, "free per-controller IRQ\n");
  FUNC_2(VAR_1->irq, VAR_1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->chan[VAR_3];
  if (VAR_2 && VAR_2->irq) {
   FUNC_0(VAR_2, "free per-channel IRQ\n");
   FUNC_2(VAR_2->irq, VAR_2);
  }
 }
}
