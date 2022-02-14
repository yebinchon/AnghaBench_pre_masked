
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpopt {int dummy; } ;
struct tcphdr {int th_seq; int th_urp; } ;
struct tcpcb {int rcv_nxt; int t_flags; int rcv_wnd; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mbuf*,struct tcpcb*,struct tcphdr*,int,int,int*) ;
 int FUNC_3 (struct mbuf*,int) ;
 int FUNC_4 (struct tcpcb*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int
FUNC_5(struct tcpopt *VAR_13, struct mbuf *VAR_14, struct tcphdr *VAR_15, struct tcpcb *VAR_16, int32_t * VAR_17, int32_t * VAR_18, int32_t * VAR_19, int32_t * VAR_20)
{
 int32_t VAR_21;
 int32_t VAR_22;
 int32_t VAR_23;

 VAR_22 = *VAR_18;
 VAR_23 = *VAR_17;
 VAR_21 = VAR_16->rcv_nxt - VAR_15->th_seq;
 if (VAR_21 > 0) {
  if (VAR_22 & VAR_4) {
   VAR_22 &= ~VAR_4;
   VAR_15->th_seq++;
   if (VAR_15->th_urp > 1)
    VAR_15->th_urp--;
   else
    VAR_22 &= ~VAR_5;
   VAR_21--;
  }



  if (VAR_21 > VAR_23
      || (VAR_21 == VAR_23 && (VAR_22 & VAR_2) == 0)) {





   VAR_22 &= ~VAR_2;




   VAR_16->t_flags |= VAR_0;
   VAR_21 = VAR_23;
   FUNC_1(VAR_8);
   FUNC_0(VAR_7, VAR_21);
  } else {
   FUNC_1(VAR_11);
   FUNC_0(VAR_10, VAR_21);
  }



  if (VAR_16->t_flags & VAR_1) {
   FUNC_4(VAR_16, VAR_15->th_seq,
       VAR_15->th_seq + VAR_21);




   VAR_16->t_flags |= VAR_0;
  }
  *VAR_19 += VAR_21;
  VAR_15->th_seq += VAR_21;
  VAR_23 -= VAR_21;
  if (VAR_15->th_urp > VAR_21)
   VAR_15->th_urp -= VAR_21;
  else {
   VAR_22 &= ~VAR_5;
   VAR_15->th_urp = 0;
  }
 }




 VAR_21 = (VAR_15->th_seq + VAR_23) - (VAR_16->rcv_nxt + VAR_16->rcv_wnd);
 if (VAR_21 > 0) {
  FUNC_1(VAR_9);
  if (VAR_21 >= VAR_23) {
   FUNC_0(VAR_6, VAR_23);







   if (VAR_16->rcv_wnd == 0 && VAR_15->th_seq == VAR_16->rcv_nxt) {
    VAR_16->t_flags |= VAR_0;
    FUNC_1(VAR_12);
   } else {
    FUNC_2(VAR_14, VAR_16, VAR_15, VAR_22, VAR_23, VAR_20);
    return (1);
   }
  } else
   FUNC_0(VAR_6, VAR_21);
  FUNC_3(VAR_14, -VAR_21);
  VAR_23 -= VAR_21;
  VAR_22 &= ~(VAR_3 | VAR_2);
 }
 *VAR_18 = VAR_22;
 *VAR_17 = VAR_23;
 return (0);
}
