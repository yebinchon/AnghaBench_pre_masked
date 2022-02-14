
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int tsn; } ;
struct TYPE_9__ {TYPE_3__ data; } ;
struct sctp_tmit_chunk {scalar_t__ sent; TYPE_4__ rec; TYPE_5__* whoTo; int book_size; int * data; scalar_t__ window_probe; } ;
struct TYPE_6__ {int (* sctp_cwnd_update_tsn_acknowledged ) (TYPE_5__*,struct sctp_tmit_chunk*) ;} ;
struct TYPE_7__ {TYPE_1__ cc_functions; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_association {int sent_queue_retran_cnt; } ;
struct TYPE_10__ {int flight_size; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sctp_tmit_chunk*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_tmit_chunk*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,struct sctp_tmit_chunk*) ;

__attribute__((used)) static void
FUNC_6(struct sctp_tcb *VAR_6,
    struct sctp_association *VAR_7,
    struct sctp_tmit_chunk *VAR_8)
{
 VAR_8->window_probe = 0;
 if ((VAR_8->sent >= VAR_0) || (VAR_8->data == ((void*)0))) {

  FUNC_2(VAR_4,
      VAR_8->whoTo ? VAR_8->whoTo->flight_size : 0,
      VAR_8->book_size,
      (uint32_t)(uintptr_t)VAR_8->whoTo,
      VAR_8->rec.data.tsn);
  return;
 }

 if (VAR_6->asoc.cc_functions.sctp_cwnd_update_tsn_acknowledged) {
  (*VAR_6->asoc.cc_functions.sctp_cwnd_update_tsn_acknowledged) (VAR_8->whoTo,
      VAR_8);
 }
 FUNC_1(VAR_8);
 FUNC_3(VAR_6, VAR_8);

 VAR_8->sent = VAR_1;
 FUNC_4(VAR_7->sent_queue_retran_cnt);

 if (FUNC_0(VAR_5) & VAR_2) {
  FUNC_2(VAR_3,
      VAR_8->whoTo->flight_size,
      VAR_8->book_size,
      (uint32_t)(uintptr_t)VAR_8->whoTo,
      VAR_8->rec.data.tsn);
 }
}
