
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct thread {int td_ucred; } ;
struct socket {TYPE_1__* so_proto; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct inpcbinfo {int dummy; } ;
struct inpcb {int inp_flags; int inp_vflag; } ;
struct TYPE_2__ {int pr_protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inpcbinfo*) ;
 int FUNC_3 (struct inpcbinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct inpcb*,struct sockaddr*,int ) ;
 int FUNC_8 (struct sockaddr_in*,struct sockaddr_in6*) ;
 int FUNC_9 (struct inpcb*,struct sockaddr*,int ) ;
 struct inpcb* FUNC_10 (struct socket*) ;
 struct inpcbinfo* FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct socket *VAR_3, struct sockaddr *VAR_4, struct thread *VAR_5)
{
 struct inpcb *VAR_6;
 struct inpcbinfo *VAR_7;
 int VAR_8;
 u_char VAR_9;

 VAR_7 = FUNC_11(VAR_3->so_proto->pr_protocol);
 VAR_6 = FUNC_10(VAR_3);
 FUNC_6(VAR_6 != ((void*)0), ("udp6_bind: inp == NULL"));

 FUNC_4(VAR_6);
 FUNC_2(VAR_7);
 VAR_9 = VAR_6->inp_vflag;
 VAR_6->inp_vflag &= ~VAR_1;
 VAR_6->inp_vflag |= VAR_2;
 if ((VAR_6->inp_flags & VAR_0) == 0) {
  struct sockaddr_in6 *VAR_10;

  VAR_10 = (struct sockaddr_in6 *)VAR_4;

  if (FUNC_0(&VAR_10->sin6_addr))
   VAR_6->inp_vflag |= VAR_1;
 }

 VAR_8 = FUNC_7(VAR_6, VAR_4, VAR_5->td_ucred);



 if (VAR_8 != 0)
  VAR_6->inp_vflag = VAR_9;
 FUNC_3(VAR_7);
 FUNC_5(VAR_6);
 return (VAR_8);
}
