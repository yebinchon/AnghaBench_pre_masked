
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_state; } ;
struct socket {scalar_t__ so_oobmark; int so_options; TYPE_1__ so_rcv; } ;
struct sdp_sock {int flags; int oobflags; int rx_ring; int iobc; } ;
struct mbuf {int m_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sdp_sock* FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_11, struct mbuf *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 struct sdp_sock *VAR_15;

 VAR_15 = FUNC_5(VAR_11);
 FUNC_0(VAR_15);
 if (!FUNC_3(&VAR_15->rx_ring)) {
  FUNC_1(VAR_15);
  return (VAR_0);
 }
 if (VAR_15->flags & (VAR_8 | VAR_5)) {
  VAR_14 = VAR_0;
  goto out;
 }
 if ((VAR_11->so_oobmark == 0 &&
      (VAR_11->so_rcv.sb_state & VAR_4) == 0) ||
     VAR_11->so_options & VAR_9 ||
     VAR_15->oobflags & VAR_6) {
  VAR_14 = VAR_1;
  goto out;
 }
 if ((VAR_15->oobflags & VAR_7) == 0) {
  VAR_14 = VAR_2;
  goto out;
 }
 VAR_12->m_len = 1;
 *FUNC_2(VAR_12, VAR_10) = VAR_15->iobc;
 if ((VAR_13 & VAR_3) == 0)
  VAR_15->oobflags ^= (VAR_7 | VAR_6);
out:
 FUNC_4(&VAR_15->rx_ring);
 FUNC_1(VAR_15);
 return (VAR_14);
}
