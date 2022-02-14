
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_device {scalar_t__ irq; struct fsldma_device** chan; int dev; } ;
struct fsldma_chan {scalar_t__ irq; struct fsldma_chan** chan; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsldma_device*,char*) ;
 int FUNC_1 (struct fsldma_device*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,struct fsldma_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int ,int ,char*,struct fsldma_device*) ;

__attribute__((used)) static int FUNC_5(struct fsldma_device *VAR_5)
{
 struct fsldma_chan *VAR_6;
 int VAR_7;
 int VAR_8;


 if (VAR_5->irq) {
  FUNC_2(VAR_5->dev, "request per-controller IRQ\n");
  VAR_7 = FUNC_4(VAR_5->irq, VAR_4, VAR_2,
      "fsldma-controller", VAR_5);
  return VAR_7;
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_6 = VAR_5->chan[VAR_8];
  if (!VAR_6)
   continue;

  if (!VAR_6->irq) {
   FUNC_1(VAR_6, "interrupts property missing in device tree\n");
   VAR_7 = -VAR_0;
   goto out_unwind;
  }

  FUNC_0(VAR_6, "request per-channel IRQ\n");
  VAR_7 = FUNC_4(VAR_6->irq, VAR_3, VAR_2,
      "fsldma-chan", VAR_6);
  if (VAR_7) {
   FUNC_1(VAR_6, "unable to request per-channel IRQ\n");
   goto out_unwind;
  }
 }

 return 0;

out_unwind:
 for ( ; VAR_8 >= 0; VAR_8--) {
  VAR_6 = VAR_5->chan[VAR_8];
  if (!VAR_6)
   continue;

  if (!VAR_6->irq)
   continue;

  FUNC_3(VAR_6->irq, VAR_6);
 }

 return VAR_7;
}
