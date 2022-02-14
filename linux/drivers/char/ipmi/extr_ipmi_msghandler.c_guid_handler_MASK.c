
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipmi_smi {int waitq; int si_dev; struct bmc_device* bmc; } ;
struct TYPE_4__ {scalar_t__ netfn; scalar_t__ cmd; scalar_t__* data; scalar_t__ data_len; } ;
struct TYPE_3__ {scalar_t__ addr_type; } ;
struct ipmi_recv_msg {TYPE_2__ msg; TYPE_1__ addr; } ;
struct bmc_device {int dyn_guid_set; int fetch_guid; } ;
typedef int guid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ipmi_smi *VAR_4, struct ipmi_recv_msg *VAR_5)
{
 struct bmc_device *VAR_6 = VAR_4->bmc;

 if ((VAR_5->addr.addr_type != VAR_2)
     || (VAR_5->msg.netfn != VAR_1)
     || (VAR_5->msg.cmd != VAR_0))

  return;

 if (VAR_5->msg.data[0] != 0) {

  VAR_6->dyn_guid_set = 0;
  goto out;
 }

 if (VAR_5->msg.data_len < VAR_3 + 1) {
  VAR_6->dyn_guid_set = 0;
  FUNC_0(VAR_4->si_dev,
    "The GUID response from the BMC was too short, it was %d but should have been %d.  Assuming GUID is not available.\n",
    VAR_5->msg.data_len, VAR_3 + 1);
  goto out;
 }

 FUNC_1(&VAR_6->fetch_guid, (guid_t *)(VAR_5->msg.data + 1));




 FUNC_2();
 VAR_6->dyn_guid_set = 1;
 out:
 FUNC_3(&VAR_4->waitq);
}
