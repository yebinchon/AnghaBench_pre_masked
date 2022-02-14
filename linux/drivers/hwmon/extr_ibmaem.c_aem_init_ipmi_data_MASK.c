
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_5__ {int netfn; } ;
struct TYPE_4__ {scalar_t__* data; int channel; int addr_type; } ;
struct aem_ipmi_data {int interface; int user; TYPE_2__ tx_message; scalar_t__ tx_msgid; TYPE_1__ address; struct device* bmc_device; int read_complete; } ;
struct TYPE_6__ {int ipmi_hndlrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *,struct aem_ipmi_data*,int *) ;

__attribute__((used)) static int FUNC_3(struct aem_ipmi_data *VAR_4, int VAR_5,
         struct device *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_4->read_complete);
 VAR_4->bmc_device = VAR_6;


 VAR_4->address.addr_type = VAR_2;
 VAR_4->address.channel = VAR_1;
 VAR_4->address.data[0] = 0;
 VAR_4->interface = VAR_5;


 VAR_4->tx_msgid = 0;
 VAR_4->tx_message.netfn = VAR_0;


 VAR_7 = FUNC_2(VAR_4->interface, &VAR_3.ipmi_hndlrs,
          VAR_4, &VAR_4->user);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6,
   "Unable to register user with IPMI interface %d\n",
   VAR_4->interface);
  return VAR_7;
 }

 return 0;
}
