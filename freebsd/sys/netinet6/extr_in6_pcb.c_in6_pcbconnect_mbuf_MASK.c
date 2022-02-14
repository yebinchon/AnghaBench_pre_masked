
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct inpcbinfo {int dummy; } ;
struct in6_addr {int dummy; } ;
struct inpcb {scalar_t__ inp_lport; int inp_flow; int inp_flags; int inp_fport; int in6p_faddr; struct in6_addr in6p_laddr; struct inpcbinfo* inp_pcbinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct inpcbinfo*) ;
 int FUNC_2 (struct inpcb*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inpcb*,struct sockaddr*,struct ucred*) ;
 int FUNC_5 (struct inpcb*,struct sockaddr*,struct in6_addr*) ;
 int * FUNC_6 (struct inpcbinfo*,int *,int ,struct in6_addr*,scalar_t__,int ,int *) ;
 int FUNC_7 (struct inpcb*,struct mbuf*) ;
 int FUNC_8 () ;

int
FUNC_9(struct inpcb *VAR_3, struct sockaddr *VAR_4,
    struct ucred *VAR_5, struct mbuf *VAR_6)
{
 struct inpcbinfo *VAR_7 = VAR_3->inp_pcbinfo;
 struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *)VAR_4;
 struct in6_addr VAR_9;
 int VAR_10;

 FUNC_2(VAR_3);
 FUNC_1(VAR_7);





 if ((VAR_10 = FUNC_5(VAR_3, VAR_4, &VAR_9)) != 0)
  return (VAR_10);

 if (FUNC_6(VAR_7, &VAR_8->sin6_addr,
          VAR_8->sin6_port,
         FUNC_0(&VAR_3->in6p_laddr)
         ? &VAR_9 : &VAR_3->in6p_laddr,
         VAR_3->inp_lport, 0, ((void*)0)) != ((void*)0)) {
  return (VAR_0);
 }
 if (FUNC_0(&VAR_3->in6p_laddr)) {
  if (VAR_3->inp_lport == 0) {
   VAR_10 = FUNC_4(VAR_3, (struct sockaddr *)0, VAR_5);
   if (VAR_10)
    return (VAR_10);
  }
  VAR_3->in6p_laddr = VAR_9;
 }
 VAR_3->in6p_faddr = VAR_8->sin6_addr;
 VAR_3->inp_fport = VAR_8->sin6_port;

 VAR_3->inp_flow &= ~VAR_2;
 if (VAR_3->inp_flags & VAR_1)
  VAR_3->inp_flow |=
      (FUNC_3(FUNC_8()) & VAR_2);

 FUNC_7(VAR_3, VAR_6);

 return (0);
}
