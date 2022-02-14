
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbox_controller {int num_chans; int txdone_irq; int txdone_poll; int txpoll_period; TYPE_2__* chans; int * ops; struct device* dev; } ;
struct pdc_state {struct mbox_controller mbc; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct pdc_state* con_priv; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 TYPE_2__* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,struct mbox_controller*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pdc_state *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct mbox_controller *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = &VAR_3->mbc;
 VAR_5->dev = VAR_4;
 VAR_5->ops = &VAR_2;
 VAR_5->num_chans = 1;
 VAR_5->chans = FUNC_1(VAR_4, VAR_5->num_chans, sizeof(*VAR_5->chans),
      VAR_1);
 if (!VAR_5->chans)
  return -VAR_0;

 VAR_5->txdone_irq = 0;
 VAR_5->txdone_poll = 1;
 VAR_5->txpoll_period = 1;
 for (VAR_6 = 0; VAR_6 < VAR_5->num_chans; VAR_6++)
  VAR_5->chans[VAR_6].con_priv = VAR_3;


 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_4,
    "Failed to register PDC mailbox controller. Error %d.",
    VAR_7);
  return VAR_7;
 }
 return 0;
}
