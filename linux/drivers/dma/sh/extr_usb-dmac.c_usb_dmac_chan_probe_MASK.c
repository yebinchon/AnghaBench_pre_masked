
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc_free; } ;
struct usb_dmac_chan {unsigned int index; int desc_got; int desc_freed; TYPE_1__ vc; int irq; scalar_t__ iomem; } ;
struct usb_dmac {int engine; int dev; scalar_t__ iomem; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ,char*,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int ,int ,char*,struct usb_dmac_chan*) ;
 int FUNC_6 (struct platform_device*,char*) ;
 int FUNC_7 (char*,char*,unsigned int) ;
 struct platform_device* FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_10(struct usb_dmac *VAR_6,
          struct usb_dmac_chan *VAR_7,
          unsigned int VAR_8)
{
 struct platform_device *VAR_9 = FUNC_8(VAR_6->dev);
 char VAR_10[5];
 char *VAR_11;
 int VAR_12;

 VAR_7->index = VAR_8;
 VAR_7->iomem = VAR_6->iomem + FUNC_1(VAR_8);


 FUNC_7(VAR_10, "ch%u", VAR_8);
 VAR_7->irq = FUNC_6(VAR_9, VAR_10);
 if (VAR_7->irq < 0)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_6->dev, VAR_2, "%s:%u",
     FUNC_3(VAR_6->dev), VAR_8);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_5(VAR_6->dev, VAR_7->irq, VAR_4,
          VAR_3, VAR_11, VAR_7);
 if (VAR_12) {
  FUNC_2(VAR_6->dev, "failed to request IRQ %u (%d)\n",
   VAR_7->irq, VAR_12);
  return VAR_12;
 }

 VAR_7->vc.desc_free = VAR_5;
 FUNC_9(&VAR_7->vc, &VAR_6->engine);
 FUNC_0(&VAR_7->desc_freed);
 FUNC_0(&VAR_7->desc_got);

 return 0;
}
