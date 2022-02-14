
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_ipmi_msg {int netfn; unsigned char* data; int data_len; int cmd; } ;
struct ipmi_user {int dummy; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_ipmb_addr {unsigned char slave_addr; unsigned char lun; scalar_t__ channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_0 (struct ipmi_user*,struct ipmi_addr*,struct kernel_ipmi_msg*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct ipmi_user *VAR_12)
{
 struct ipmi_system_interface_addr VAR_13;
 struct ipmi_ipmb_addr VAR_14;
 struct kernel_ipmi_msg VAR_15;
 int VAR_16;
 unsigned char VAR_17[1];
 int VAR_18;
 unsigned char VAR_19;
 unsigned char VAR_20;
 unsigned char VAR_21;




 VAR_13.addr_type = VAR_6;
 VAR_13.channel = VAR_0;
 VAR_13.lun = 0;

 FUNC_1("Powering down via CPI1 power command\n");




 VAR_15.netfn = VAR_4 >> 2;
 VAR_15.cmd = VAR_7;
 VAR_15.data = ((void*)0);
 VAR_15.data_len = 0;
 VAR_16 = FUNC_0(VAR_12,
         (struct ipmi_addr *) &VAR_13,
         &VAR_15);
 if (VAR_16)
  goto out;
 VAR_18 = VAR_11.msg.data[1];
 VAR_19 = (VAR_18 > 9) ? (0xb0 + 2 * VAR_18) : (0xae + 2 * VAR_18);




 VAR_15.netfn = VAR_5 >> 2;
 VAR_15.cmd = VAR_1;
 VAR_15.data = ((void*)0);
 VAR_15.data_len = 0;
 VAR_16 = FUNC_0(VAR_12,
         (struct ipmi_addr *) &VAR_13,
         &VAR_15);
 if (VAR_16)
  goto out;
 VAR_20 = VAR_11.msg.data[1];
 VAR_21 = VAR_11.msg.data[2];




 VAR_14.addr_type = VAR_2;
 VAR_14.channel = 0;
 VAR_14.slave_addr = VAR_20;
 VAR_14.lun = VAR_21;




 VAR_15.netfn = VAR_4 >> 2;
 VAR_15.cmd = VAR_8;
 VAR_15.data = &VAR_19;
 VAR_15.data_len = 1;
 FUNC_0(VAR_12,
    (struct ipmi_addr *) &VAR_14,
    &VAR_15);




 VAR_15.netfn = VAR_3 >> 2;
 VAR_15.cmd = VAR_10;
 VAR_15.data = VAR_17;
 VAR_17[0] = 1;
 VAR_15.data_len = 1;
 VAR_16 = FUNC_0(VAR_12,
         (struct ipmi_addr *) &VAR_13,
         &VAR_15);
 if (VAR_16)
  goto out;




 VAR_15.netfn = VAR_3 >> 2;
 VAR_15.cmd = VAR_9;
 VAR_15.data = VAR_17;
 VAR_17[0] = 1;
 VAR_15.data_len = 1;
 VAR_16 = FUNC_0(VAR_12,
         (struct ipmi_addr *) &VAR_13,
         &VAR_15);
 if (VAR_16)
  goto out;

 out:
 return;
}
