
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {TYPE_1__* t_fb; } ;
struct socket {int dummy; } ;
struct inpcb {int inp_flags; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_2__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (struct epoch_tracker) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct tcpcb*,int ) ;
 int VAR_5 ;
 struct tcpcb* FUNC_8 (struct inpcb*) ;
 int FUNC_9 (struct socket*) ;
 struct inpcb* FUNC_10 (struct socket*) ;
 int FUNC_11 (struct tcpcb*) ;
 int FUNC_12 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_13(struct socket *VAR_6)
{
 int VAR_7 = 0;
 struct inpcb *VAR_8;
 struct tcpcb *VAR_9 = ((void*)0);
 struct epoch_tracker VAR_10;

 VAR_4;
 FUNC_3(VAR_10);
 VAR_8 = FUNC_10(VAR_6);
 FUNC_2(VAR_8 != ((void*)0), ("inp == NULL"));
 FUNC_0(VAR_8);
 if (VAR_8->inp_flags & (VAR_2 | VAR_1)) {
  VAR_7 = VAR_0;
  goto out;
 }
 VAR_9 = FUNC_8(VAR_8);
 FUNC_5();
 FUNC_9(VAR_6);
 FUNC_12(VAR_9);
 if (!(VAR_8->inp_flags & VAR_1))
  VAR_7 = VAR_9->t_fb->tfb_tcp_output(VAR_9);

out:
 FUNC_6(VAR_3);
 FUNC_7(VAR_5, VAR_9, VAR_3);
 FUNC_1(VAR_8);
 FUNC_4(VAR_10);

 return (VAR_7);
}
