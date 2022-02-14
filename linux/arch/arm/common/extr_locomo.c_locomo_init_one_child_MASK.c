
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct locomo_dev_info {scalar_t__* irq; int length; scalar_t__ offset; int devid; int name; } ;
struct TYPE_5__ {int coherent_dma_mask; int release; int * bus; TYPE_1__* parent; int * dma_mask; } ;
struct locomo_dev {TYPE_2__ dev; scalar_t__* irq; int length; scalar_t__ mapbase; int devid; int dma_mask; } ;
struct locomo {scalar_t__ irq_base; scalar_t__ base; TYPE_1__* dev; } ;
struct TYPE_4__ {int coherent_dma_mask; int * dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct locomo_dev*) ;
 struct locomo_dev* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct locomo *VAR_5, struct locomo_dev_info *VAR_6)
{
 struct locomo_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(struct locomo_dev), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto out;
 }





 if (VAR_5->dev->dma_mask) {
  VAR_7->dma_mask = *VAR_5->dev->dma_mask;
  VAR_7->dev.dma_mask = &VAR_7->dma_mask;
 }

 FUNC_0(&VAR_7->dev, "%s", VAR_6->name);
 VAR_7->devid = VAR_6->devid;
 VAR_7->dev.parent = VAR_5->dev;
 VAR_7->dev.bus = &VAR_3;
 VAR_7->dev.release = VAR_4;
 VAR_7->dev.coherent_dma_mask = VAR_5->dev->coherent_dma_mask;

 if (VAR_6->offset)
  VAR_7->mapbase = VAR_5->base + VAR_6->offset;
 else
  VAR_7->mapbase = 0;
 VAR_7->length = VAR_6->length;

 VAR_7->irq[0] = (VAR_5->irq_base == VAR_2) ?
   VAR_2 : VAR_5->irq_base + VAR_6->irq[0];

 VAR_8 = FUNC_1(&VAR_7->dev);
 if (VAR_8) {
 out:
  FUNC_2(VAR_7);
 }
 return VAR_8;
}
