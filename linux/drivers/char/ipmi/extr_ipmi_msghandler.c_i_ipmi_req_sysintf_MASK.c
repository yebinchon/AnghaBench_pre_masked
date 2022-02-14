
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int netfn; scalar_t__ cmd; int data_len; struct ipmi_system_interface_addr* data; } ;
struct ipmi_system_interface_addr {int lun; } ;
struct ipmi_smi_msg {int* data; long msgid; int data_size; struct ipmi_recv_msg* user_data; } ;
struct ipmi_smi {int maintenance_mode_enable; int maintenance_mode_lock; int maintenance_mode; int auto_maintenance_timeout; } ;
struct ipmi_recv_msg {int addr; } ;
struct ipmi_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ipmi_smi*,int ) ;
 scalar_t__ FUNC_1 (struct kernel_ipmi_msg*) ;
 int VAR_7 ;
 int FUNC_2 (struct ipmi_smi*) ;
 int FUNC_3 (int*,struct ipmi_system_interface_addr*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ipmi_smi *VAR_10,
         struct ipmi_addr *VAR_11,
         long VAR_12,
         struct kernel_ipmi_msg *VAR_13,
         struct ipmi_smi_msg *VAR_14,
         struct ipmi_recv_msg *VAR_15,
         int VAR_16,
         unsigned int VAR_17)
{
 struct ipmi_system_interface_addr *VAR_18;

 if (VAR_13->netfn & 1)

  return -VAR_0;

 VAR_18 = (struct ipmi_system_interface_addr *) VAR_11;
 if (VAR_18->lun > 3) {
  FUNC_0(VAR_10, VAR_8);
  return -VAR_0;
 }

 FUNC_3(&VAR_15->addr, VAR_18, sizeof(*VAR_18));

 if ((VAR_13->netfn == VAR_4)
     && ((VAR_13->cmd == VAR_6)
  || (VAR_13->cmd == VAR_2)
  || (VAR_13->cmd == VAR_5))) {




  FUNC_0(VAR_10, VAR_8);
  return -VAR_0;
 }

 if (FUNC_1(VAR_13)) {
  unsigned long VAR_19;

  FUNC_4(&VAR_10->maintenance_mode_lock, VAR_19);
  VAR_10->auto_maintenance_timeout
   = VAR_7;
  if (!VAR_10->maintenance_mode
      && !VAR_10->maintenance_mode_enable) {
   VAR_10->maintenance_mode_enable = 1;
   FUNC_2(VAR_10);
  }
  FUNC_5(&VAR_10->maintenance_mode_lock,
           VAR_19);
 }

 if (VAR_13->data_len + 2 > VAR_3) {
  FUNC_0(VAR_10, VAR_8);
  return -VAR_1;
 }

 VAR_14->data[0] = (VAR_13->netfn << 2) | (VAR_18->lun & 0x3);
 VAR_14->data[1] = VAR_13->cmd;
 VAR_14->msgid = VAR_12;
 VAR_14->user_data = VAR_15;
 if (VAR_13->data_len > 0)
  FUNC_3(&VAR_14->data[2], VAR_13->data, VAR_13->data_len);
 VAR_14->data_size = VAR_13->data_len + 2;
 FUNC_0(VAR_10, VAR_9);

 return 0;
}
