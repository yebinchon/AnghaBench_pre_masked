
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct mbox_chan {struct altera_mbox* con_priv; } ;
struct TYPE_2__ {int num_chans; int txdone_irq; int txdone_poll; int txpoll_period; int * ops; struct mbox_chan* chans; int * dev; } ;
struct altera_mbox {scalar_t__ irq; int intr_mode; TYPE_1__ controller; scalar_t__ is_sender; int * dev; int mbox_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct altera_mbox*) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 void* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct altera_mbox*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct altera_mbox *VAR_6;
 struct resource *VAR_7;
 struct mbox_chan *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;


 VAR_8 = FUNC_5(&VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_5, VAR_2, 0);

 VAR_6->mbox_base = FUNC_4(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->mbox_base))
  return FUNC_1(VAR_6->mbox_base);


 VAR_6->is_sender = FUNC_2(VAR_6);

 VAR_6->irq = FUNC_7(VAR_5, 0);
 if (VAR_6->irq >= 0)
  VAR_6->intr_mode = 1;

 VAR_6->dev = &VAR_5->dev;


 VAR_8[0].con_priv = VAR_6;
 VAR_6->controller.dev = VAR_6->dev;
 VAR_6->controller.num_chans = 1;
 VAR_6->controller.chans = VAR_8;
 VAR_6->controller.ops = &VAR_4;

 if (VAR_6->is_sender) {
  if (VAR_6->intr_mode) {
   VAR_6->controller.txdone_irq = 1;
  } else {
   VAR_6->controller.txdone_poll = 1;
   VAR_6->controller.txpoll_period = VAR_3;
  }
 }

 VAR_9 = FUNC_6(&VAR_5->dev, &VAR_6->controller);
 if (VAR_9) {
  FUNC_3(&VAR_5->dev, "Register mailbox failed\n");
  goto err;
 }

 FUNC_9(VAR_5, VAR_6);
err:
 return VAR_9;
}
