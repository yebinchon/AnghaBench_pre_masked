
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int timer; } ;
struct sctp_association {int send_sack; scalar_t__ numduptsns; scalar_t__ delayed_ack; scalar_t__ data_pkts_seen; scalar_t__ sack_freq; scalar_t__ sctp_cmt_on_off; TYPE_1__ dack_timer; int cmt_dac_pkts_rcvd; scalar_t__ primary_destination; scalar_t__ alternate; int cumulative_tsn; int highest_tsn_inside_map; int highest_tsn_inside_nr_map; } ;
struct sctp_tcb {int sctp_ep; struct sctp_association asoc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct sctp_tcb*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct sctp_tcb*,int ) ;
 int FUNC_6 (struct sctp_tcb*,scalar_t__) ;
 int FUNC_7 (struct sctp_tcb*) ;
 int FUNC_8 (int ,int ,struct sctp_tcb*,int *) ;
 int FUNC_9 (int ,int ,struct sctp_tcb*,int *,scalar_t__) ;

void
FUNC_10(struct sctp_tcb *VAR_6, int VAR_7)
{
 struct sctp_association *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 FUNC_7(VAR_6);
 VAR_8 = &VAR_6->asoc;
 if (FUNC_4(VAR_8->highest_tsn_inside_nr_map, VAR_8->highest_tsn_inside_map)) {
  VAR_9 = VAR_8->highest_tsn_inside_nr_map;
 } else {
  VAR_9 = VAR_8->highest_tsn_inside_map;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_6->asoc.cumulative_tsn);





 if (FUNC_1(VAR_6) == VAR_3) {





  if (FUNC_2(&VAR_6->asoc.dack_timer.timer)) {
   FUNC_9(VAR_4,
       VAR_6->sctp_ep, VAR_6, ((void*)0),
       VAR_0 + VAR_1);
  }
  FUNC_6(VAR_6,
      ((VAR_6->asoc.alternate) ? VAR_6->asoc.alternate : VAR_6->asoc.primary_destination));
  if (VAR_10) {
   FUNC_5(VAR_6, VAR_2);
  }
 } else {




  VAR_6->asoc.cmt_dac_pkts_rcvd++;

  if ((VAR_6->asoc.send_sack == 1) ||

      ((VAR_7) && (VAR_10 == 0)) ||

      (VAR_6->asoc.numduptsns) ||
      (VAR_10) ||
      (VAR_6->asoc.delayed_ack == 0) ||
      (VAR_6->asoc.data_pkts_seen >= VAR_6->asoc.sack_freq)
      ) {

   if ((VAR_6->asoc.sctp_cmt_on_off > 0) &&
       (FUNC_0(VAR_5)) &&
       (VAR_6->asoc.send_sack == 0) &&
       (VAR_6->asoc.numduptsns == 0) &&
       (VAR_6->asoc.delayed_ack) &&
       (!FUNC_2(&VAR_6->asoc.dack_timer.timer))) {
    FUNC_8(VAR_4,
        VAR_6->sctp_ep, VAR_6, ((void*)0));
   } else {





    (void)FUNC_3(&VAR_6->asoc.dack_timer.timer);
    FUNC_5(VAR_6, VAR_2);
   }
  } else {
   if (!FUNC_2(&VAR_6->asoc.dack_timer.timer)) {
    FUNC_8(VAR_4,
        VAR_6->sctp_ep, VAR_6, ((void*)0));
   }
  }
 }
}
