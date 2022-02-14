
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct if_ath_alq_tx_fifo_push {int frame_cnt; int fifo_depth; int nframes; int txq; } ;
struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
typedef int p ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct if_ath_alq_tx_fifo_push*,int *,int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,unsigned long long,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_4(struct if_ath_alq_payload *VAR_0)
{
 struct if_ath_alq_tx_fifo_push VAR_1;

 FUNC_2(&VAR_1, &VAR_0->payload, sizeof(VAR_1));
 FUNC_3("[%u.%06u] [%llu] TXPUSH txq=%d, nframes=%d, fifodepth=%d, frmcount=%d\n",
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp_sec),
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp_usec),
     (unsigned long long) FUNC_1(VAR_0->hdr.threadid),
     FUNC_0(VAR_1.txq),
     FUNC_0(VAR_1.nframes),
     FUNC_0(VAR_1.fifo_depth),
     FUNC_0(VAR_1.frame_cnt));
}
