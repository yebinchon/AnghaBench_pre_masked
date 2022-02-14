
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipmi_smi {int waitq; TYPE_3__* bmc; int si_dev; } ;
struct TYPE_5__ {scalar_t__ netfn; scalar_t__ cmd; int data_len; int data; } ;
struct TYPE_4__ {scalar_t__ addr_type; } ;
struct ipmi_recv_msg {TYPE_2__ msg; TYPE_1__ addr; } ;
struct TYPE_6__ {int dyn_id_set; int fetch_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ipmi_smi *VAR_3,
      struct ipmi_recv_msg *VAR_4)
{
 int VAR_5;

 if ((VAR_4->addr.addr_type != VAR_2)
   || (VAR_4->msg.netfn != VAR_1)
   || (VAR_4->msg.cmd != VAR_0)) {
  FUNC_0(VAR_3->si_dev,
    "invalid device_id msg: addr_type=%d netfn=%x cmd=%x\n",
    VAR_4->addr.addr_type, VAR_4->msg.netfn, VAR_4->msg.cmd);
  return;
 }

 VAR_5 = FUNC_1(VAR_4->msg.netfn, VAR_4->msg.cmd,
   VAR_4->msg.data, VAR_4->msg.data_len, &VAR_3->bmc->fetch_id);
 if (VAR_5) {
  FUNC_0(VAR_3->si_dev, "device id demangle failed: %d\n", VAR_5);
  VAR_3->bmc->dyn_id_set = 0;
 } else {




  FUNC_2();
  VAR_3->bmc->dyn_id_set = 1;
 }

 FUNC_3(&VAR_3->waitq);
}
