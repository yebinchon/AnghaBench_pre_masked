
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vnet {int dummy; } ;
struct timeval {int tv_sec; } ;
struct socket {int dummy; } ;
struct sctp_tmit_chunk {struct sctp_nets* whoTo; } ;
struct sctp_timer {int type; void* self; int stopped_from; int timer; scalar_t__ vnet; scalar_t__ net; scalar_t__ tcb; scalar_t__ ep; } ;
struct TYPE_4__ {scalar_t__ state; int refcnt; int timoshutdownack; int timocookie; int timoheartbeat; int timoshutdown; int timosack; int timoinit; int sent_queue; int sent_queue_cnt; int num_send_timers_up; int timodata; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_nets {int dest_state; } ;
struct TYPE_3__ {int ** secret_key; scalar_t__ current_secret_number; scalar_t__ last_secret_number; int time_of_secret_change; } ;
struct sctp_inpcb {TYPE_1__ sctp_ep; int * sctp_socket; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct vnet*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct timeval*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct sctp_inpcb*) ;
 int FUNC_6 (struct sctp_inpcb*) ;
 struct socket* FUNC_7 (struct sctp_inpcb*) ;
 int FUNC_8 (struct sctp_inpcb*) ;
 int FUNC_9 (struct sctp_inpcb*) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (struct socket*,int) ;
 int FUNC_15 (struct socket*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sctp_tcb*) ;
 int FUNC_18 (struct sctp_tcb*) ;
 int FUNC_19 (struct sctp_tcb*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 struct sctp_tmit_chunk* FUNC_22 (int *) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (struct sctp_inpcb*,struct sctp_tcb*,struct mbuf*,int ) ;
 int FUNC_26 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_27 (int,int ) ;
 int FUNC_28 (int,struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_29 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_30 (struct sctp_inpcb*,struct sctp_tcb*,int ,int ) ;
 int FUNC_31 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_32 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int VAR_21 ;
 int FUNC_33 (TYPE_2__*) ;
 int FUNC_34 (struct sctp_inpcb*,struct sctp_tcb*,int ,scalar_t__) ;
 struct mbuf* FUNC_35 (int ,char*) ;
 int FUNC_36 () ;
 int FUNC_37 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_38 (struct sctp_inpcb*,int ,int ) ;
 int FUNC_39 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_40 (TYPE_1__*) ;
 int FUNC_41 (struct sctp_tcb*,int ) ;
 int FUNC_42 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_43 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_44 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_45 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_46 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_47 (int const,struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_48 (int const,struct sctp_inpcb*,struct sctp_tcb*,int *,scalar_t__) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

void
FUNC_49(void *VAR_38)
{
 struct sctp_inpcb *VAR_39;
 struct sctp_tcb *VAR_40;
 struct sctp_nets *VAR_41;
 struct sctp_timer *VAR_42;
 struct mbuf *VAR_43;



 int VAR_44;
 int VAR_45;

 VAR_42 = (struct sctp_timer *)VAR_38;
 VAR_39 = (struct sctp_inpcb *)VAR_42->ep;
 VAR_40 = (struct sctp_tcb *)VAR_42->tcb;
 VAR_41 = (struct sctp_nets *)VAR_42->net;
 FUNC_1((struct vnet *)VAR_42->vnet);
 VAR_44 = 1;







 if (VAR_42->self != (void *)VAR_42) {




  FUNC_0();
  return;
 }
 VAR_42->stopped_from = 0xa001;
 if (!FUNC_10(VAR_42->type)) {




  FUNC_0();
  return;
 }
 VAR_42->stopped_from = 0xa002;
 if ((VAR_42->type != 144) && (VAR_39 == ((void*)0))) {
  FUNC_0();
  return;
 }

 VAR_42->stopped_from = 0xa003;
 if (VAR_39) {
  FUNC_6(VAR_39);
  if ((VAR_39->sctp_socket == ((void*)0)) &&
      ((VAR_42->type != 137) &&
      (VAR_42->type != 138) &&
      (VAR_42->type != 132) &&
      (VAR_42->type != 133) &&
      (VAR_42->type != 139) &&
      (VAR_42->type != 131) &&
      (VAR_42->type != 130) &&
      (VAR_42->type != 129) &&
      (VAR_42->type != 142))) {
   FUNC_5(VAR_39);
   FUNC_0();
   return;
  }
 }
 VAR_42->stopped_from = 0xa004;
 if (VAR_40) {
  FUNC_23(&VAR_40->asoc.refcnt, 1);
  if (VAR_40->asoc.state == 0) {
   FUNC_23(&VAR_40->asoc.refcnt, -1);
   if (VAR_39) {
    FUNC_5(VAR_39);
   }
   FUNC_0();
   return;
  }
 }
 VAR_45 = VAR_42->type;
 VAR_42->stopped_from = 0xa005;
 FUNC_2(VAR_2, "Timer type %d goes off\n", VAR_45);
 if (!FUNC_11(&VAR_42->timer)) {
  if (VAR_39) {
   FUNC_5(VAR_39);
  }
  if (VAR_40) {
   FUNC_23(&VAR_40->asoc.refcnt, -1);
  }
  FUNC_0();
  return;
 }
 VAR_42->stopped_from = 0xa006;

 if (VAR_40) {
  FUNC_17(VAR_40);
  FUNC_23(&VAR_40->asoc.refcnt, -1);
  if ((VAR_45 != 142) &&
      ((VAR_40->asoc.state == 0) ||
      (VAR_40->asoc.state & VAR_20))) {
   FUNC_19(VAR_40);
   if (VAR_39) {
    FUNC_5(VAR_39);
   }
   FUNC_0();
   return;
  }
 } else if (VAR_39 != ((void*)0)) {
  if (VAR_45 != 137) {
   FUNC_8(VAR_39);
  }
 } else {
  FUNC_20();
 }

 VAR_42->stopped_from = VAR_45;


 if (FUNC_13(&VAR_42->timer)) {



  goto get_out;
 }
 if (!FUNC_11(&VAR_42->timer)) {



  goto get_out;
 }
 FUNC_12(&VAR_42->timer);


 switch (VAR_45) {
 case 144:
  FUNC_36();
  break;
 case 132:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_26);
  VAR_40->asoc.timodata++;
  VAR_40->asoc.num_send_timers_up--;
  if (VAR_40->asoc.num_send_timers_up < 0) {
   VAR_40->asoc.num_send_timers_up = 0;
  }
  FUNC_18(VAR_40);
  if (FUNC_46(VAR_39, VAR_40, VAR_41)) {


   goto out_decr;
  }
  FUNC_18(VAR_40);



  FUNC_30(VAR_39, VAR_40, VAR_18, VAR_19);
  if ((VAR_40->asoc.num_send_timers_up == 0) &&
      (VAR_40->asoc.sent_queue_cnt > 0)) {
   struct sctp_tmit_chunk *VAR_46;







   VAR_46 = FUNC_22(&VAR_40->asoc.sent_queue);
   FUNC_47(132, VAR_39, VAR_40,
       VAR_46->whoTo);
  }
  break;
 case 138:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_29);
  VAR_40->asoc.timoinit++;
  if (FUNC_45(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }

  VAR_44 = 0;
  break;
 case 133:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_32);
  VAR_40->asoc.timosack++;
  FUNC_41(VAR_40, VAR_19);



  FUNC_30(VAR_39, VAR_40, VAR_14, VAR_19);
  break;
 case 131:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  if (FUNC_42(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }
  FUNC_16(VAR_34);
  VAR_40->asoc.timoshutdown++;



  FUNC_30(VAR_39, VAR_40, VAR_16, VAR_19);
  break;
 case 139:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0)) || (VAR_41 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_28);
  VAR_40->asoc.timoheartbeat++;
  if (FUNC_37(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }



  if (!(VAR_41->dest_state & VAR_0)) {
   FUNC_47(139, VAR_39, VAR_40, VAR_41);
   FUNC_30(VAR_39, VAR_40, VAR_13, VAR_19);
  }
  break;
 case 140:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }

  if (FUNC_31(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }
  FUNC_16(VAR_25);
  VAR_40->asoc.timocookie++;







  FUNC_30(VAR_39, VAR_40, VAR_18, VAR_19);
  break;
 case 136:
  {
   struct timeval VAR_47;
   int VAR_48, VAR_49;

   if (VAR_39 == ((void*)0)) {
    break;
   }
   FUNC_16(VAR_33);
   (void)FUNC_4(&VAR_47);
   VAR_39->sctp_ep.time_of_secret_change = VAR_47.tv_sec;
   VAR_39->sctp_ep.last_secret_number =
       VAR_39->sctp_ep.current_secret_number;
   VAR_39->sctp_ep.current_secret_number++;
   if (VAR_39->sctp_ep.current_secret_number >=
       VAR_5) {
    VAR_39->sctp_ep.current_secret_number = 0;
   }
   VAR_49 = (int)VAR_39->sctp_ep.current_secret_number;
   for (VAR_48 = 0; VAR_48 < VAR_10; VAR_48++) {
    VAR_39->sctp_ep.secret_key[VAR_49][VAR_48] =
        FUNC_40(&VAR_39->sctp_ep);
   }
   FUNC_47(136, VAR_39, VAR_40, VAR_41);
  }
  VAR_44 = 0;
  break;
 case 135:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_31);
  FUNC_39(VAR_39, VAR_40, VAR_41);
  VAR_44 = 0;
  break;
 case 130:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  if (FUNC_43(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }
  FUNC_16(VAR_35);
  VAR_40->asoc.timoshutdownack++;



  FUNC_30(VAR_39, VAR_40, VAR_15, VAR_19);
  break;
 case 129:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_36);
  VAR_43 = FUNC_35(FUNC_3(VAR_21),
      "Shutdown guard timer expired");
  FUNC_25(VAR_39, VAR_40, VAR_43, VAR_19);

  goto out_decr;

 case 128:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  if (FUNC_44(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }
  FUNC_16(VAR_37);
  FUNC_30(VAR_39, VAR_40, VAR_17, VAR_19);
  break;
 case 143:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  if (FUNC_26(VAR_39, VAR_40, VAR_41)) {

   goto out_decr;
  }
  FUNC_16(VAR_22);



  FUNC_30(VAR_39, VAR_40, VAR_11, VAR_19);
  break;
 case 134:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_32(VAR_39, VAR_40, VAR_41);
  FUNC_16(VAR_27);
  break;

 case 141:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_24);
  FUNC_29(VAR_39, VAR_40, VAR_41);
  FUNC_30(VAR_39, VAR_40, VAR_12, VAR_19);
  VAR_44 = 0;
  break;
 case 142:
  if ((VAR_40 == ((void*)0)) || (VAR_39 == ((void*)0))) {
   break;
  }
  FUNC_16(VAR_23);

  FUNC_5(VAR_39);
  FUNC_48(142, VAR_39, VAR_40, ((void*)0),
      VAR_4 + VAR_6);
  (void)FUNC_34(VAR_39, VAR_40, VAR_9,
      VAR_4 + VAR_7);







  VAR_40 = ((void*)0);
  goto out_no_decr;
 case 137:
  FUNC_16(VAR_30);
  if (VAR_39 == ((void*)0)) {
   break;
  }




  FUNC_5(VAR_39);
  FUNC_48(137, VAR_39, ((void*)0), ((void*)0),
      VAR_4 + VAR_8);
  FUNC_38(VAR_39, VAR_3,
      VAR_1);
  VAR_39 = ((void*)0);
  goto out_no_decr;
 default:
  FUNC_2(VAR_2, "sctp_timeout_handler:unknown timer %d\n",
      VAR_45);
  break;
 }





 if ((VAR_44) && VAR_40) {







  FUNC_33(&VAR_40->asoc);
 }
get_out:
 if (VAR_40) {
  FUNC_19(VAR_40);
 } else if (VAR_39 != ((void*)0)) {
  FUNC_9(VAR_39);
 } else {
  FUNC_21();
 }

out_decr:
 if (VAR_39) {
  FUNC_5(VAR_39);
 }

out_no_decr:
 FUNC_2(VAR_2, "Timer now complete (type = %d)\n", VAR_45);
 FUNC_0();
}
