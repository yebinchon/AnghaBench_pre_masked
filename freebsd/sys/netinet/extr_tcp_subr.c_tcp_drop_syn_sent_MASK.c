
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_state; int t_flags; } ;
struct inpcb {int inp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 struct tcpcb* FUNC_3 (struct inpcb*) ;
 struct tcpcb* FUNC_4 (struct tcpcb*,int) ;
 int FUNC_5 (struct tcpcb*) ;

struct inpcb *
FUNC_6(struct inpcb *VAR_3, int VAR_4)
{
 struct tcpcb *VAR_5;

 FUNC_2();
 FUNC_0(VAR_3);

 if ((VAR_3->inp_flags & VAR_1) ||
     (VAR_3->inp_flags & VAR_0))
  return (VAR_3);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5->t_state != VAR_2)
  return (VAR_3);

 if (FUNC_1(VAR_5->t_flags))
  FUNC_5(VAR_5);

 VAR_5 = FUNC_4(VAR_5, VAR_4);
 if (VAR_5 != ((void*)0))
  return (VAR_3);
 else
  return (((void*)0));
}
