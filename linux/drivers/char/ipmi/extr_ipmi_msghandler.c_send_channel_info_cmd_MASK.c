
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_ipmi_msg {unsigned char* data; int data_len; int cmd; int netfn; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_smi {TYPE_1__* addrinfo; } ;
struct ipmi_addr {int dummy; } ;
struct TYPE_2__ {int lun; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ipmi_smi*,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,struct ipmi_smi*,int *,int *,int ,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct ipmi_smi *VAR_4, int VAR_5)
{
 struct kernel_ipmi_msg VAR_6;
 unsigned char VAR_7[1];
 struct ipmi_system_interface_addr VAR_8;

 VAR_8.addr_type = VAR_3;
 VAR_8.channel = VAR_0;
 VAR_8.lun = 0;

 VAR_6.netfn = VAR_2;
 VAR_6.cmd = VAR_1;
 VAR_6.data = VAR_7;
 VAR_6.data_len = 1;
 VAR_7[0] = VAR_5;
 return FUNC_0(((void*)0),
         VAR_4,
         (struct ipmi_addr *) &VAR_8,
         0,
         &VAR_6,
         VAR_4,
         ((void*)0),
         ((void*)0),
         0,
         VAR_4->addrinfo[0].address,
         VAR_4->addrinfo[0].lun,
         -1, 0);
}
