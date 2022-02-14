
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ snd_una; scalar_t__ conv; int rmt_wnd; scalar_t__ current; scalar_t__ rcv_nxt; scalar_t__ rcv_wnd; int cwnd; scalar_t__ mss; int ssthresh; scalar_t__ incr; int probe; scalar_t__ rx_rto; } ;
typedef TYPE_1__ ikcpcb ;
struct TYPE_17__ {int data; scalar_t__ len; scalar_t__ una; scalar_t__ sn; scalar_t__ ts; void* wnd; scalar_t__ frg; scalar_t__ cmd; scalar_t__ conv; } ;
typedef scalar_t__ IUINT8 ;
typedef scalar_t__ IUINT32 ;
typedef void* IUINT16 ;
typedef TYPE_2__ IKCPSEG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 char* FUNC_3 (char const*,void**) ;
 char* FUNC_4 (char const*,scalar_t__*) ;
 char* FUNC_5 (char const*,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*,...) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (int ,char const*,scalar_t__) ;

int FUNC_15(ikcpcb *VAR_11, const char *VAR_12, long VAR_13)
{
 IUINT32 VAR_14 = VAR_11->snd_una;
 IUINT32 VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;

 if (FUNC_2(VAR_11, VAR_5)) {
  FUNC_6(VAR_11, VAR_5, "[RI] %d bytes", (int)VAR_13);
 }

 if (VAR_12 == ((void*)0) || (int)VAR_13 < (int)VAR_10) return -1;

 while (1) {
  IUINT32 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
  IUINT16 VAR_23;
  IUINT8 VAR_24, VAR_25;
  IKCPSEG *VAR_26;

  if (VAR_13 < (int)VAR_10) break;

  VAR_12 = FUNC_4(VAR_12, &VAR_22);
  if (VAR_22 != VAR_11->conv) return -1;

  VAR_12 = FUNC_5(VAR_12, &VAR_24);
  VAR_12 = FUNC_5(VAR_12, &VAR_25);
  VAR_12 = FUNC_3(VAR_12, &VAR_23);
  VAR_12 = FUNC_4(VAR_12, &VAR_18);
  VAR_12 = FUNC_4(VAR_12, &VAR_19);
  VAR_12 = FUNC_4(VAR_12, &VAR_21);
  VAR_12 = FUNC_4(VAR_12, &VAR_20);

  VAR_13 -= VAR_10;

  if ((long)VAR_13 < (long)VAR_20 || (int)VAR_20 < 0) return -2;

  if (VAR_24 != VAR_2 && VAR_24 != VAR_1 &&
   VAR_24 != VAR_3 && VAR_24 != VAR_4)
   return -3;

  VAR_11->rmt_wnd = VAR_23;
  FUNC_10(VAR_11, VAR_21);
  FUNC_12(VAR_11);

  if (VAR_24 == VAR_1) {
   if (FUNC_0(VAR_11->current, VAR_18) >= 0) {
    FUNC_13(VAR_11, FUNC_0(VAR_11->current, VAR_18));
   }
   FUNC_7(VAR_11, VAR_19);
   FUNC_12(VAR_11);
   if (VAR_17 == 0) {
    VAR_17 = 1;
    VAR_15 = VAR_19;
    VAR_16 = VAR_18;
   } else {
    if (FUNC_0(VAR_19, VAR_15) > 0) {

     VAR_15 = VAR_19;
     VAR_16 = VAR_18;






    }
   }
   if (FUNC_2(VAR_11, VAR_6)) {
    FUNC_6(VAR_11, VAR_7,
     "input ack: sn=%lu rtt=%ld rto=%ld", (unsigned long)VAR_19,
     (long)FUNC_0(VAR_11->current, VAR_18),
     (long)VAR_11->rx_rto);
   }
  }
  else if (VAR_24 == VAR_2) {
   if (FUNC_2(VAR_11, VAR_7)) {
    FUNC_6(VAR_11, VAR_7,
     "input psh: sn=%lu ts=%lu", (unsigned long)VAR_19, (unsigned long)VAR_18);
   }
   if (FUNC_0(VAR_19, VAR_11->rcv_nxt + VAR_11->rcv_wnd) < 0) {
    FUNC_1(VAR_11, VAR_19, VAR_18);
    if (FUNC_0(VAR_19, VAR_11->rcv_nxt) >= 0) {
     VAR_26 = FUNC_11(VAR_11, VAR_20);
     VAR_26->conv = VAR_22;
     VAR_26->cmd = VAR_24;
     VAR_26->frg = VAR_25;
     VAR_26->wnd = VAR_23;
     VAR_26->ts = VAR_18;
     VAR_26->sn = VAR_19;
     VAR_26->una = VAR_21;
     VAR_26->len = VAR_20;

     if (VAR_20 > 0) {
      FUNC_14(VAR_26->data, VAR_12, VAR_20);
     }

     FUNC_8(VAR_11, VAR_26);
    }
   }
  }
  else if (VAR_24 == VAR_3) {


   VAR_11->probe |= VAR_0;
   if (FUNC_2(VAR_11, VAR_8)) {
    FUNC_6(VAR_11, VAR_8, "input probe");
   }
  }
  else if (VAR_24 == VAR_4) {

   if (FUNC_2(VAR_11, VAR_9)) {
    FUNC_6(VAR_11, VAR_9,
     "input wins: %lu", (unsigned long)(VAR_23));
   }
  }
  else {
   return -3;
  }

  VAR_12 += VAR_20;
  VAR_13 -= VAR_20;
 }

 if (VAR_17 != 0) {
  FUNC_9(VAR_11, VAR_15, VAR_16);
 }

 if (FUNC_0(VAR_11->snd_una, VAR_14) > 0) {
  if (VAR_11->cwnd < VAR_11->rmt_wnd) {
   IUINT32 VAR_27 = VAR_11->mss;
   if (VAR_11->cwnd < VAR_11->ssthresh) {
    VAR_11->cwnd++;
    VAR_11->incr += VAR_27;
   } else {
    if (VAR_11->incr < VAR_27) VAR_11->incr = VAR_27;
    VAR_11->incr += (VAR_27 * VAR_27) / VAR_11->incr + (VAR_27 / 16);
    if ((VAR_11->cwnd + 1) * VAR_27 <= VAR_11->incr) {
     VAR_11->cwnd++;
    }
   }
   if (VAR_11->cwnd > VAR_11->rmt_wnd) {
    VAR_11->cwnd = VAR_11->rmt_wnd;
    VAR_11->incr = VAR_11->rmt_wnd * VAR_27;
   }
  }
 }

 return 0;
}
