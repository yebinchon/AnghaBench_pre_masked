
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {scalar_t__ so_pcb; } ;
struct inpcb {long inp_ip_p; int in6p_hops; int in6p_cksum; struct icmp6_filter* in6p_icmp6filt; int inp_vflag; } ;
struct icmp6_filter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct icmp6_filter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct icmp6_filter*,int ) ;
 int FUNC_6 (struct socket*,int *) ;
 struct icmp6_filter* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (struct thread*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_10 (struct socket*) ;

__attribute__((used)) static int
FUNC_11(struct socket *VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct inpcb *VAR_11;
 struct icmp6_filter *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_10(VAR_8);
 FUNC_4(VAR_11 == ((void*)0), ("rip6_attach: inp != NULL"));

 VAR_13 = FUNC_8(VAR_10, VAR_4);
 if (VAR_13)
  return (VAR_13);
 VAR_13 = FUNC_9(VAR_8, VAR_7, VAR_6);
 if (VAR_13)
  return (VAR_13);
 VAR_12 = FUNC_7(sizeof(struct icmp6_filter), VAR_3, VAR_2);
 if (VAR_12 == ((void*)0))
  return (VAR_0);
 FUNC_1(&VAR_5);
 VAR_13 = FUNC_6(VAR_8, &VAR_5);
 if (VAR_13) {
  FUNC_2(&VAR_5);
  FUNC_5(VAR_12, VAR_3);
  return (VAR_13);
 }
 VAR_11 = (struct inpcb *)VAR_8->so_pcb;
 FUNC_2(&VAR_5);
 VAR_11->inp_vflag |= VAR_1;
 VAR_11->inp_ip_p = (long)VAR_9;
 VAR_11->in6p_hops = -1;
 VAR_11->in6p_cksum = -1;
 VAR_11->in6p_icmp6filt = VAR_12;
 FUNC_0(VAR_11->in6p_icmp6filt);
 FUNC_3(VAR_11);
 return (0);
}
