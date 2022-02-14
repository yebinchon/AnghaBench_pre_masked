
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct sctp_stream_out* last_out_stream; struct sctp_stream_out* locked_on_sending; } ;
struct TYPE_9__ {TYPE_5__ ss_data; } ;
struct sctp_tcb {TYPE_4__ asoc; } ;
struct TYPE_6__ {int * tqe_prev; int * tqe_next; } ;
struct TYPE_7__ {TYPE_1__ next_spoke; } ;
struct TYPE_8__ {TYPE_2__ rr; } ;
struct sctp_stream_out {TYPE_3__ ss_params; } ;



__attribute__((used)) static void
FUNC_0(struct sctp_tcb *VAR_0, struct sctp_stream_out *VAR_1, struct sctp_stream_out *VAR_2)
{
 if (VAR_2 != ((void*)0)) {
  if (VAR_0->asoc.ss_data.locked_on_sending == VAR_2) {
   VAR_0->asoc.ss_data.locked_on_sending = VAR_1;
  }
  if (VAR_0->asoc.ss_data.last_out_stream == VAR_2) {
   VAR_0->asoc.ss_data.last_out_stream = VAR_1;
  }
 }
 VAR_1->ss_params.rr.next_spoke.tqe_next = ((void*)0);
 VAR_1->ss_params.rr.next_spoke.tqe_prev = ((void*)0);
 return;
}
