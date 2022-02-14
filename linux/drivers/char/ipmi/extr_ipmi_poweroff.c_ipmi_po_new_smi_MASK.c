
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernel_ipmi_msg {scalar_t__ data_len; int * data; int cmd; int netfn; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int data_len; int* data; } ;
struct TYPE_6__ {TYPE_1__ msg; } ;
struct TYPE_5__ {int poweroff_func; int platform_type; scalar_t__ (* detect ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,struct ipmi_addr*,struct kernel_ipmi_msg*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(int VAR_20, struct device *VAR_21)
{
 struct ipmi_system_interface_addr VAR_22;
 struct kernel_ipmi_msg VAR_23;
 int VAR_24;
 int VAR_25;

 if (VAR_18)
  return;

 if ((VAR_7 >= 0) && (VAR_7 != VAR_20))
  return;

 VAR_24 = FUNC_0(VAR_20, &VAR_10, ((void*)0),
         &VAR_11);
 if (VAR_24) {
  FUNC_3("could not create IPMI user, error %d\n", VAR_24);
  return;
 }

 VAR_8 = VAR_20;





 VAR_22.addr_type = VAR_3;
 VAR_22.channel = VAR_0;
 VAR_22.lun = 0;

 VAR_23.netfn = VAR_2;
 VAR_23.cmd = VAR_1;
 VAR_23.data = ((void*)0);
 VAR_23.data_len = 0;
 VAR_24 = FUNC_2(VAR_11,
         (struct ipmi_addr *) &VAR_22,
         &VAR_23);
 if (VAR_24) {
  FUNC_3("Unable to send IPMI get device id info, IPMI error 0x%x\n",
         VAR_24);
  goto out_err;
 }

 if (VAR_6.msg.data_len < 12) {
  FUNC_3("(chassis) IPMI get device id info too short, was %d bytes, needed %d bytes\n",
         VAR_6.msg.data_len, 12);
  goto out_err;
 }

 VAR_13 = (VAR_6.msg.data[7]
    | (VAR_6.msg.data[8] << 8)
    | (VAR_6.msg.data[9] << 16));
 VAR_17 = (VAR_6.msg.data[10]
     | (VAR_6.msg.data[11] << 8));
 VAR_5 = VAR_6.msg.data[6];
 VAR_12 = VAR_6.msg.data[5];



 for (VAR_25 = 0; VAR_25 < VAR_4; VAR_25++) {
  if (VAR_16[VAR_25].detect(VAR_11))
   goto found;
 }

 out_err:
 FUNC_3("Unable to find a poweroff function that will work, giving up\n");
 FUNC_1(VAR_11);
 return;

 found:
 FUNC_4("Found a %s style poweroff function\n",
  VAR_16[VAR_25].platform_type);
 VAR_19 = VAR_16[VAR_25].poweroff_func;
 VAR_14 = VAR_15;
 VAR_15 = VAR_9;
 VAR_18 = 1;
}
