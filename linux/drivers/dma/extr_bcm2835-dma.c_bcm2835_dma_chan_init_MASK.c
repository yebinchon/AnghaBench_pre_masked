
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct bcm2835_dmadev {int base; TYPE_2__ ddev; } ;
struct TYPE_3__ {int desc_free; } ;
struct bcm2835_chan {int ch; int irq_number; unsigned int irq_flags; int is_lite_channel; scalar_t__ chan_base; TYPE_1__ vc; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bcm2835_chan* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct bcm2835_dmadev *VAR_5, int VAR_6,
     int VAR_7, unsigned int VAR_8)
{
 struct bcm2835_chan *VAR_9;

 VAR_9 = FUNC_1(VAR_5->ddev.dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->vc.desc_free = VAR_4;
 FUNC_3(&VAR_9->vc, &VAR_5->ddev);

 VAR_9->chan_base = FUNC_0(VAR_5->base, VAR_6);
 VAR_9->ch = VAR_6;
 VAR_9->irq_number = VAR_7;
 VAR_9->irq_flags = VAR_8;


 if (FUNC_2(VAR_9->chan_base + VAR_0) &
  VAR_1)
  VAR_9->is_lite_channel = 1;

 return 0;
}
