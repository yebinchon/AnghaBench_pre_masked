
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct socket {int so_state; TYPE_1__* so_proto; } ;
struct pr_usrreqs {int (* pru_disconnect ) (struct socket*) ;} ;
struct inpcbinfo {int dummy; } ;
struct inpcb {int inp_vflag; int in6p_laddr; int in6p_faddr; TYPE_3__* inp_socket; } ;
struct TYPE_8__ {struct pr_usrreqs* pr_usrreqs; } ;
struct TYPE_7__ {TYPE_2__* so_proto; } ;
struct TYPE_6__ {scalar_t__ pr_protocol; } ;
struct TYPE_5__ {int pr_protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct inpcbinfo*) ;
 int FUNC_2 (struct inpcbinfo*) ;
 int VAR_1 ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;
 int VAR_4 ;
 int FUNC_8 (struct inpcb*) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 size_t* VAR_7 ;
 struct inpcb* FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*) ;
 struct inpcbinfo* FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct socket *VAR_8)
{
 struct inpcb *VAR_9;
 struct inpcbinfo *VAR_10;

 VAR_10 = FUNC_11(VAR_8->so_proto->pr_protocol);
 VAR_9 = FUNC_9(VAR_8);
 FUNC_5(VAR_9 != ((void*)0), ("udp6_disconnect: inp == NULL"));

 FUNC_3(VAR_9);
 if (FUNC_0(&VAR_9->in6p_faddr)) {
  FUNC_4(VAR_9);
  return (VAR_0);
 }

 FUNC_1(VAR_10);
 FUNC_8(VAR_9);
 VAR_9->in6p_laddr = VAR_5;
 FUNC_2(VAR_10);
 FUNC_6(VAR_8);
 VAR_8->so_state &= ~VAR_4;
 FUNC_7(VAR_8);
 FUNC_4(VAR_9);
 return (0);
}
