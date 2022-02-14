
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct tcpcb {int t_srtt; scalar_t__ rfbuf_ts; int rfbuf_cnt; } ;
struct TYPE_2__ {int sb_flags; int sb_hiwat; } ;
struct socket {TYPE_1__ so_rcv; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct tcpcb*,struct mbuf*,struct tcpcb*,struct tcphdr*,int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(struct mbuf *VAR_5, struct tcphdr *VAR_6, struct socket *VAR_7,
    struct tcpcb *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 if (VAR_3 && (VAR_7->so_rcv.sb_flags & VAR_0) &&
     VAR_8->t_srtt != 0 && VAR_8->rfbuf_ts != 0 &&
     FUNC_1(FUNC_3() - VAR_8->rfbuf_ts) >
     ((VAR_8->t_srtt >> VAR_1)/2)) {
  if (VAR_8->rfbuf_cnt > ((VAR_7->so_rcv.sb_hiwat / 2)/ 4 * 3) &&
      VAR_7->so_rcv.sb_hiwat < VAR_2) {
   VAR_10 = FUNC_2((VAR_7->so_rcv.sb_hiwat + (VAR_7->so_rcv.sb_hiwat/2)), VAR_2);
  }
  FUNC_0(VAR_4, ((void*)0), VAR_8, VAR_5, VAR_8, VAR_6, VAR_10);


  VAR_8->rfbuf_ts = 0;
  VAR_8->rfbuf_cnt = 0;
 } else {
  VAR_8->rfbuf_cnt += VAR_9;
 }
 return (VAR_10);
}
