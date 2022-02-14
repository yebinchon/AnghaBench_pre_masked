
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct omap_dmadev {unsigned int irq_enable_mask; int irq_lock; TYPE_1__ ddev; struct omap_chan** lch_map; } ;
struct omap_chan {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,struct omap_chan*) ;
 unsigned int FUNC_4 (struct omap_chan*) ;
 unsigned int FUNC_5 (struct omap_dmadev*,int ) ;
 int FUNC_6 (struct omap_dmadev*,int ,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct omap_dmadev *VAR_5 = VAR_4;
 unsigned VAR_6, VAR_7;

 FUNC_7(&VAR_5->irq_lock);

 VAR_6 = FUNC_5(VAR_5, VAR_0);
 VAR_6 &= VAR_5->irq_enable_mask;
 if (VAR_6 == 0) {
  FUNC_8(&VAR_5->irq_lock);
  return VAR_2;
 }

 while ((VAR_7 = FUNC_2(VAR_6)) != 0) {
  unsigned VAR_8, VAR_9;
  struct omap_chan *VAR_10;

  VAR_7 -= 1;
  VAR_8 = FUNC_0(VAR_7);
  VAR_6 &= ~VAR_8;

  VAR_10 = VAR_5->lch_map[VAR_7];
  if (VAR_10 == ((void*)0)) {

   FUNC_1(VAR_5->ddev.dev, "invalid channel %u\n", VAR_7);
   continue;
  }

  VAR_9 = FUNC_4(VAR_10);
  FUNC_6(VAR_5, VAR_0, VAR_8);

  FUNC_3(VAR_7, VAR_9, VAR_10);
 }

 FUNC_8(&VAR_5->irq_lock);

 return VAR_1;
}
