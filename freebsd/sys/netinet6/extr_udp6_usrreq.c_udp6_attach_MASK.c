
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_6__ {scalar_t__ sb_hiwat; } ;
struct TYPE_5__ {scalar_t__ sb_hiwat; } ;
struct socket {scalar_t__ so_pcb; TYPE_3__ so_rcv; TYPE_2__ so_snd; TYPE_1__* so_proto; } ;
struct inpcbinfo {int dummy; } ;
struct inpcb {int inp_flags; int in6p_hops; int in6p_cksum; int inp_ip_ttl; int inp_vflag; } ;
struct TYPE_4__ {int pr_protocol; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcbinfo*) ;
 int FUNC_1 (struct inpcbinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct socket*,struct inpcbinfo*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_8 (struct socket*) ;
 struct inpcbinfo* FUNC_9 (int ) ;
 int FUNC_10 (struct inpcb*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_11(struct socket *VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct inpcb *VAR_9;
 struct inpcbinfo *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_9(VAR_6->so_proto->pr_protocol);
 VAR_9 = FUNC_8(VAR_6);
 FUNC_3(VAR_9 == ((void*)0), ("udp6_attach: inp != NULL"));

 if (VAR_6->so_snd.sb_hiwat == 0 || VAR_6->so_rcv.sb_hiwat == 0) {
  VAR_11 = FUNC_7(VAR_6, VAR_5, VAR_4);
  if (VAR_11)
   return (VAR_11);
 }
 FUNC_0(VAR_10);
 VAR_11 = FUNC_4(VAR_6, VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_10);
  return (VAR_11);
 }
 VAR_9 = (struct inpcb *)VAR_6->so_pcb;
 VAR_9->inp_vflag |= VAR_2;
 if ((VAR_9->inp_flags & VAR_0) == 0)
  VAR_9->inp_vflag |= VAR_1;
 VAR_9->in6p_hops = -1;
 VAR_9->in6p_cksum = -1;






 VAR_9->inp_ip_ttl = VAR_3;

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11) {
  FUNC_5(VAR_9);
  FUNC_6(VAR_9);
  FUNC_1(VAR_10);
  return (VAR_11);
 }
 FUNC_2(VAR_9);
 FUNC_1(VAR_10);
 return (0);
}
