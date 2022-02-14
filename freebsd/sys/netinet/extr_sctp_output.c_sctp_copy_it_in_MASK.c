
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct uio {scalar_t__ uio_resid; } ;
struct TYPE_3__ {int active_keyid; } ;
struct TYPE_4__ {int peer_auth_chunks; TYPE_1__ authinfo; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_stream_queue_pending {int sinfo_flags; scalar_t__ length; int msg_is_complete; int holds_key_ref; struct sctp_nets* net; int auth_keyid; int * tail_mbuf; int data; scalar_t__ put_last_out; scalar_t__ some_taken; scalar_t__ sender_all_done; int sid; int ts; scalar_t__ fsn; int context; int ppid; int timetolive; scalar_t__ act_flags; } ;
struct sctp_sndrcvinfo {int sinfo_flags; int sinfo_keynumber; scalar_t__ sinfo_keynumber_valid; int sinfo_stream; int sinfo_context; int sinfo_ppid; int sinfo_timetolive; } ;
struct sctp_nets {int ref_count; } ;
struct sctp_association {int state; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sctp_tcb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sctp_tcb*) ;
 int FUNC_3 (int *,struct sctp_tcb*,struct sctp_nets*,int ,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct sctp_tcb*,struct sctp_stream_queue_pending*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sctp_tcb*,int ) ;
 int FUNC_9 (struct sctp_stream_queue_pending*,struct uio*,int) ;
 int FUNC_10 (struct sctp_tcb*,struct sctp_stream_queue_pending*,int ) ;
 int FUNC_11 (struct sctp_stream_queue_pending*) ;

__attribute__((used)) static struct sctp_stream_queue_pending *
FUNC_12(struct sctp_tcb *VAR_12,
    struct sctp_association *VAR_13,
    struct sctp_sndrcvinfo *VAR_14,
    struct uio *VAR_15,
    struct sctp_nets *VAR_16,
    ssize_t VAR_17,
    int VAR_18,
    int *VAR_19)
{
 struct sctp_stream_queue_pending *VAR_20 = ((void*)0);
 int VAR_21;

 *VAR_19 = 0;

 if ((FUNC_2(VAR_12) == VAR_11) ||
     (FUNC_2(VAR_12) == VAR_8) ||
     (FUNC_2(VAR_12) == VAR_10) ||
     (VAR_13->state & VAR_9)) {

  FUNC_3(((void*)0), VAR_12, ((void*)0), VAR_6, VAR_0);
  *VAR_19 = VAR_0;
  goto out_now;
 }
 FUNC_6(VAR_12, VAR_20);
 if (VAR_20 == ((void*)0)) {
  FUNC_3(((void*)0), VAR_12, VAR_16, VAR_6, VAR_1);
  *VAR_19 = VAR_1;
  goto out_now;
 }
 VAR_20->act_flags = 0;
 VAR_20->sender_all_done = 0;
 VAR_20->sinfo_flags = VAR_14->sinfo_flags;
 VAR_20->timetolive = VAR_14->sinfo_timetolive;
 VAR_20->ppid = VAR_14->sinfo_ppid;
 VAR_20->context = VAR_14->sinfo_context;
 VAR_20->fsn = 0;
 (void)FUNC_1(&VAR_20->ts);

 VAR_20->sid = VAR_14->sinfo_stream;
 VAR_20->length = (uint32_t)FUNC_5(VAR_15->uio_resid, VAR_17);
 if ((VAR_20->length == (uint32_t)VAR_15->uio_resid) &&
     ((VAR_18 == 0) ||
     (VAR_14->sinfo_flags & VAR_4) ||
     (VAR_18 && (VAR_14->sinfo_flags & VAR_5)))) {
  VAR_20->msg_is_complete = 1;
 } else {
  VAR_20->msg_is_complete = 0;
 }
 VAR_20->sender_all_done = 0;
 VAR_20->some_taken = 0;
 VAR_20->put_last_out = 0;
 VAR_21 = FUNC_0(VAR_12);
 VAR_20->data = *(VAR_20->tail_mbuf = ((void*)0));
 if (VAR_20->length == 0) {
  goto skip_copy;
 }
 if (VAR_14->sinfo_keynumber_valid) {
  VAR_20->auth_keyid = VAR_14->sinfo_keynumber;
 } else {
  VAR_20->auth_keyid = VAR_12->asoc.authinfo.active_keyid;
 }
 if (FUNC_7(VAR_3, VAR_12->asoc.peer_auth_chunks)) {
  FUNC_8(VAR_12, VAR_20->auth_keyid);
  VAR_20->holds_key_ref = 1;
 }
 *VAR_19 = FUNC_9(VAR_20, VAR_15, VAR_21);
skip_copy:
 if (*VAR_19) {
  FUNC_10(VAR_12, VAR_20, VAR_7);
  VAR_20 = ((void*)0);
 } else {
  if (VAR_20->sinfo_flags & VAR_2) {
   VAR_20->net = VAR_16;
   FUNC_4(&VAR_20->net->ref_count, 1);
  } else {
   VAR_20->net = ((void*)0);
  }
  FUNC_11(VAR_20);
 }
out_now:
 return (VAR_20);
}
