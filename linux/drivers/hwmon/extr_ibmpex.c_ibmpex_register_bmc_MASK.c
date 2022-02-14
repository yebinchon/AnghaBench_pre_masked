
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; int cmd; int netfn; } ;
struct TYPE_4__ {scalar_t__* data; int channel; int addr_type; } ;
struct ibmpex_bmc_data {int interface; int user; int hwmon_dev; struct device* bmc_device; int list; int tx_msg_data; TYPE_2__ tx_message; int read_complete; scalar_t__ tx_msgid; int lock; TYPE_1__ address; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int bmc_data; int ipmi_hndlrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,struct ibmpex_bmc_data*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ibmpex_bmc_data*) ;
 int FUNC_6 (struct ibmpex_bmc_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int *,struct ibmpex_bmc_data*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ibmpex_bmc_data*) ;
 struct ibmpex_bmc_data* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(int VAR_6, struct device *VAR_7)
{
 struct ibmpex_bmc_data *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_11(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return;

 VAR_8->address.addr_type = VAR_2;
 VAR_8->address.channel = VAR_1;
 VAR_8->address.data[0] = 0;
 VAR_8->interface = VAR_6;
 VAR_8->bmc_device = VAR_7;


 VAR_9 = FUNC_8(VAR_8->interface, &VAR_5.ipmi_hndlrs,
          VAR_8, &VAR_8->user);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7,
   "Unable to register user with IPMI interface %d\n",
   VAR_8->interface);
  goto out;
 }

 FUNC_13(&VAR_8->lock);


 VAR_8->tx_msgid = 0;
 FUNC_7(&VAR_8->read_complete);
 VAR_8->tx_message.netfn = VAR_4;
 VAR_8->tx_message.cmd = VAR_3;
 VAR_8->tx_message.data = VAR_8->tx_msg_data;


 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9)
  goto out_user;


 VAR_8->hwmon_dev = FUNC_3(VAR_8->bmc_device);

 if (FUNC_0(VAR_8->hwmon_dev)) {
  FUNC_1(VAR_8->bmc_device,
   "Unable to register hwmon device for IPMI interface %d\n",
   VAR_8->interface);
  goto out_user;
 }


 FUNC_2(VAR_7, VAR_8);
 FUNC_12(&VAR_8->list, &VAR_5.bmc_data);


 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_8->bmc_device, "Error %d finding sensors\n", VAR_9);
  goto out_register;
 }

 return;

out_register:
 FUNC_4(VAR_8->hwmon_dev);
out_user:
 FUNC_9(VAR_8->user);
out:
 FUNC_10(VAR_8);
}
