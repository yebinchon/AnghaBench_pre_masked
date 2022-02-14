
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_ipmi_msg {scalar_t__ data_len; } ;
struct ipmi_smi_msg {int data_size; struct ipmi_ipmb_addr* data; struct ipmi_recv_msg* user_data; } ;
struct ipmi_smi {int seq_lock; scalar_t__ ipmb_maintenance_mode_timeout; int channel_list; } ;
struct TYPE_3__ {int netfn; int data_len; int * data; } ;
struct ipmi_recv_msg {TYPE_1__ msg; int * msg_data; int addr; } ;
struct ipmi_ipmb_addr {int lun; } ;
struct ipmi_channel {scalar_t__ medium; } ;
struct ipmi_addr {size_t channel; scalar_t__ addr_type; } ;
struct TYPE_4__ {struct ipmi_channel* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (int ) ;
 long FUNC_1 (unsigned char,long) ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct ipmi_smi_msg*,struct kernel_ipmi_msg*,struct ipmi_ipmb_addr*,long,unsigned char,int,unsigned char,unsigned char) ;
 int FUNC_3 (struct ipmi_smi*,struct ipmi_recv_msg*,unsigned int,int,int,unsigned char*,long*) ;
 int FUNC_4 (struct ipmi_smi*,int ) ;
 scalar_t__ FUNC_5 (struct kernel_ipmi_msg*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *,struct ipmi_ipmb_addr*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ipmi_smi *VAR_12,
      struct ipmi_addr *VAR_13,
      long VAR_14,
      struct kernel_ipmi_msg *VAR_15,
      struct ipmi_smi_msg *VAR_16,
      struct ipmi_recv_msg *VAR_17,
      unsigned char VAR_18,
      unsigned char VAR_19,
      int VAR_20,
      unsigned int VAR_21)
{
 struct ipmi_ipmb_addr *VAR_22;
 unsigned char VAR_23;
 long VAR_24;
 int VAR_25 = 0;
 struct ipmi_channel *VAR_26;
 int VAR_27 = 0;

 if (VAR_13->channel >= VAR_5) {
  FUNC_4(VAR_12, VAR_9);
  return -VAR_0;
 }

 VAR_26 = FUNC_0(VAR_12->channel_list)->c;

 if (VAR_26[VAR_13->channel].medium != VAR_2) {
  FUNC_4(VAR_12, VAR_9);
  return -VAR_0;
 }

 if (VAR_13->addr_type == VAR_4) {





  VAR_13->addr_type = VAR_3;
  VAR_25 = 1;
  VAR_20 = 0;
 }





 if ((VAR_15->data_len + 10 + VAR_25) > VAR_6) {
  FUNC_4(VAR_12, VAR_9);
  return -VAR_1;
 }

 VAR_22 = (struct ipmi_ipmb_addr *) VAR_13;
 if (VAR_22->lun > 3) {
  FUNC_4(VAR_12, VAR_9);
  return -VAR_0;
 }

 FUNC_6(&VAR_17->addr, VAR_22, sizeof(*VAR_22));

 if (VAR_17->msg.netfn & 0x1) {




  FUNC_4(VAR_12, VAR_11);
  FUNC_2(VAR_16, VAR_15, VAR_22, VAR_14,
    VAR_14, VAR_25,
    VAR_18, VAR_19);





  VAR_16->user_data = VAR_17;
 } else {

  unsigned long VAR_28;

  FUNC_7(&VAR_12->seq_lock, VAR_28);

  if (FUNC_5(VAR_15))
   VAR_12->ipmb_maintenance_mode_timeout =
    VAR_8;

  if (VAR_12->ipmb_maintenance_mode_timeout && VAR_21 == 0)

   VAR_21 = VAR_7;





  VAR_27 = FUNC_3(VAR_12,
       VAR_17,
       VAR_21,
       VAR_20,
       VAR_25,
       &VAR_23,
       &VAR_24);
  if (VAR_27)




   goto out_err;

  FUNC_4(VAR_12, VAR_10);






  FUNC_2(VAR_16, VAR_15, VAR_22,
    FUNC_1(VAR_23, VAR_24),
    VAR_23, VAR_25,
    VAR_18, VAR_19);





  FUNC_6(VAR_17->msg_data, VAR_16->data,
         VAR_16->data_size);
  VAR_17->msg.data = VAR_17->msg_data;
  VAR_17->msg.data_len = VAR_16->data_size;
out_err:
  FUNC_8(&VAR_12->seq_lock, VAR_28);
 }

 return VAR_27;
}
