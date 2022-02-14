
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tmit_chunk {int * data; int whoTo; } ;
struct sctp_association {int ctrl_queue_cnt; int control_send_queue; struct sctp_tmit_chunk* str_reset; } ;
struct sctp_tcb {int sctp_ep; struct sctp_association asoc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct sctp_tmit_chunk*,int ) ;
 int FUNC_1 (struct sctp_tcb*,struct sctp_tmit_chunk*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,struct sctp_tcb*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_5)
{
 struct sctp_association *VAR_6;
 struct sctp_tmit_chunk *VAR_7;

 VAR_6 = &VAR_5->asoc;
 VAR_7 = VAR_6->str_reset;
 if (VAR_7 == ((void*)0)) {
  return;
 }
 VAR_6->str_reset = ((void*)0);
 FUNC_3(VAR_3, VAR_5->sctp_ep, VAR_5,
     VAR_7->whoTo, VAR_0 + VAR_1);
 FUNC_0(&VAR_6->control_send_queue, VAR_7, VAR_4);
 VAR_6->ctrl_queue_cnt--;
 if (VAR_7->data) {
  FUNC_2(VAR_7->data);
  VAR_7->data = ((void*)0);
 }
 FUNC_1(VAR_5, VAR_7, VAR_2);
}
