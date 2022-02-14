
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ertt {scalar_t__ markedpkt_rtt; scalar_t__ bytes_tx_in_rtt; scalar_t__ dlyack_rx; scalar_t__ flags; scalar_t__ rtt; scalar_t__ maxrtt; scalar_t__ minrtt; scalar_t__ timestamp_errors; int txsegi_q; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 struct ertt *VAR_4;

 VAR_4 = VAR_0;

 FUNC_0(&VAR_4->txsegi_q);
 VAR_4->timestamp_errors = 0;
 VAR_4->minrtt = 0;
 VAR_4->maxrtt = 0;
 VAR_4->rtt = 0;
 VAR_4->flags = 0;
 VAR_4->dlyack_rx = 0;
 VAR_4->bytes_tx_in_rtt = 0;
 VAR_4->markedpkt_rtt = 0;

 return (0);
}
