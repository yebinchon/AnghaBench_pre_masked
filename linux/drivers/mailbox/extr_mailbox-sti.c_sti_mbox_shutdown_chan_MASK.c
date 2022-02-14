
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_channel {TYPE_1__* mdev; } ;
struct mbox_controller {int num_chans; int dev; struct mbox_chan* chans; } ;
struct mbox_chan {struct sti_channel* con_priv; } ;
struct TYPE_2__ {struct mbox_controller* mbox; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (struct mbox_chan*) ;

__attribute__((used)) static void FUNC_3(struct mbox_chan *VAR_0)
{
 struct sti_channel *VAR_1 = VAR_0->con_priv;
 struct mbox_controller *VAR_2 = VAR_1->mdev->mbox;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_chans; VAR_3++)
  if (VAR_0 == &VAR_2->chans[VAR_3])
   break;

 if (VAR_2->num_chans == VAR_3) {
  FUNC_0(VAR_2->dev, "Request to free non-existent channel\n");
  return;
 }


 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 VAR_0->con_priv = ((void*)0);
}
