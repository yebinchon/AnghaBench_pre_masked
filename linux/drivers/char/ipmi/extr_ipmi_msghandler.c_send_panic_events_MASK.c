
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_ipmi_msg {int netfn; int cmd; unsigned char* data; int data_len; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; void* channel; void* addr_type; } ;
struct ipmi_smi {int event_receiver; TYPE_1__* addrinfo; scalar_t__ local_sel_device; int event_receiver_lun; int * null_user_handler; scalar_t__ local_event_generator; } ;
struct ipmi_ipmb_addr {int slave_addr; int lun; scalar_t__ channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
struct TYPE_2__ {int address; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_0 (struct ipmi_smi*,struct ipmi_addr*,struct kernel_ipmi_msg*) ;
 scalar_t__ VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ipmi_smi *VAR_14, char *VAR_15)
{
 struct kernel_ipmi_msg VAR_16;
 unsigned char VAR_17[16];
 struct ipmi_system_interface_addr *VAR_18;
 struct ipmi_addr VAR_19;
 char *VAR_20 = VAR_15;
 struct ipmi_ipmb_addr *VAR_21;
 int VAR_22;

 if (VAR_13 == VAR_8)
  return;

 VAR_18 = (struct ipmi_system_interface_addr *) &VAR_19;
 VAR_18->addr_type = VAR_10;
 VAR_18->channel = VAR_1;
 VAR_18->lun = 0;


 VAR_16.netfn = 0x04;
 VAR_16.cmd = 2;
 VAR_16.data = VAR_17;
 VAR_16.data_len = 8;
 VAR_17[0] = 0x41;
 VAR_17[1] = 0x03;
 VAR_17[2] = 0x20;
 VAR_17[4] = 0x6f;
 VAR_17[5] = 0xa1;





 if (VAR_15) {
  VAR_17[3] = VAR_15[0];
  VAR_17[6] = VAR_15[1];
  VAR_17[7] = VAR_15[2];
 }


 FUNC_0(VAR_14, &VAR_19, &VAR_16);





 if (VAR_13 != VAR_9 || !VAR_15)
  return;







 FUNC_1();
 VAR_14->local_sel_device = 0;
 VAR_14->local_event_generator = 0;
 VAR_14->event_receiver = 0;


 VAR_16.netfn = VAR_5;
 VAR_16.cmd = VAR_2;
 VAR_16.data = ((void*)0);
 VAR_16.data_len = 0;
 VAR_14->null_user_handler = VAR_11;
 FUNC_0(VAR_14, &VAR_19, &VAR_16);

 if (VAR_14->local_event_generator) {

  VAR_16.netfn = VAR_6;
  VAR_16.cmd = VAR_3;
  VAR_16.data = ((void*)0);
  VAR_16.data_len = 0;
  VAR_14->null_user_handler = VAR_12;
  FUNC_0(VAR_14, &VAR_19, &VAR_16);
 }
 VAR_14->null_user_handler = ((void*)0);






 if (((VAR_14->event_receiver & 1) == 0)
     && (VAR_14->event_receiver != 0)
     && (VAR_14->event_receiver != VAR_14->addrinfo[0].address)) {




  VAR_21 = (struct ipmi_ipmb_addr *) &VAR_19;
  VAR_21->addr_type = VAR_4;
  VAR_21->channel = 0;
  VAR_21->lun = VAR_14->event_receiver_lun;
  VAR_21->slave_addr = VAR_14->event_receiver;
 } else if (VAR_14->local_sel_device) {





  VAR_18 = (struct ipmi_system_interface_addr *) &VAR_19;
  VAR_18->addr_type = VAR_10;
  VAR_18->channel = VAR_1;
  VAR_18->lun = 0;
 } else
  return;

 VAR_16.netfn = VAR_7;
 VAR_16.cmd = VAR_0;
 VAR_16.data = VAR_17;
 VAR_16.data_len = 16;

 VAR_22 = 0;
 while (*VAR_20) {
  int VAR_23 = FUNC_2(VAR_20);

  if (VAR_23 > 11)
   VAR_23 = 11;
  VAR_17[0] = 0;
  VAR_17[1] = 0;
  VAR_17[2] = 0xf0;
  VAR_17[3] = VAR_14->addrinfo[0].address;
  VAR_17[4] = VAR_22++;




  FUNC_3(VAR_17+5, VAR_20, 11);
  VAR_20 += VAR_23;

  FUNC_0(VAR_14, &VAR_19, &VAR_16);
 }
}
