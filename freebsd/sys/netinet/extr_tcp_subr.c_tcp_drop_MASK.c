
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int t_softerror; TYPE_1__* t_fb; int t_state; TYPE_2__* t_inpcb; } ;
struct socket {int so_error; } ;
struct TYPE_4__ {struct socket* inp_socket; } ;
struct TYPE_3__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct tcpcb*) ;
 struct tcpcb* FUNC_5 (struct tcpcb*) ;
 int FUNC_6 (struct tcpcb*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

struct tcpcb *
FUNC_7(struct tcpcb *VAR_5, int VAR_6)
{
 struct socket *VAR_7 = VAR_5->t_inpcb->inp_socket;

 FUNC_0(&VAR_2);
 FUNC_1(VAR_5->t_inpcb);

 if (FUNC_3(VAR_5->t_state)) {
  FUNC_6(VAR_5, VAR_1);
  (void) VAR_5->t_fb->tfb_tcp_output(VAR_5);
  FUNC_2(VAR_4);
 } else
  FUNC_2(VAR_3);
 if (VAR_6 == VAR_0 && VAR_5->t_softerror)
  VAR_6 = VAR_5->t_softerror;
 VAR_7->so_error = VAR_6;
 return (FUNC_5(VAR_5));
}
