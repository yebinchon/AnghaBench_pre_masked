
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ total_flight; scalar_t__ peers_rwnd; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_shutdown_chunk {int cumulative_tsn_ack; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_tcb*,scalar_t__,scalar_t__,int*,int ) ;

void
FUNC_2(struct sctp_tcb *VAR_0, struct sctp_shutdown_chunk *VAR_1, int *VAR_2)
{

 uint32_t VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_1->cumulative_tsn_ack);

 VAR_4 = VAR_0->asoc.peers_rwnd + VAR_0->asoc.total_flight;


 FUNC_1(VAR_0, VAR_3, VAR_4, VAR_2, 0);
}
