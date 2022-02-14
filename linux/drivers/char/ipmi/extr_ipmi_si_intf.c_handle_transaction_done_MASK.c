
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_4__ {int dev; int si_type; } ;
struct smi_info {int si_state; unsigned char msg_flags; struct ipmi_smi_msg* curr_msg; int supports_event_msg_buff; TYPE_2__ io; int si_sm; TYPE_1__* handlers; } ;
struct ipmi_smi_msg {unsigned int rsp_size; unsigned char* rsp; int (* done ) (struct ipmi_smi_msg*) ;} ;
struct TYPE_3__ {unsigned int (* get_result ) (int ,unsigned char*,int) ;int (* start_transaction ) (int ,unsigned char*,int) ;} ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (struct smi_info*,int) ;
 unsigned char FUNC_1 (struct smi_info*,int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smi_info*,struct ipmi_smi_msg*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_5 (struct smi_info*) ;
 int VAR_8 ;
 void* FUNC_6 () ;
 int FUNC_7 (struct smi_info*,int ) ;
 int FUNC_8 (struct smi_info*) ;
 unsigned int FUNC_9 (int ,unsigned char*,int) ;
 unsigned int FUNC_10 (int ,unsigned char*,int) ;
 unsigned int FUNC_11 (int ,unsigned char*,int) ;
 unsigned int FUNC_12 (int ,unsigned char*,int) ;
 unsigned int FUNC_13 (int ,unsigned char*,int) ;
 int FUNC_14 (struct ipmi_smi_msg*) ;
 unsigned int FUNC_15 (int ,unsigned char*,int) ;
 int FUNC_16 (struct ipmi_smi_msg*) ;
 unsigned int FUNC_17 (int ,unsigned char*,int) ;
 int FUNC_18 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_19(struct smi_info *VAR_9)
{
 struct ipmi_smi_msg *VAR_10;

 FUNC_2("Done");
 switch (VAR_9->si_state) {
 case 129:
  if (!VAR_9->curr_msg)
   break;

  VAR_9->curr_msg->rsp_size
   = VAR_9->handlers->get_result(
    VAR_9->si_sm,
    VAR_9->curr_msg->rsp,
    VAR_2);






  VAR_10 = VAR_9->curr_msg;
  VAR_9->curr_msg = ((void*)0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 131:
 {
  unsigned char VAR_11[4];
  unsigned int VAR_12;


  VAR_12 = VAR_9->handlers->get_result(VAR_9->si_sm, VAR_11, 4);
  if (VAR_11[2] != 0) {

   VAR_9->si_state = 129;
  } else if (VAR_12 < 4) {




   VAR_9->si_state = 129;
  } else {
   VAR_9->msg_flags = VAR_11[3];
   FUNC_5(VAR_9);
  }
  break;
 }

 case 133:
 {
  unsigned char VAR_13[3];


  VAR_9->handlers->get_result(VAR_9->si_sm, VAR_13, 3);
  if (VAR_13[2] != 0) {

   FUNC_4(VAR_9->io.dev,
     "Error clearing flags: %2.2x\n", VAR_13[2]);
  }
  VAR_9->si_state = 129;
  break;
 }

 case 132:
 {
  VAR_9->curr_msg->rsp_size
   = VAR_9->handlers->get_result(
    VAR_9->si_sm,
    VAR_9->curr_msg->rsp,
    VAR_2);






  VAR_10 = VAR_9->curr_msg;
  VAR_9->curr_msg = ((void*)0);
  if (VAR_10->rsp[2] != 0) {

   VAR_10->done(VAR_10);


   VAR_9->msg_flags &= ~VAR_0;
   FUNC_5(VAR_9);
  } else {
   FUNC_7(VAR_9, VAR_7);







   FUNC_5(VAR_9);

   FUNC_3(VAR_9, VAR_10);
  }
  break;
 }

 case 130:
 {
  VAR_9->curr_msg->rsp_size
   = VAR_9->handlers->get_result(
    VAR_9->si_sm,
    VAR_9->curr_msg->rsp,
    VAR_2);






  VAR_10 = VAR_9->curr_msg;
  VAR_9->curr_msg = ((void*)0);
  if (VAR_10->rsp[2] != 0) {

   VAR_10->done(VAR_10);


   VAR_9->msg_flags &= ~VAR_5;
   FUNC_5(VAR_9);
  } else {
   FUNC_7(VAR_9, VAR_8);







   FUNC_5(VAR_9);

   FUNC_3(VAR_9, VAR_10);
  }
  break;
 }

 case 134:
 {
  unsigned char VAR_14[4];
  u8 VAR_15;
  bool VAR_16;


  VAR_9->handlers->get_result(VAR_9->si_sm, VAR_14, 4);
  if (VAR_14[2] != 0) {
   FUNC_4(VAR_9->io.dev,
     "Couldn't get irq info: %x.\n", VAR_14[2]);
   FUNC_4(VAR_9->io.dev,
     "Maybe ok, but ipmi might run very slowly.\n");
   VAR_9->si_state = 129;
   break;
  }
  VAR_15 = FUNC_1(VAR_9, 0, &VAR_16);
  if (VAR_9->io.si_type == VAR_6)

   FUNC_0(VAR_9, VAR_16);
  if (VAR_15 != (VAR_14[3] & VAR_1)) {

   VAR_14[0] = (VAR_3 << 2);
   VAR_14[1] = VAR_4;
   VAR_14[2] = VAR_15 | (VAR_14[3] & ~VAR_1);
   VAR_9->handlers->start_transaction(
    VAR_9->si_sm, VAR_14, 3);
   VAR_9->si_state = 128;
  } else if (VAR_9->supports_event_msg_buff) {
   VAR_9->curr_msg = FUNC_6();
   if (!VAR_9->curr_msg) {
    VAR_9->si_state = 129;
    break;
   }
   FUNC_8(VAR_9);
  } else {
   VAR_9->si_state = 129;
  }
  break;
 }

 case 128:
 {
  unsigned char VAR_17[4];

  VAR_9->handlers->get_result(VAR_9->si_sm, VAR_17, 4);
  if (VAR_17[2] != 0)
   FUNC_4(VAR_9->io.dev,
     "Could not set the global enables: 0x%x.\n",
     VAR_17[2]);

  if (VAR_9->supports_event_msg_buff) {
   VAR_9->curr_msg = FUNC_6();
   if (!VAR_9->curr_msg) {
    VAR_9->si_state = 129;
    break;
   }
   FUNC_8(VAR_9);
  } else {
   VAR_9->si_state = 129;
  }
  break;
 }
 }
}
