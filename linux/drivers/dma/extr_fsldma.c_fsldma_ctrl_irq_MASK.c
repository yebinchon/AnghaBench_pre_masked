
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsldma_device {int feature; int dev; struct fsldma_chan** chan; int regs; } ;
struct fsldma_chan {int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,struct fsldma_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct fsldma_device *VAR_4 = VAR_3;
 struct fsldma_chan *VAR_5;
 unsigned int VAR_6 = 0;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = (VAR_4->feature & VAR_0) ? FUNC_3(VAR_4->regs)
         : FUNC_4(VAR_4->regs);
 VAR_8 = 0xff000000;
 FUNC_1(VAR_4->dev, "IRQ: gsr 0x%.8x\n", VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_5 = VAR_4->chan[VAR_9];
  if (!VAR_5)
   continue;

  if (VAR_7 & VAR_8) {
   FUNC_1(VAR_4->dev, "IRQ: chan %d\n", VAR_5->id);
   FUNC_2(VAR_2, VAR_5);
   VAR_6++;
  }

  VAR_7 &= ~VAR_8;
  VAR_8 >>= 8;
 }

 return FUNC_0(VAR_6);
}
