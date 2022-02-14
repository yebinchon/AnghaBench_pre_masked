
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sctp_tcb {int dummy; } ;
struct TYPE_10__ {int * tqe_prev; int * tqe_next; } ;
struct TYPE_11__ {TYPE_3__ next_spoke; scalar_t__ priority; } ;
struct TYPE_12__ {TYPE_4__ prio; } ;
struct sctp_stream_out {TYPE_5__ ss_params; } ;
struct TYPE_8__ {int wheel; } ;
struct TYPE_13__ {int * last_out_stream; TYPE_1__ out; } ;
struct sctp_association {TYPE_6__ ss_data; } ;
struct TYPE_9__ {int next_spoke; } ;
struct TYPE_14__ {TYPE_2__ prio; } ;


 int FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (struct sctp_tcb*) ;
 int FUNC_2 (int *) ;
 struct sctp_stream_out* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sctp_stream_out*,int ) ;
 TYPE_7__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct sctp_tcb *VAR_1, struct sctp_association *VAR_2,
    int VAR_3, int VAR_4)
{
 if (VAR_4 == 0) {
  FUNC_0(VAR_1);
 }
 while (!FUNC_2(&VAR_2->ss_data.out.wheel)) {
  struct sctp_stream_out *VAR_5;

  VAR_5 = FUNC_3(&VAR_2->ss_data.out.wheel);
  if (VAR_3) {
   VAR_5->ss_params.prio.priority = 0;
  }
  FUNC_4(&VAR_2->ss_data.out.wheel, VAR_5, VAR_0.prio.next_spoke);
  VAR_5->ss_params.prio.next_spoke.tqe_next = ((void*)0);
  VAR_5->ss_params.prio.next_spoke.tqe_prev = ((void*)0);

 }
 VAR_2->ss_data.last_out_stream = ((void*)0);
 if (VAR_4 == 0) {
  FUNC_1(VAR_1);
 }
 return;
}
