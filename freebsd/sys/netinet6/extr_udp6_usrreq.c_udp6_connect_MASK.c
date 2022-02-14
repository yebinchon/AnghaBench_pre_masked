
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_char ;
struct thread {int td_ucred; } ;
struct socket {TYPE_1__* so_proto; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct inpcbinfo {int dummy; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct inpcb {int inp_flags; int inp_vflag; scalar_t__ inp_lport; int in6p_laddr; int in6p_faddr; TYPE_3__ inp_laddr; TYPE_2__ inp_faddr; } ;
struct TYPE_4__ {int pr_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct inpcbinfo*) ;
 int FUNC_3 (struct inpcbinfo*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct inpcb*,struct sockaddr*,int ) ;
 int FUNC_8 (struct sockaddr_in*,struct sockaddr_in6*) ;
 int FUNC_9 (struct inpcb*,struct sockaddr*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct socket*) ;
 struct inpcb* FUNC_13 (struct socket*) ;
 struct inpcbinfo* FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct socket *VAR_7, struct sockaddr *VAR_8, struct thread *VAR_9)
{
 struct inpcb *VAR_10;
 struct inpcbinfo *VAR_11;
 struct sockaddr_in6 *VAR_12;
 int VAR_13;
 u_char VAR_14;

 VAR_11 = FUNC_14(VAR_7->so_proto->pr_protocol);
 VAR_10 = FUNC_13(VAR_7);
 VAR_12 = (struct sockaddr_in6 *)VAR_8;
 FUNC_6(VAR_10 != ((void*)0), ("udp6_connect: inp == NULL"));




 FUNC_4(VAR_10);
 if (!FUNC_0(&VAR_10->in6p_faddr)) {
  VAR_13 = VAR_2;
  goto out;
 }
 VAR_13 = FUNC_11(VAR_9->td_ucred, &VAR_12->sin6_addr);
 if (VAR_13 != 0)
  goto out;
 VAR_14 = VAR_10->inp_vflag;
 VAR_10->inp_vflag &= ~VAR_5;
 VAR_10->inp_vflag |= VAR_6;
 FUNC_2(VAR_11);
 VAR_13 = FUNC_7(VAR_10, VAR_8, VAR_9->td_ucred);
 FUNC_3(VAR_11);





 if (VAR_13 == 0)
  FUNC_12(VAR_7);
 else if (FUNC_0(&VAR_10->in6p_laddr) &&
     VAR_10->inp_lport == 0)
  VAR_10->inp_vflag = VAR_14;
out:
 FUNC_5(VAR_10);
 return (VAR_13);
}
