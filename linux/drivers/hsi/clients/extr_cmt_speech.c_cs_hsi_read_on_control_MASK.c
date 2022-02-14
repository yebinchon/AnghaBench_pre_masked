
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nents; } ;
struct hsi_msg {int complete; TYPE_1__ sgt; } ;
struct cs_hsi_iface {int control_state; TYPE_2__* cl; int lock; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hsi_msg* FUNC_0 (struct cs_hsi_iface*) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_2__*,struct hsi_msg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cs_hsi_iface *VAR_3)
{
 struct hsi_msg *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_3->lock);
 if (VAR_3->control_state & VAR_1) {
  FUNC_3(&VAR_3->cl->device, "Control read already pending (%d)\n",
   VAR_3->control_state);
  FUNC_6(&VAR_3->lock);
  return;
 }
 if (VAR_3->control_state & VAR_0) {
  FUNC_3(&VAR_3->cl->device, "Control read error (%d)\n",
   VAR_3->control_state);
  FUNC_6(&VAR_3->lock);
  return;
 }
 VAR_3->control_state |= VAR_1;
 FUNC_2(&VAR_3->cl->device, "Issuing RX on control\n");
 VAR_4 = FUNC_0(VAR_3);
 FUNC_6(&VAR_3->lock);

 VAR_4->sgt.nents = 0;
 VAR_4->complete = VAR_2;
 VAR_5 = FUNC_4(VAR_3->cl, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_3, VAR_4);
}
