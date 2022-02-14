
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ src_addr; int src_addr_width; int direction; } ;
struct tiadc_dma {TYPE_4__* chan; int buf; int addr; TYPE_1__ conf; } ;
struct tiadc_device {TYPE_2__* mfd_tscadc; struct tiadc_dma dma; } ;
struct platform_device {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_11__ {TYPE_3__* device; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int dev; scalar_t__ tscadc_phys_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7,
        struct tiadc_device *VAR_8)
{
 struct tiadc_dma *VAR_9 = &VAR_8->dma;
 dma_cap_mask_t VAR_10;


 VAR_9->conf.direction = VAR_2;
 VAR_9->conf.src_addr_width = VAR_3;
 VAR_9->conf.src_addr = VAR_8->mfd_tscadc->tscadc_phys_base + VAR_6;

 FUNC_4(VAR_10);
 FUNC_3(VAR_1, VAR_10);


 VAR_9->chan = FUNC_6(VAR_8->mfd_tscadc->dev, "fifo1");
 if (FUNC_0(VAR_9->chan)) {
  int VAR_11 = FUNC_1(VAR_9->chan);

  VAR_9->chan = ((void*)0);
  return VAR_11;
 }


 VAR_9->buf = FUNC_2(VAR_9->chan->device->dev, VAR_0,
          &VAR_9->addr, VAR_5);
 if (!VAR_9->buf)
  goto err;

 return 0;
err:
 FUNC_5(VAR_9->chan);
 return -VAR_4;
}
