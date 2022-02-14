
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernel_ipmi_msg {int netfn; scalar_t__ data_len; int * data; int cmd; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
struct TYPE_4__ {scalar_t__* data; } ;
struct TYPE_5__ {TYPE_1__ msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,int *,int *,TYPE_2__*,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_6(void)
{
 struct kernel_ipmi_msg VAR_14;
 int VAR_15;
 struct ipmi_system_interface_addr VAR_16;
 int VAR_17 = 0;

restart:




 if (VAR_8 == VAR_7)
  return 0;

 FUNC_1(&VAR_9, 2);

 VAR_16.addr_type = VAR_4;
 VAR_16.channel = VAR_2;
 VAR_16.lun = 0;

 VAR_14.netfn = 0x06;
 VAR_14.cmd = VAR_5;
 VAR_14.data = ((void*)0);
 VAR_14.data_len = 0;
 VAR_15 = FUNC_2(VAR_13,
          (struct ipmi_addr *) &VAR_16,
          0,
          &VAR_14,
          ((void*)0),
          &VAR_12,
          &VAR_11,
          1);
 if (VAR_15) {
  FUNC_4("heartbeat send failure: %d\n", VAR_15);
  return VAR_15;
 }


 FUNC_5(&VAR_10);

 if (VAR_11.msg.data[0] == VAR_6) {
  VAR_17++;
  if (VAR_17 > 3) {
   FUNC_3("Unable to restore the IPMI watchdog's settings, giving up\n");
   VAR_15 = -VAR_1;
   goto out;
  }
  VAR_15 = FUNC_0(VAR_3);
  if (VAR_15) {
   FUNC_3("Unable to send the command to set the watchdog's settings, giving up\n");
   goto out;
  }


  goto restart;
 } else if (VAR_11.msg.data[0] != 0) {





  VAR_15 = -VAR_0;
 }

out:
 return VAR_15;
}
