
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct socket {int dummy; } ;
struct inpcb {int inp_flags; } ;
struct epoch_tracker {int dummy; } ;


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
 struct inpcb* FUNC_9 (struct socket*) ;
 int FUNC_10 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_11(struct socket *VAR_6)
{
 struct inpcb *VAR_7;
 struct tcpcb *VAR_8 = ((void*)0);
 struct epoch_tracker VAR_9;
 int VAR_10 = 0;

 VAR_4;
 FUNC_3(VAR_9);
 VAR_7 = FUNC_9(VAR_6);
 FUNC_2(VAR_7 != ((void*)0), ("tcp_usr_disconnect: inp == NULL"));
 FUNC_0(VAR_7);
 if (VAR_7->inp_flags & VAR_2)
  goto out;
 if (VAR_7->inp_flags & VAR_1) {
  VAR_10 = VAR_0;
  goto out;
 }
 VAR_8 = FUNC_8(VAR_7);
 FUNC_5();
 FUNC_10(VAR_8);
out:
 FUNC_6(VAR_3);
 FUNC_7(VAR_5, VAR_8, VAR_3);
 FUNC_1(VAR_7);
 FUNC_4(VAR_9);
 return (VAR_10);
}
