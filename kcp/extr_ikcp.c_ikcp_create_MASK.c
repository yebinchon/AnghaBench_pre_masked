
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct IKCPCB {int dummy; } ;
struct TYPE_4__ {int mtu; int mss; char* buffer; int * writelog; int * output; int dead_link; scalar_t__ xmit; scalar_t__ nocwnd; int fastlimit; scalar_t__ fastresend; int ssthresh; scalar_t__ logmask; scalar_t__ updated; scalar_t__ nodelay; void* ts_flush; void* interval; scalar_t__ current; int rx_minrto; int rx_rto; scalar_t__ rx_rttval; scalar_t__ rx_srtt; scalar_t__ ackcount; scalar_t__ ackblock; int * acklist; scalar_t__ state; scalar_t__ nsnd_que; scalar_t__ nrcv_que; scalar_t__ nsnd_buf; scalar_t__ nrcv_buf; int rcv_buf; int snd_buf; int rcv_queue; int snd_queue; scalar_t__ stream; scalar_t__ probe; scalar_t__ incr; scalar_t__ cwnd; void* rmt_wnd; void* rcv_wnd; int snd_wnd; scalar_t__ probe_wait; scalar_t__ ts_probe; scalar_t__ ts_lastack; scalar_t__ ts_recent; scalar_t__ rcv_nxt; scalar_t__ snd_nxt; scalar_t__ snd_una; void* user; int conv; } ;
typedef TYPE_1__ ikcpcb ;
typedef int IUINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

ikcpcb* FUNC_3(IUINT32 VAR_10, void *VAR_11)
{
 ikcpcb *VAR_12 = (ikcpcb*)FUNC_1(sizeof(struct IKCPCB));
 if (VAR_12 == ((void*)0)) return ((void*)0);
 VAR_12->conv = VAR_10;
 VAR_12->user = VAR_11;
 VAR_12->snd_una = 0;
 VAR_12->snd_nxt = 0;
 VAR_12->rcv_nxt = 0;
 VAR_12->ts_recent = 0;
 VAR_12->ts_lastack = 0;
 VAR_12->ts_probe = 0;
 VAR_12->probe_wait = 0;
 VAR_12->snd_wnd = VAR_9;
 VAR_12->rcv_wnd = VAR_8;
 VAR_12->rmt_wnd = VAR_8;
 VAR_12->cwnd = 0;
 VAR_12->incr = 0;
 VAR_12->probe = 0;
 VAR_12->mtu = VAR_3;
 VAR_12->mss = VAR_12->mtu - VAR_4;
 VAR_12->stream = 0;

 VAR_12->buffer = (char*)FUNC_1((VAR_12->mtu + VAR_4) * 3);
 if (VAR_12->buffer == ((void*)0)) {
  FUNC_0(VAR_12);
  return ((void*)0);
 }

 FUNC_2(&VAR_12->snd_queue);
 FUNC_2(&VAR_12->rcv_queue);
 FUNC_2(&VAR_12->snd_buf);
 FUNC_2(&VAR_12->rcv_buf);
 VAR_12->nrcv_buf = 0;
 VAR_12->nsnd_buf = 0;
 VAR_12->nrcv_que = 0;
 VAR_12->nsnd_que = 0;
 VAR_12->state = 0;
 VAR_12->acklist = ((void*)0);
 VAR_12->ackblock = 0;
 VAR_12->ackcount = 0;
 VAR_12->rx_srtt = 0;
 VAR_12->rx_rttval = 0;
 VAR_12->rx_rto = VAR_5;
 VAR_12->rx_minrto = VAR_6;
 VAR_12->current = 0;
 VAR_12->interval = VAR_2;
 VAR_12->ts_flush = VAR_2;
 VAR_12->nodelay = 0;
 VAR_12->updated = 0;
 VAR_12->logmask = 0;
 VAR_12->ssthresh = VAR_7;
 VAR_12->fastresend = 0;
 VAR_12->fastlimit = VAR_1;
 VAR_12->nocwnd = 0;
 VAR_12->xmit = 0;
 VAR_12->dead_link = VAR_0;
 VAR_12->output = ((void*)0);
 VAR_12->writelog = ((void*)0);

 return VAR_12;
}
