
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nents; } ;
struct hsi_msg {scalar_t__ status; int complete; TYPE_1__ sgt; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {int control_state; TYPE_2__* cl; } ;
struct TYPE_4__ {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_2__*,struct hsi_msg*) ;

__attribute__((used)) static void FUNC_5(struct hsi_msg *VAR_3)
{
 struct cs_hsi_iface *VAR_4 = VAR_3->context;
 int VAR_5;

 if (VAR_3->status == VAR_0) {
  FUNC_3(&VAR_4->cl->device, "Control peek RX error detected\n");
  FUNC_1(VAR_4, VAR_3);
  return;
 }

 FUNC_0(!(VAR_4->control_state & VAR_1));

 FUNC_2(&VAR_4->cl->device, "Peek on control complete, reading\n");
 VAR_3->sgt.nents = 1;
 VAR_3->complete = VAR_2;
 VAR_5 = FUNC_4(VAR_4->cl, VAR_3);
 if (VAR_5)
  FUNC_1(VAR_4, VAR_3);
}
