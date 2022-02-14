
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int t_oobflags; int t_iobc; } ;
struct TYPE_2__ {int sb_state; } ;
struct socket {scalar_t__ so_oobmark; int so_options; TYPE_1__ so_rcv; } ;
struct mbuf {int m_len; } ;
struct inpcb {int inp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,struct tcpcb*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 struct tcpcb* FUNC_6 (struct inpcb*) ;
 int * FUNC_7 (struct mbuf*,int ) ;
 struct inpcb* FUNC_8 (struct socket*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_14, struct mbuf *VAR_15, int VAR_16)
{
 int VAR_17 = 0;
 struct inpcb *VAR_18;
 struct tcpcb *VAR_19 = ((void*)0);

 VAR_9;
 VAR_18 = FUNC_8(VAR_14);
 FUNC_2(VAR_18 != ((void*)0), ("tcp_usr_rcvoob: inp == NULL"));
 FUNC_0(VAR_18);
 if (VAR_18->inp_flags & (VAR_4 | VAR_3)) {
  VAR_17 = VAR_0;
  goto out;
 }
 VAR_19 = FUNC_6(VAR_18);
 FUNC_3();
 if ((VAR_14->so_oobmark == 0 &&
      (VAR_14->so_rcv.sb_state & VAR_7) == 0) ||
     VAR_14->so_options & VAR_8 ||
     VAR_19->t_oobflags & VAR_10) {
  VAR_17 = VAR_1;
  goto out;
 }
 if ((VAR_19->t_oobflags & VAR_11) == 0) {
  VAR_17 = VAR_2;
  goto out;
 }
 VAR_15->m_len = 1;
 *FUNC_7(VAR_15, VAR_12) = VAR_19->t_iobc;
 if ((VAR_16 & VAR_5) == 0)
  VAR_19->t_oobflags ^= (VAR_11 | VAR_10);

out:
 FUNC_4(VAR_6);
 FUNC_5(VAR_13, VAR_19, VAR_6);
 FUNC_1(VAR_18);
 return (VAR_17);
}
