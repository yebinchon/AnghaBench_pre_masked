
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct thread {int dummy; } ;
struct socket {int so_state; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr {int sa_len; } ;
struct mbuf {int dummy; } ;
struct inpcb {int in6p_faddr; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct sockaddr_in6*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*,struct socket*,struct sockaddr_in6*,struct mbuf*) ;
 struct inpcb* FUNC_8 (struct socket*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_8, int VAR_9, struct mbuf *VAR_10, struct sockaddr *VAR_11,
    struct mbuf *VAR_12, struct thread *VAR_13)
{
 struct inpcb *VAR_14;
 struct sockaddr_in6 VAR_15;
 struct sockaddr_in6 *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_8(VAR_8);
 FUNC_2(VAR_14 != ((void*)0), ("rip6_send: inp == NULL"));



 if (VAR_8->so_state & VAR_7) {
  if (VAR_11) {
   FUNC_6(VAR_10);
   return (VAR_4);
  }

  FUNC_4(&VAR_15, sizeof(VAR_15));
  VAR_15.sin6_family = VAR_0;
  VAR_15.sin6_len = sizeof(struct sockaddr_in6);
  FUNC_0(VAR_14);
  FUNC_3(&VAR_14->in6p_faddr, &VAR_15.sin6_addr,
      sizeof(struct in6_addr));
  FUNC_1(VAR_14);
  VAR_16 = &VAR_15;
 } else {
  if (VAR_11 == ((void*)0)) {
   FUNC_6(VAR_10);
   return (VAR_5);
  }
  if (VAR_11->sa_len != sizeof(struct sockaddr_in6)) {
   FUNC_6(VAR_10);
   return (VAR_3);
  }
  VAR_15 = *(struct sockaddr_in6 *)VAR_11;
  VAR_16 = &VAR_15;

  if (VAR_16->sin6_family == VAR_1) {





   FUNC_5(VAR_6, "rip6 SEND: address family is "
       "unspec. Assume AF_INET6\n");
   VAR_16->sin6_family = VAR_0;
  } else if (VAR_16->sin6_family != VAR_0) {
   FUNC_6(VAR_10);
   return(VAR_2);
  }
 }
 VAR_17 = FUNC_7(VAR_10, VAR_8, VAR_16, VAR_12);
 return (VAR_17);
}
