
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdc_tx_desc {int cmd_loaded; int list_cmds_done; int list_len; int list_period_len; int vd; scalar_t__ cyclic; } ;
struct TYPE_2__ {int lock; } ;
struct mdc_chan {TYPE_1__ vc; struct mdc_tx_desc* desc; int chan_nr; int mdma; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 unsigned int FUNC_2 (struct mdc_chan*) ;
 int FUNC_3 (struct mdc_chan*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_1, void *VAR_2)
{
 struct mdc_chan *VAR_3 = (struct mdc_chan *)VAR_2;
 struct mdc_tx_desc *VAR_4;
 unsigned int VAR_5, VAR_6;

 FUNC_5(&VAR_3->vc.lock);

 FUNC_0(FUNC_4(VAR_3->mdma), "IRQ on channel %d\n", VAR_3->chan_nr);

 VAR_6 = FUNC_2(VAR_3);

 if (!VAR_6)
  goto out;

 VAR_4 = VAR_3->desc;
 if (!VAR_4) {
  FUNC_1(FUNC_4(VAR_3->mdma),
    "IRQ with no active descriptor on channel %d\n",
    VAR_3->chan_nr);
  goto out;
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {





  if (!VAR_4->cmd_loaded) {
   VAR_4->cmd_loaded = 1;
   continue;
  }

  VAR_4->list_cmds_done++;
  if (VAR_4->cyclic) {
   VAR_4->list_cmds_done %= VAR_4->list_len;
   if (VAR_4->list_cmds_done % VAR_4->list_period_len == 0)
    FUNC_8(&VAR_4->vd);
  } else if (VAR_4->list_cmds_done == VAR_4->list_len) {
   VAR_3->desc = ((void*)0);
   FUNC_7(&VAR_4->vd);
   FUNC_3(VAR_3);
   break;
  }
 }
out:
 FUNC_6(&VAR_3->vc.lock);

 return VAR_0;
}
