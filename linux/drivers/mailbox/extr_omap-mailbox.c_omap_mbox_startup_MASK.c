
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mbox_queue {struct omap_mbox* mbox; } ;
struct omap_mbox {struct omap_mbox_queue* rxq; TYPE_1__* chan; scalar_t__ send_no_irq; int name; int irq; } ;
struct TYPE_2__ {int txdone_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_mbox*,int ) ;
 int VAR_4 ;
 struct omap_mbox_queue* FUNC_1 (struct omap_mbox*,int ) ;
 int FUNC_2 (struct omap_mbox_queue*) ;
 int VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int ,int ,struct omap_mbox*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct omap_mbox *VAR_6)
{
 int VAR_7 = 0;
 struct omap_mbox_queue *VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_5);
 if (!VAR_8)
  return -VAR_0;
 VAR_6->rxq = VAR_8;
 VAR_8->mbox = VAR_6;

 VAR_7 = FUNC_4(VAR_6->irq, VAR_4, VAR_1,
     VAR_6->name, VAR_6);
 if (FUNC_5(VAR_7)) {
  FUNC_3("failed to register mailbox interrupt:%d\n", VAR_7);
  goto fail_request_irq;
 }

 if (VAR_6->send_no_irq)
  VAR_6->chan->txdone_method = VAR_3;

 FUNC_0(VAR_6, VAR_2);

 return 0;

fail_request_irq:
 FUNC_2(VAR_6->rxq);
 return VAR_7;
}
