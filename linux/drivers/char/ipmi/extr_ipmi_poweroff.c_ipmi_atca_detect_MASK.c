
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {unsigned char* data; int data_len; int cmd; int netfn; } ;
struct ipmi_user {int dummy; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ipmi_user*,struct ipmi_addr*,struct kernel_ipmi_msg*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_2(struct ipmi_user *VAR_11)
{
 struct ipmi_system_interface_addr VAR_12;
 struct kernel_ipmi_msg VAR_13;
 int VAR_14;
 unsigned char VAR_15[1];




 VAR_12.addr_type = VAR_6;
 VAR_12.channel = VAR_1;
 VAR_12.lun = 0;




 VAR_13.netfn = VAR_4;
 VAR_13.cmd = VAR_0;
 VAR_15[0] = VAR_5;
 VAR_13.data = VAR_15;
 VAR_13.data_len = sizeof(VAR_15);
 VAR_14 = FUNC_0(VAR_11,
         (struct ipmi_addr *) &VAR_12,
         &VAR_13);

 FUNC_1("ATCA Detect mfg 0x%X prod 0x%X\n", VAR_8, VAR_10);
 if ((VAR_8 == VAR_2)
     && (VAR_10 == VAR_3)) {
  FUNC_1("Installing Pigeon Point Systems Poweroff Hook\n");
  VAR_7 = VAR_9;
 }
 return !VAR_14;
}
