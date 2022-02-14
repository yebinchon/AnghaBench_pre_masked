
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_state; TYPE_1__* t_fb; int t_flags; struct inpcb* t_inpcb; } ;
struct socket {int so_options; scalar_t__ so_linger; int so_rcv; } ;
struct inpcb {int inp_flags; struct socket* inp_socket; } ;
struct TYPE_2__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct tcpcb*) ;
 struct tcpcb* FUNC_7 (struct tcpcb*) ;
 struct tcpcb* FUNC_8 (struct tcpcb*,int ) ;
 int FUNC_9 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_10(struct tcpcb *VAR_4)
{
 struct inpcb *VAR_5 = VAR_4->t_inpcb;
 struct socket *VAR_6 = VAR_5->inp_socket;

 FUNC_3();
 FUNC_0(VAR_5);





 if (VAR_4->t_state < VAR_2 &&
     !(VAR_4->t_state > VAR_3 && FUNC_1(VAR_4->t_flags))) {
  VAR_4 = FUNC_7(VAR_4);
  FUNC_2(VAR_4 != ((void*)0),
      ("tcp_disconnect: tcp_close() returned NULL"));
 } else if ((VAR_6->so_options & VAR_1) && VAR_6->so_linger == 0) {
  VAR_4 = FUNC_8(VAR_4, 0);
  FUNC_2(VAR_4 != ((void*)0),
      ("tcp_disconnect: tcp_drop() returned NULL"));
 } else {
  FUNC_5(VAR_6);
  FUNC_4(&VAR_6->so_rcv);
  FUNC_9(VAR_4);
  if (!(VAR_5->inp_flags & VAR_0))
   VAR_4->t_fb->tfb_tcp_output(VAR_4);
 }
}
