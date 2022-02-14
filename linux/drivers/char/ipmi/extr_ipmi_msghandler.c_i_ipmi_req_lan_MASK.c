
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_ipmi_msg {scalar_t__ data_len; } ;
struct ipmi_smi_msg {int data_size; struct ipmi_lan_addr* data; struct ipmi_recv_msg* user_data; } ;
struct ipmi_smi {int seq_lock; int channel_list; } ;
struct TYPE_3__ {int netfn; int data_len; int * data; } ;
struct ipmi_recv_msg {TYPE_1__ msg; int * msg_data; int addr; } ;
struct ipmi_lan_addr {int lun; } ;
struct ipmi_channel {scalar_t__ medium; } ;
struct ipmi_addr {size_t channel; } ;
struct TYPE_4__ {struct ipmi_channel* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int ) ;
 long FUNC_1 (unsigned char,long) ;
 int FUNC_2 (struct ipmi_smi_msg*,struct kernel_ipmi_msg*,struct ipmi_lan_addr*,long,unsigned char,unsigned char) ;
 int FUNC_3 (struct ipmi_smi*,struct ipmi_recv_msg*,unsigned int,int,int ,unsigned char*,long*) ;
 int FUNC_4 (struct ipmi_smi*,int ) ;
 int FUNC_5 (int *,struct ipmi_lan_addr*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ipmi_smi *VAR_9,
     struct ipmi_addr *VAR_10,
     long VAR_11,
     struct kernel_ipmi_msg *VAR_12,
     struct ipmi_smi_msg *VAR_13,
     struct ipmi_recv_msg *VAR_14,
     unsigned char VAR_15,
     int VAR_16,
     unsigned int VAR_17)
{
 struct ipmi_lan_addr *VAR_18;
 unsigned char VAR_19;
 long VAR_20;
 struct ipmi_channel *VAR_21;
 int VAR_22 = 0;

 if (VAR_10->channel >= VAR_4) {
  FUNC_4(VAR_9, VAR_6);
  return -VAR_0;
 }

 VAR_21 = FUNC_0(VAR_9->channel_list)->c;

 if ((VAR_21[VAR_10->channel].medium
    != VAR_2)
   && (VAR_21[VAR_10->channel].medium
       != VAR_3)) {
  FUNC_4(VAR_9, VAR_6);
  return -VAR_0;
 }


 if ((VAR_12->data_len + 12) > VAR_5) {
  FUNC_4(VAR_9, VAR_6);
  return -VAR_1;
 }

 VAR_18 = (struct ipmi_lan_addr *) VAR_10;
 if (VAR_18->lun > 3) {
  FUNC_4(VAR_9, VAR_6);
  return -VAR_0;
 }

 FUNC_5(&VAR_14->addr, VAR_18, sizeof(*VAR_18));

 if (VAR_14->msg.netfn & 0x1) {




  FUNC_4(VAR_9, VAR_8);
  FUNC_2(VAR_13, VAR_12, VAR_18, VAR_11,
          VAR_11, VAR_15);





  VAR_13->user_data = VAR_14;
 } else {

  unsigned long VAR_23;

  FUNC_6(&VAR_9->seq_lock, VAR_23);





  VAR_22 = FUNC_3(VAR_9,
       VAR_14,
       VAR_17,
       VAR_16,
       0,
       &VAR_19,
       &VAR_20);
  if (VAR_22)




   goto out_err;

  FUNC_4(VAR_9, VAR_7);






  FUNC_2(VAR_13, VAR_12, VAR_18,
          FUNC_1(VAR_19, VAR_20),
          VAR_19, VAR_15);





  FUNC_5(VAR_14->msg_data, VAR_13->data,
         VAR_13->data_size);
  VAR_14->msg.data = VAR_14->msg_data;
  VAR_14->msg.data_len = VAR_13->data_size;
out_err:
  FUNC_7(&VAR_9->seq_lock, VAR_23);
 }

 return VAR_22;
}
