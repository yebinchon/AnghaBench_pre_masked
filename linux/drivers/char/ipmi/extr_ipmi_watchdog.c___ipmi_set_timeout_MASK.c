
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int netfn; unsigned char* data; int data_len; int cmd; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_smi_msg {int dummy; } ;
struct ipmi_recv_msg {int dummy; } ;
struct ipmi_addr {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (unsigned char,unsigned char,int ) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (unsigned char,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,int *,struct ipmi_smi_msg*,struct ipmi_recv_msg*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*,int) ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_6(struct ipmi_smi_msg *VAR_14,
         struct ipmi_recv_msg *VAR_15,
         int *VAR_16)
{
 struct kernel_ipmi_msg VAR_17;
 unsigned char VAR_18[6];
 int VAR_19;
 struct ipmi_system_interface_addr VAR_20;
 int VAR_21 = 0;


 VAR_18[0] = 0;
 FUNC_3(VAR_18[0], VAR_6);

 if ((VAR_7 > 1)
     || ((VAR_7 == 1) && (VAR_8 >= 5))) {

  VAR_18[0] |= VAR_3;
 } else if (VAR_9 != VAR_5) {




  VAR_21 = 1;
 }

 VAR_18[1] = 0;
 FUNC_2(VAR_18[1], VAR_9);
 if ((VAR_11 > 0) && (VAR_9 != VAR_5)) {
     FUNC_0(VAR_18[1], VAR_10);
     VAR_18[2] = VAR_11;
 } else {
     FUNC_0(VAR_18[1], VAR_4);
     VAR_18[2] = 0;
 }
 VAR_18[3] = 0;
 FUNC_1(VAR_18[4], VAR_18[5], VAR_12);

 VAR_20.addr_type = VAR_1;
 VAR_20.channel = VAR_0;
 VAR_20.lun = 0;

 VAR_17.netfn = 0x06;
 VAR_17.cmd = VAR_2;
 VAR_17.data = VAR_18;
 VAR_17.data_len = sizeof(VAR_18);
 VAR_19 = FUNC_4(VAR_13,
          (struct ipmi_addr *) &VAR_20,
          0,
          &VAR_17,
          ((void*)0),
          VAR_14,
          VAR_15,
          1);
 if (VAR_19)
  FUNC_5("set timeout error: %d\n", VAR_19);
 else if (VAR_16)
  *VAR_16 = VAR_21;

 return VAR_19;
}
