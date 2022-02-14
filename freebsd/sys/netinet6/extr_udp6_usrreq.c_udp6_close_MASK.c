
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct socket {TYPE_1__* so_proto; } ;
struct pr_usrreqs {int (* pru_disconnect ) (struct socket*) ;} ;
struct inpcbinfo {int dummy; } ;
struct inpcb {int inp_vflag; int in6p_laddr; int in6p_faddr; TYPE_3__* inp_socket; } ;
struct TYPE_8__ {struct pr_usrreqs* pr_usrreqs; } ;
struct TYPE_7__ {TYPE_2__* so_proto; } ;
struct TYPE_6__ {scalar_t__ pr_protocol; } ;
struct TYPE_5__ {int pr_protocol; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inpcbinfo*) ;
 int FUNC_2 (struct inpcbinfo*) ;
 int VAR_0 ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct inpcb*) ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_7 (struct socket*) ;
 struct inpcb* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*) ;
 struct inpcbinfo* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct socket *VAR_6)
{
 struct inpcb *VAR_7;
 struct inpcbinfo *VAR_8;

 VAR_8 = FUNC_10(VAR_6->so_proto->pr_protocol);
 VAR_7 = FUNC_8(VAR_6);
 FUNC_5(VAR_7 != ((void*)0), ("udp6_close: inp == NULL"));

 FUNC_3(VAR_7);
 if (!FUNC_0(&VAR_7->in6p_faddr)) {
  FUNC_1(VAR_8);
  FUNC_6(VAR_7);
  VAR_7->in6p_laddr = VAR_3;
  FUNC_2(VAR_8);
  FUNC_7(VAR_6);
 }
 FUNC_4(VAR_7);
}
