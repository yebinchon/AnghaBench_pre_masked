
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ can_take_data; int id; } ;
struct TYPE_5__ {TYPE_1__ chunk_id; } ;
struct sctp_tmit_chunk {int send_size; TYPE_3__* asoc; struct sctp_nets* whoTo; scalar_t__ snd_count; int sent; struct mbuf* data; int flags; TYPE_2__ rec; scalar_t__ copy_by_ref; } ;
struct TYPE_6__ {int ctrl_queue_cnt; int asconf_send_queue; } ;
struct sctp_tcb {TYPE_3__ asoc; int sctp_ep; } ;
struct sctp_nets {int ref_count; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sctp_tmit_chunk*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct sctp_tcb*,struct sctp_tmit_chunk*) ;
 struct mbuf* FUNC_5 (struct sctp_tcb*,int*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mbuf*) ;
 int VAR_4 ;

void
FUNC_8(struct sctp_tcb *VAR_5, struct sctp_nets *VAR_6, int VAR_7)
{




 struct sctp_tmit_chunk *VAR_8;
 struct mbuf *VAR_9;
 int VAR_10;

 FUNC_0(VAR_5);

 if ((!FUNC_1(&VAR_5->asoc.asconf_send_queue)) &&
     (!FUNC_6(VAR_5->sctp_ep, VAR_3))) {

  return;
 }


 VAR_9 = FUNC_5(VAR_5, &VAR_10, VAR_7);
 if (VAR_9 == ((void*)0)) {
  return;
 }

 FUNC_4(VAR_5, VAR_8);
 if (VAR_8 == ((void*)0)) {

  FUNC_7(VAR_9);
  return;
 }

 VAR_8->copy_by_ref = 0;
 VAR_8->rec.chunk_id.id = VAR_1;
 VAR_8->rec.chunk_id.can_take_data = 0;
 VAR_8->flags = VAR_0;
 VAR_8->data = VAR_9;
 VAR_8->send_size = VAR_10;
 VAR_8->sent = VAR_2;
 VAR_8->snd_count = 0;
 VAR_8->asoc = &VAR_5->asoc;
 VAR_8->whoTo = VAR_6;
 if (VAR_8->whoTo) {
  FUNC_3(&VAR_8->whoTo->ref_count, 1);
 }
 FUNC_2(&VAR_8->asoc->asconf_send_queue, VAR_8, VAR_4);
 VAR_8->asoc->ctrl_queue_cnt++;
 return;
}
