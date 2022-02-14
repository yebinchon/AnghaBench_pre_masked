
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* sctp_ss_add_to_stream ) (struct sctp_tcb*,TYPE_3__*,struct sctp_stream_out*,struct sctp_stream_queue_pending*,int) ;} ;
struct TYPE_4__ {int active_keyid; } ;
struct TYPE_6__ {size_t streamoutcnt; size_t stream_locked_on; int state; TYPE_2__ ss_functions; int stream_queue_cnt; int peer_auth_chunks; TYPE_1__ authinfo; struct sctp_stream_out* strmout; scalar_t__ stream_locked; } ;
struct sctp_tcb {TYPE_3__ asoc; } ;
struct sctp_stream_queue_pending {int sinfo_flags; size_t sid; int msg_is_complete; int sender_all_done; int holds_key_ref; scalar_t__ length; int auth_keyid; struct mbuf* tail_mbuf; struct mbuf* data; scalar_t__ some_taken; int ts; struct sctp_nets* net; scalar_t__ fsn; int context; int ppid; int timetolive; } ;
struct sctp_stream_out {int outqueue; } ;
struct sctp_sndrcvinfo {size_t sinfo_stream; int sinfo_flags; int sinfo_keynumber; scalar_t__ sinfo_keynumber_valid; int sinfo_context; int sinfo_ppid; int sinfo_timetolive; } ;
struct sctp_nets {int ref_count; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sctp_tcb*) ;
 int FUNC_4 (int *,struct sctp_tcb*,int *,int ,int) ;
 int FUNC_5 (struct mbuf*,int *,struct sctp_tcb*,struct sctp_nets*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct sctp_tcb*) ;
 int FUNC_7 (struct sctp_tcb*) ;
 int FUNC_8 (int *,struct sctp_stream_queue_pending*,int ) ;
 int FUNC_9 (int *,int) ;
 int VAR_10 ;
 int FUNC_10 (struct sctp_tcb*,struct sctp_stream_queue_pending*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct sctp_tcb*,int ) ;
 int FUNC_13 (struct mbuf*) ;
 int FUNC_14 (struct sctp_stream_queue_pending*) ;
 int FUNC_15 (struct sctp_tcb*,scalar_t__) ;
 int FUNC_16 (struct sctp_tcb*,TYPE_3__*,struct sctp_stream_out*,struct sctp_stream_queue_pending*,int) ;

__attribute__((used)) static int
FUNC_17(struct sctp_tcb *VAR_11,
    struct sctp_nets *VAR_12,
    struct mbuf *VAR_13,
    struct sctp_sndrcvinfo *VAR_14, int VAR_15)
{
 int VAR_16 = 0;
 struct mbuf *VAR_17;
 struct sctp_stream_queue_pending *VAR_18 = ((void*)0);
 struct sctp_stream_out *VAR_19;





 if (VAR_14->sinfo_stream >= VAR_11->asoc.streamoutcnt) {

  FUNC_5(VAR_13, ((void*)0), VAR_11, VAR_12, VAR_5, VAR_1);
  VAR_16 = VAR_1;
  goto out_now;
 }
 if ((VAR_11->asoc.stream_locked) &&
     (VAR_11->asoc.stream_locked_on != VAR_14->sinfo_stream)) {
  FUNC_5(VAR_13, ((void*)0), VAR_11, VAR_12, VAR_5, VAR_1);
  VAR_16 = VAR_1;
  goto out_now;
 }
 VAR_19 = &VAR_11->asoc.strmout[VAR_14->sinfo_stream];

 if ((FUNC_3(VAR_11) == VAR_9) ||
     (FUNC_3(VAR_11) == VAR_6) ||
     (FUNC_3(VAR_11) == VAR_8) ||
     (VAR_11->asoc.state & VAR_7)) {

  FUNC_4(((void*)0), VAR_11, ((void*)0), VAR_5, VAR_0);
  VAR_16 = VAR_0;
  goto out_now;
 }
 FUNC_10(VAR_11, VAR_18);
 if (VAR_18 == ((void*)0)) {
  FUNC_4(((void*)0), VAR_11, ((void*)0), VAR_5, VAR_2);
  VAR_16 = VAR_2;
  goto out_now;
 }
 VAR_18->sinfo_flags = VAR_14->sinfo_flags;
 VAR_18->timetolive = VAR_14->sinfo_timetolive;
 VAR_18->ppid = VAR_14->sinfo_ppid;
 VAR_18->context = VAR_14->sinfo_context;
 VAR_18->fsn = 0;
 if (VAR_18->sinfo_flags & VAR_3) {
  VAR_18->net = VAR_12;
  FUNC_9(&VAR_18->net->ref_count, 1);
 } else {
  VAR_18->net = ((void*)0);
 }
 (void)FUNC_2(&VAR_18->ts);
 VAR_18->sid = VAR_14->sinfo_stream;
 VAR_18->msg_is_complete = 1;
 VAR_18->sender_all_done = 1;
 VAR_18->some_taken = 0;
 VAR_18->data = VAR_13;
 VAR_18->tail_mbuf = ((void*)0);
 FUNC_14(VAR_18);





 VAR_18->length = 0;
 for (VAR_17 = VAR_13; VAR_17; VAR_17 = FUNC_1(VAR_17)) {
  if (FUNC_1(VAR_17) == ((void*)0))
   VAR_18->tail_mbuf = VAR_17;
  VAR_18->length += FUNC_0(VAR_17);
 }
 if (VAR_14->sinfo_keynumber_valid) {
  VAR_18->auth_keyid = VAR_14->sinfo_keynumber;
 } else {
  VAR_18->auth_keyid = VAR_11->asoc.authinfo.active_keyid;
 }
 if (FUNC_11(VAR_4, VAR_11->asoc.peer_auth_chunks)) {
  FUNC_12(VAR_11, VAR_18->auth_keyid);
  VAR_18->holds_key_ref = 1;
 }
 if (VAR_15 == 0) {
  FUNC_6(VAR_11);
 }
 FUNC_15(VAR_11, VAR_18->length);
 FUNC_9(&VAR_11->asoc.stream_queue_cnt, 1);
 FUNC_8(&VAR_19->outqueue, VAR_18, VAR_10);
 VAR_11->asoc.ss_functions.sctp_ss_add_to_stream(VAR_11, &VAR_11->asoc, VAR_19, VAR_18, 1);
 VAR_13 = ((void*)0);
 if (VAR_15 == 0) {
  FUNC_7(VAR_11);
 }
out_now:
 if (VAR_13) {
  FUNC_13(VAR_13);
 }
 return (VAR_16);
}
