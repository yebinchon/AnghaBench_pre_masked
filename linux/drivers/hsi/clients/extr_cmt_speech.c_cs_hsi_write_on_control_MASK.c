
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int nents; } ;
struct hsi_msg {int complete; TYPE_1__ sgt; } ;
struct cs_hsi_iface {int control_state; TYPE_2__* cl; int lock; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hsi_msg* FUNC_0 (struct cs_hsi_iface*) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int FUNC_2 (struct cs_hsi_iface*) ;
 int VAR_5 ;
 int FUNC_3 (struct hsi_msg*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (TYPE_2__*,struct hsi_msg*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cs_hsi_iface *VAR_6, u32 VAR_7)
{
 struct hsi_msg *VAR_8;
 int VAR_9;

 FUNC_7(&VAR_6->lock);
 if (VAR_6->control_state & VAR_2) {
  FUNC_8(&VAR_6->lock);
  return -VAR_1;
 }
 if (VAR_6->control_state & VAR_4) {
  FUNC_5(&VAR_6->cl->device,
   "Write still pending on control channel.\n");
  FUNC_8(&VAR_6->lock);
  return -VAR_0;
 }
 VAR_6->control_state |= VAR_4;
 VAR_8 = FUNC_0(VAR_6);
 FUNC_8(&VAR_6->lock);

 FUNC_3(VAR_8, VAR_7);
 VAR_8->sgt.nents = 1;
 VAR_8->complete = VAR_5;
 FUNC_4(&VAR_6->cl->device,
  "Sending control message %08X\n", VAR_7);
 VAR_9 = FUNC_6(VAR_6->cl, VAR_8);
 if (VAR_9) {
  FUNC_5(&VAR_6->cl->device,
   "async_write failed with %d\n", VAR_9);
  FUNC_1(VAR_6, VAR_8);
 }
 if (!(VAR_6->control_state & VAR_3)) {
  FUNC_5(&VAR_6->cl->device, "Restarting control reads\n");
  FUNC_2(VAR_6);
 }

 return 0;
}
