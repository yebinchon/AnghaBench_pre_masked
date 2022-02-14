
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdc_state {int pdc_idx; TYPE_1__* pdev; } ;
struct mbox_chan {struct pdc_state* con_priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct pdc_state*) ;

__attribute__((used)) static void FUNC_2(struct mbox_chan *VAR_0)
{
 struct pdc_state *VAR_1 = VAR_0->con_priv;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->pdev->dev,
  "Shutdown mailbox channel for PDC %u", VAR_1->pdc_idx);
 FUNC_1(VAR_1);
}
