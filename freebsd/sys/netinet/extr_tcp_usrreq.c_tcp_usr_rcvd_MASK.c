
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int t_flags; scalar_t__ t_state; TYPE_1__* t_fb; } ;
struct socket {int dummy; } ;
struct inpcb {int inp_flags; } ;
struct TYPE_2__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,struct tcpcb*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct tcpcb* FUNC_7 (struct inpcb*) ;
 struct inpcb* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct tcpcb*) ;
 int FUNC_10 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_11(struct socket *VAR_8, int VAR_9)
{
 struct inpcb *VAR_10;
 struct tcpcb *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 VAR_4;
 VAR_10 = FUNC_8(VAR_8);
 FUNC_3(VAR_10 != ((void*)0), ("tcp_usr_rcvd: inp == NULL"));
 FUNC_0(VAR_10);
 if (VAR_10->inp_flags & (VAR_2 | VAR_1)) {
  VAR_12 = VAR_0;
  goto out;
 }
 VAR_11 = FUNC_7(VAR_10);
 FUNC_4();







 if (FUNC_2(VAR_11->t_flags) &&
     (VAR_11->t_state == VAR_5))
  goto out;





 VAR_11->t_fb->tfb_tcp_output(VAR_11);

out:
 FUNC_5(VAR_3);
 FUNC_6(VAR_7, VAR_11, VAR_3);
 FUNC_1(VAR_10);
 return (VAR_12);
}
