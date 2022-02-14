
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sctp_queued_to_read {scalar_t__ on_read_q; int fsn_included; } ;
struct sctp_inpcb {int read_queue; } ;


 int FUNC_0 (int *,struct sctp_queued_to_read*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct sctp_queued_to_read *VAR_1,
    struct sctp_inpcb *VAR_2, uint32_t VAR_3)
{
 VAR_1->fsn_included = VAR_3;
 if (VAR_1->on_read_q) {




  FUNC_0(&VAR_2->read_queue, VAR_1, VAR_0);
  VAR_1->on_read_q = 0;
 }
}
