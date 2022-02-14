
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_mbox_msg {int cmd; } ;
struct TYPE_4__ {int num_chans; int dev; int * chans; } ;
struct rockchip_mbox {TYPE_2__ mbox; TYPE_1__* chans; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int irq; struct rockchip_mbox_msg* msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,struct rockchip_mbox_msg*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 int VAR_3;
 struct rockchip_mbox_msg *VAR_4 = ((void*)0);
 struct rockchip_mbox *VAR_5 = (struct rockchip_mbox *)VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_5->mbox.num_chans; VAR_3++) {
  if (VAR_1 != VAR_5->chans[VAR_3].irq)
   continue;

  VAR_4 = VAR_5->chans[VAR_3].msg;
  if (!VAR_4) {
   FUNC_1(VAR_5->mbox.dev,
    "Chan[%d]: B2A message is NULL\n", VAR_3);
   break;
  }

  FUNC_2(&VAR_5->mbox.chans[VAR_3], VAR_4);
  VAR_5->chans[VAR_3].msg = ((void*)0);

  FUNC_0(VAR_5->mbox.dev, "Chan[%d]: B2A message, cmd 0x%08x\n",
   VAR_3, VAR_4->cmd);

  break;
 }

 return VAR_0;
}
