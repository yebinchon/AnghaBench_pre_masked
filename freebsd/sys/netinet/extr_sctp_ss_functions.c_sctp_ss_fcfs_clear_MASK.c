
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_tcb {int dummy; } ;
struct TYPE_4__ {int * tqe_prev; int * tqe_next; } ;
struct sctp_stream_queue_pending {TYPE_1__ ss_next; } ;
struct TYPE_5__ {int list; } ;
struct TYPE_6__ {TYPE_2__ out; } ;
struct sctp_association {TYPE_3__ ss_data; } ;


 int FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (struct sctp_tcb*) ;
 int FUNC_2 (int *) ;
 struct sctp_stream_queue_pending* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sctp_stream_queue_pending*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct sctp_tcb *VAR_1, struct sctp_association *VAR_2,
    int VAR_3, int VAR_4)
{
 struct sctp_stream_queue_pending *VAR_5;

 if (VAR_3) {
  if (VAR_4 == 0) {
   FUNC_0(VAR_1);
  }
  while (!FUNC_2(&VAR_2->ss_data.out.list)) {
   VAR_5 = FUNC_3(&VAR_2->ss_data.out.list);
   FUNC_4(&VAR_2->ss_data.out.list, VAR_5, VAR_0);
   VAR_5->ss_next.tqe_next = ((void*)0);
   VAR_5->ss_next.tqe_prev = ((void*)0);
  }
  if (VAR_4 == 0) {
   FUNC_1(VAR_1);
  }
 }
 return;
}
