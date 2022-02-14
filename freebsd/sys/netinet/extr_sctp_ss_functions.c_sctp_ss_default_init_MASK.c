
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {int (* sctp_ss_add_to_stream ) (struct sctp_tcb*,TYPE_4__*,int *,int *,int) ;} ;
struct TYPE_8__ {size_t streamoutcnt; int * strmout; TYPE_3__ ss_functions; } ;
struct sctp_tcb {TYPE_4__ asoc; } ;
struct TYPE_5__ {int wheel; } ;
struct TYPE_6__ {TYPE_1__ out; int * last_out_stream; int * locked_on_sending; } ;
struct sctp_association {TYPE_2__ ss_data; } ;


 int FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (struct sctp_tcb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sctp_tcb*,TYPE_4__*,int *,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_0, struct sctp_association *VAR_1,
    int VAR_2)
{
 uint16_t VAR_3;

 if (VAR_2 == 0) {
  FUNC_0(VAR_0);
 }
 VAR_1->ss_data.locked_on_sending = ((void*)0);
 VAR_1->ss_data.last_out_stream = ((void*)0);
 FUNC_2(&VAR_1->ss_data.out.wheel);





 for (VAR_3 = 0; VAR_3 < VAR_0->asoc.streamoutcnt; VAR_3++) {
  VAR_0->asoc.ss_functions.sctp_ss_add_to_stream(VAR_0, &VAR_0->asoc,
      &VAR_0->asoc.strmout[VAR_3],
      ((void*)0), 1);
 }
 if (VAR_2 == 0) {
  FUNC_1(VAR_0);
 }
 return;
}
