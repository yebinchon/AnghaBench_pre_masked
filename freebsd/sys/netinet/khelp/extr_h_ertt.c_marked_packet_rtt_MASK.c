
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct txseginfo {void* tx_ts; int len; } ;
struct tcpcb {int t_flags; int snd_cwnd; } ;
struct ertt {int flags; int marked_snd_cwnd; scalar_t__ bytes_tx_in_rtt; scalar_t__ bytes_tx_in_marked_rtt; void* markedpkt_rtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 () ;

__attribute__((used)) static void inline
FUNC_1(struct txseginfo *VAR_7, struct ertt *VAR_8, struct tcpcb *VAR_9,
    uint32_t *VAR_10, int *VAR_11, int *VAR_12,
    int VAR_13)
{







 if (VAR_13 & (VAR_4|VAR_5)) {
  *VAR_10 = VAR_7->tx_ts;
  *VAR_11 = VAR_7->len;
  *VAR_12 += *VAR_11;
 } else {
  if (VAR_13 & VAR_3) {
   VAR_8->markedpkt_rtt = FUNC_0() -
       *VAR_10 + 1;
   VAR_8->bytes_tx_in_marked_rtt = VAR_8->bytes_tx_in_rtt +
       *VAR_11 - *VAR_12;
  } else {
   VAR_8->markedpkt_rtt = FUNC_0() -
       VAR_7->tx_ts + 1;
   VAR_8->bytes_tx_in_marked_rtt = VAR_8->bytes_tx_in_rtt -
       *VAR_12;
  }
  VAR_8->marked_snd_cwnd = VAR_9->snd_cwnd;





  VAR_8->flags &= ~VAR_0;





  VAR_8->flags |= VAR_1;

  if (VAR_9->t_flags & VAR_6) {

   VAR_9->t_flags &= ~VAR_6;

   VAR_8->flags |= VAR_2;
  }
 }
}
