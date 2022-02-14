
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {TYPE_1__* t_fb; } ;
struct socket {int so_snd; } ;
struct mbuf {int dummy; } ;
struct inpcb {int inp_flags; } ;
struct TYPE_2__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tcpcb* FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct mbuf*,int) ;
 int FUNC_6 (int *,struct mbuf*,int) ;
 struct inpcb* FUNC_7 (struct socket*) ;
 int FUNC_8 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_3, struct mbuf *VAR_4, int VAR_5)
{
 struct inpcb *VAR_6;
 struct tcpcb *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(VAR_3);
 FUNC_0(VAR_6);
 if (VAR_6->inp_flags & (VAR_2 | VAR_1)) {
  FUNC_1(VAR_6);
  FUNC_5(VAR_4, VAR_5);
  return (VAR_0);
 }
 VAR_7 = FUNC_4(VAR_6);

 FUNC_2(&VAR_3->so_snd);
 VAR_8 = FUNC_6(&VAR_3->so_snd, VAR_4, VAR_5);
 FUNC_3(&VAR_3->so_snd);
 if (VAR_8 == 0)
  VAR_8 = VAR_7->t_fb->tfb_tcp_output(VAR_7);
 FUNC_1(VAR_6);

 return (VAR_8);
}
