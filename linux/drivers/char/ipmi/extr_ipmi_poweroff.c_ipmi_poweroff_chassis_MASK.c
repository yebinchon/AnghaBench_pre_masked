
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
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipmi_user*,struct ipmi_addr*,struct kernel_ipmi_msg*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct ipmi_user *VAR_7)
{
 struct ipmi_system_interface_addr VAR_8;
 struct kernel_ipmi_msg VAR_9;
 int VAR_10;
 unsigned char VAR_11[1];




 VAR_8.addr_type = VAR_5;
 VAR_8.channel = VAR_0;
 VAR_8.lun = 0;

 powercyclefailed:
 FUNC_2("Powering %s via IPMI chassis control command\n",
  (VAR_6 ? "cycle" : "down"));




 VAR_9.netfn = VAR_4;
 VAR_9.cmd = VAR_1;
 if (VAR_6)
  VAR_11[0] = VAR_2;
 else
  VAR_11[0] = VAR_3;
 VAR_9.data = VAR_11;
 VAR_9.data_len = sizeof(VAR_11);
 VAR_10 = FUNC_0(VAR_7,
         (struct ipmi_addr *) &VAR_8,
         &VAR_9);
 if (VAR_10) {
  if (VAR_6) {

   FUNC_1("Unable to send chassis power cycle message, IPMI error 0x%x\n",
          VAR_10);
   VAR_6 = 0;
   goto powercyclefailed;
  }

  FUNC_1("Unable to send chassis power down message, IPMI error 0x%x\n",
         VAR_10);
 }
}
