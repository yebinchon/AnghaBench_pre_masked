
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct tcpcb {int dummy; } ;
struct socket {int so_options; scalar_t__ so_linger; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,struct tcpcb*,int ) ;
 int VAR_4 ;
 struct tcpcb* FUNC_4 (struct inpcb*) ;
 struct inpcb* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct inpcb *VAR_8;
 struct tcpcb *VAR_9 = ((void*)0);
 int VAR_10;
 VAR_2;

 VAR_8 = FUNC_5(VAR_5);
 FUNC_0(VAR_8 == ((void*)0), ("tcp_usr_attach: inp != NULL"));
 FUNC_1();

 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10)
  goto out;

 if ((VAR_5->so_options & VAR_1) && VAR_5->so_linger == 0)
  VAR_5->so_linger = VAR_3;

 VAR_8 = FUNC_5(VAR_5);
 VAR_9 = FUNC_4(VAR_8);
out:
 FUNC_2(VAR_0);
 FUNC_3(VAR_4, VAR_9, VAR_0);
 return VAR_10;
}
