
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sctp_tcb {TYPE_2__* sctp_socket; TYPE_1__* sctp_ep; } ;
struct sctp_stream_in {scalar_t__ pd_api_started; scalar_t__ last_mid_delivered; int inqueue; int uno_inqueue; } ;
struct sctp_queued_to_read {scalar_t__ end_added; scalar_t__ mid; scalar_t__ on_strm_q; scalar_t__ on_read_q; scalar_t__ length; int pdapi_started; int sinfo_flags; scalar_t__ last_frag_seen; int sinfo_tsn; scalar_t__ first_frag_seen; int fsn_included; int top_fsn; } ;
struct sctp_association {scalar_t__ idata_supported; scalar_t__ size_on_all_streams; int cnt_on_all_streams; } ;
struct TYPE_4__ {int so_rcv; } ;
struct TYPE_3__ {scalar_t__ partial_delivery_point; } ;


 int FUNC_0 (int ,char*,struct sctp_queued_to_read*,scalar_t__,scalar_t__,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 struct sctp_queued_to_read* FUNC_4 (int *) ;
 struct sctp_queued_to_read* FUNC_5 (struct sctp_queued_to_read*,int ) ;
 int FUNC_6 (int *,struct sctp_queued_to_read*,int ) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 int VAR_6 ;
 int FUNC_8 (char*,struct sctp_queued_to_read*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,struct sctp_tcb*,struct sctp_queued_to_read*,int *,scalar_t__,int,int ) ;
 scalar_t__ FUNC_10 (struct sctp_tcb*,struct sctp_association*,struct sctp_stream_in*,struct sctp_queued_to_read*,scalar_t__,int) ;
 int FUNC_11 (struct sctp_association*,int ) ;
 int FUNC_12 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_13(struct sctp_tcb *VAR_8, struct sctp_association *VAR_9,
    struct sctp_stream_in *VAR_10, int VAR_11)
{






 struct sctp_queued_to_read *VAR_12, *VAR_13 = ((void*)0);
 uint32_t VAR_14;
 uint32_t VAR_15;
 int VAR_16 = 0;

 if (VAR_8->sctp_socket) {
  VAR_15 = FUNC_7(FUNC_2(VAR_8->sctp_socket) >> VAR_4,
      VAR_8->sctp_ep->partial_delivery_point);
 } else {
  VAR_15 = VAR_8->sctp_ep->partial_delivery_point;
 }
 VAR_12 = FUNC_4(&VAR_10->uno_inqueue);

 if ((VAR_12 != ((void*)0)) &&
     (VAR_9->idata_supported == 0)) {

  if (FUNC_10(VAR_8, VAR_9, VAR_10, VAR_12, VAR_15, VAR_11)) {
   goto done_un;
  }
 }
 if (VAR_10->pd_api_started) {

  return (0);
 }
 while (VAR_12) {
  FUNC_0(VAR_1, "Looking at control: %p e(%d) ssn: %u top_fsn: %u inc_fsn: %u -uo\n",
      VAR_12, VAR_12->end_added, VAR_12->mid, VAR_12->top_fsn, VAR_12->fsn_included);
  VAR_13 = FUNC_5(VAR_12, VAR_6);
  if (VAR_12->end_added) {

   if (VAR_12->on_strm_q) {






    FUNC_3(VAR_7);
    FUNC_6(&VAR_10->uno_inqueue, VAR_12, VAR_6);
    VAR_12->on_strm_q = 0;
   }
   if (VAR_12->on_read_q == 0) {
    FUNC_9(VAR_8->sctp_ep, VAR_8,
        VAR_12,
        &VAR_8->sctp_socket->so_rcv, VAR_12->end_added,
        VAR_11, VAR_5);
   }
  } else {

   if ((VAR_12->length >= VAR_15) && (VAR_10->pd_api_started == 0)) {
    VAR_10->pd_api_started = 1;
    VAR_12->pdapi_started = 1;
    FUNC_9(VAR_8->sctp_ep, VAR_8,
        VAR_12,
        &VAR_8->sctp_socket->so_rcv, VAR_12->end_added,
        VAR_11, VAR_5);

    break;
   }
  }
  VAR_12 = VAR_13;
 }
done_un:
 VAR_12 = FUNC_4(&VAR_10->inqueue);
 if (VAR_10->pd_api_started) {

  return (0);
 }
 if (VAR_12 == ((void*)0)) {
  return (VAR_16);
 }
 if (FUNC_1(VAR_9->idata_supported, VAR_10->last_mid_delivered, VAR_12->mid)) {






  VAR_13 = FUNC_5(VAR_12, VAR_6);
  FUNC_0(VAR_1,
      "Looking at control: %p e(%d) ssn: %u top_fsn: %u inc_fsn: %u (lastdel: %u)- o\n",
      VAR_12, VAR_12->end_added, VAR_12->mid,
      VAR_12->top_fsn, VAR_12->fsn_included,
      VAR_10->last_mid_delivered);
  if (VAR_12->end_added) {
   if (VAR_12->on_strm_q) {






    FUNC_3(VAR_7);
    FUNC_6(&VAR_10->inqueue, VAR_12, VAR_6);
    if (VAR_9->size_on_all_streams >= VAR_12->length) {
     VAR_9->size_on_all_streams -= VAR_12->length;
    } else {



     VAR_9->size_on_all_streams = 0;

    }
    FUNC_12(VAR_9->cnt_on_all_streams);
    VAR_12->on_strm_q = 0;
   }
   if (VAR_10->pd_api_started && VAR_12->pdapi_started) {
    VAR_12->pdapi_started = 0;
    VAR_10->pd_api_started = 0;
   }
   if (VAR_12->on_read_q == 0) {
    FUNC_9(VAR_8->sctp_ep, VAR_8,
        VAR_12,
        &VAR_8->sctp_socket->so_rcv, VAR_12->end_added,
        VAR_11, VAR_5);
   }
   VAR_12 = VAR_13;
  }
 }
 if (VAR_10->pd_api_started) {




  return (0);
 }
deliver_more:
 VAR_14 = VAR_10->last_mid_delivered + 1;
 if (VAR_12) {
  FUNC_0(VAR_1,
      "Looking at control: %p e(%d) ssn: %u top_fsn: %u inc_fsn: %u (nxtdel: %u)- o\n",
      VAR_12, VAR_12->end_added, VAR_12->mid, VAR_12->top_fsn, VAR_12->fsn_included,
      VAR_14);
  VAR_13 = FUNC_5(VAR_12, VAR_6);
  if (FUNC_1(VAR_9->idata_supported, VAR_12->mid, VAR_14) &&
      (VAR_12->first_frag_seen)) {
   int VAR_17;


   if (VAR_12->end_added) {

    if (VAR_12->on_strm_q) {






     FUNC_3(VAR_7);
     FUNC_6(&VAR_10->inqueue, VAR_12, VAR_6);
     if (VAR_9->size_on_all_streams >= VAR_12->length) {
      VAR_9->size_on_all_streams -= VAR_12->length;
     } else {



      VAR_9->size_on_all_streams = 0;

     }
     FUNC_12(VAR_9->cnt_on_all_streams);
     VAR_12->on_strm_q = 0;
    }
    VAR_16++;
   }
   if (((VAR_12->sinfo_flags >> 8) & VAR_0) == VAR_0) {




    FUNC_11(VAR_9, VAR_12->sinfo_tsn);
   } else if (VAR_12->end_added == 0) {




    if ((VAR_12->length < VAR_15) || (VAR_10->pd_api_started)) {




     goto out;
    }
   }
   VAR_17 = (VAR_12->end_added) && (VAR_12->last_frag_seen);
   if (VAR_12->on_read_q == 0) {
    if (!VAR_17) {
     if (VAR_9->size_on_all_streams >= VAR_12->length) {
      VAR_9->size_on_all_streams -= VAR_12->length;
     } else {



      VAR_9->size_on_all_streams = 0;

     }
     VAR_10->pd_api_started = 1;
     VAR_12->pdapi_started = 1;
    }
    FUNC_9(VAR_8->sctp_ep, VAR_8,
        VAR_12,
        &VAR_8->sctp_socket->so_rcv, VAR_12->end_added,
        VAR_11, VAR_5);
   }
   VAR_10->last_mid_delivered = VAR_14;
   if (VAR_17) {
    VAR_12 = VAR_13;
    goto deliver_more;
   }
  }
 }
out:
 return (VAR_16);
}
