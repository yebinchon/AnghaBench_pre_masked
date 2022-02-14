
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipmi_smi_msg {int* rsp; int rsp_size; int data_size; int* data; struct ipmi_recv_msg* user_data; int msgid; } ;
struct ipmi_smi {int channel_list; int channels_ready; int si_dev; scalar_t__ in_shutdown; } ;
struct TYPE_3__ {int* data; int data_len; } ;
struct ipmi_recv_msg {int* msg_data; TYPE_1__ msg; int recv_type; } ;
struct ipmi_channel {scalar_t__ medium; } ;
struct TYPE_4__ {struct ipmi_channel* c; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct ipmi_smi*,struct ipmi_recv_msg*) ;
 int FUNC_2 (int ,char*,int,int,int,...) ;
 int FUNC_3 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_4 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_5 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_6 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_7 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_8 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_9 (struct ipmi_smi*,struct ipmi_smi_msg*) ;
 int FUNC_10 (struct ipmi_smi*,int ,int) ;
 int FUNC_11 (struct ipmi_smi*,int ) ;
 int FUNC_12 (char*,int*,int) ;
 int FUNC_13 (struct ipmi_smi*,int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_14(struct ipmi_smi *VAR_15,
          struct ipmi_smi_msg *VAR_16)
{
 int VAR_17;
 int VAR_18;

 FUNC_12("Recv:", VAR_16->rsp, VAR_16->rsp_size);

 if ((VAR_16->data_size >= 2)
     && (VAR_16->data[0] == (VAR_8 << 2))
     && (VAR_16->data[1] == VAR_12)
     && (VAR_16->user_data == ((void*)0))) {

  if (VAR_15->in_shutdown)
   goto free_msg;
  if ((VAR_16->rsp_size >= 3) && (VAR_16->rsp[2] != 0)
      && (VAR_16->rsp[2] != VAR_9)
      && (VAR_16->rsp[2] != VAR_5)
      && (VAR_16->rsp[2] != VAR_0)
      && (VAR_16->rsp[2] != VAR_7)) {
   int VAR_19 = VAR_16->rsp[3] & 0xf;
   struct ipmi_channel *VAR_20;



   VAR_20 = FUNC_0(VAR_15->channel_list)->c;
   if ((VAR_20[VAR_19].medium == 130)
       || (VAR_20[VAR_19].medium == 129))
    FUNC_13(VAR_15, VAR_14);
   else
    FUNC_13(VAR_15, VAR_13);
   FUNC_10(VAR_15, VAR_16->msgid, VAR_16->rsp[2]);
  } else

   FUNC_11(VAR_15, VAR_16->msgid);
free_msg:
  VAR_17 = 0;
  goto out;

 } else if (VAR_16->rsp_size < 2) {

  FUNC_2(VAR_15->si_dev,
    "BMC returned too small a message for netfn %x cmd %x, got %d bytes\n",
    (VAR_16->data[0] >> 2) | 1, VAR_16->data[1], VAR_16->rsp_size);


  VAR_16->rsp[0] = VAR_16->data[0] | (1 << 2);
  VAR_16->rsp[1] = VAR_16->data[1];
  VAR_16->rsp[2] = VAR_3;
  VAR_16->rsp_size = 3;
 } else if (((VAR_16->rsp[0] >> 2) != ((VAR_16->data[0] >> 2) | 1))
     || (VAR_16->rsp[1] != VAR_16->data[1])) {




  FUNC_2(VAR_15->si_dev,
    "BMC returned incorrect response, expected netfn %x cmd %x, got netfn %x cmd %x\n",
    (VAR_16->data[0] >> 2) | 1, VAR_16->data[1],
    VAR_16->rsp[0] >> 2, VAR_16->rsp[1]);


  VAR_16->rsp[0] = VAR_16->data[0] | (1 << 2);
  VAR_16->rsp[1] = VAR_16->data[1];
  VAR_16->rsp[2] = VAR_3;
  VAR_16->rsp_size = 3;
 }

 if ((VAR_16->rsp[0] == ((VAR_8|1) << 2))
     && (VAR_16->rsp[1] == VAR_12)
     && (VAR_16->user_data != ((void*)0))) {




  struct ipmi_recv_msg *VAR_21 = VAR_16->user_data;

  VAR_17 = 0;
  if (VAR_16->rsp_size < 2)

   goto out;

  VAR_18 = VAR_16->data[2] & 0x0f;
  if (VAR_18 >= VAR_6)

   goto out;

  if (!VAR_21)
   goto out;

  VAR_21->recv_type = VAR_11;
  VAR_21->msg.data = VAR_21->msg_data;
  VAR_21->msg.data_len = 1;
  VAR_21->msg_data[0] = VAR_16->rsp[2];
  FUNC_1(VAR_15, VAR_21);
 } else if ((VAR_16->rsp[0] == ((VAR_8|1) << 2))
     && (VAR_16->rsp[1] == VAR_4)) {
  struct ipmi_channel *VAR_22;


  VAR_18 = VAR_16->rsp[3] & 0xf;
  if (VAR_18 >= VAR_6) {

   VAR_17 = 0;
   goto out;
  }







  if (!VAR_15->channels_ready) {
   VAR_17 = 0;
   goto out;
  }

  VAR_22 = FUNC_0(VAR_15->channel_list)->c;

  switch (VAR_22[VAR_18].medium) {
  case 128:
   if (VAR_16->rsp[4] & 0x04) {




    VAR_17 = FUNC_5(VAR_15, VAR_16);
   } else {




    VAR_17 = FUNC_4(VAR_15, VAR_16);
   }
   break;

  case 130:
  case 129:
   if (VAR_16->rsp[6] & 0x04) {




    VAR_17 = FUNC_7(VAR_15, VAR_16);
   } else {




    VAR_17 = FUNC_6(VAR_15, VAR_16);
   }
   break;

  default:


   if ((VAR_22[VAR_18].medium >= VAR_2)
       && (VAR_22[VAR_18].medium
    <= VAR_1)) {
    VAR_17 = FUNC_8(VAR_15, VAR_16);
   } else {




    VAR_17 = 0;
   }
  }

 } else if ((VAR_16->rsp[0] == ((VAR_8|1) << 2))
     && (VAR_16->rsp[1] == VAR_10)) {

  VAR_17 = FUNC_9(VAR_15, VAR_16);
 } else {

  VAR_17 = FUNC_3(VAR_15, VAR_16);
 }

 out:
 return VAR_17;
}
