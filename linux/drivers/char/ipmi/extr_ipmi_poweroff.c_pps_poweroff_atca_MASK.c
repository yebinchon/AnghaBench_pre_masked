
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int data_len; int data; int cmd; int netfn; } ;
struct ipmi_user {int dummy; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipmi_user*,struct ipmi_addr*,struct kernel_ipmi_msg*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct ipmi_user *VAR_6)
{
 struct ipmi_system_interface_addr VAR_7;
 struct kernel_ipmi_msg VAR_8;
 int VAR_9;



 VAR_7.addr_type = VAR_4;
 VAR_7.channel = VAR_2;
 VAR_7.lun = 0;

 FUNC_2("PPS powerdown hook used\n");

 VAR_8.netfn = VAR_3;
 VAR_8.cmd = VAR_0;
 VAR_8.data = VAR_1;
 VAR_8.data_len = 3;
 VAR_9 = FUNC_0(VAR_6,
         (struct ipmi_addr *) &VAR_7,
         &VAR_8);
 if (VAR_9 && VAR_9 != VAR_5)
  FUNC_1("Unable to send ATCA, IPMI error 0x%x\n", VAR_9);

 return;
}
