
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int so_cred; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; scalar_t__ sin6_scope_id; int sin6_addr; } ;
struct sockaddr {int sa_len; } ;
struct in6_addr {int dummy; } ;
struct inpcb {struct in6_addr in6p_laddr; int in6p_faddr; int in6p_outputopts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct sockaddr_in6*,int ,struct inpcb*,int ,int,struct in6_addr*,int *) ;
 int FUNC_7 (struct sockaddr_in6*,int ) ;
 int FUNC_8 (struct socket*) ;
 struct inpcb* FUNC_9 (struct socket*) ;

__attribute__((used)) static int
FUNC_10(struct socket *VAR_7, struct sockaddr *VAR_8, struct thread *VAR_9)
{
 struct inpcb *VAR_10;
 struct sockaddr_in6 *VAR_11 = (struct sockaddr_in6 *)VAR_8;
 struct in6_addr VAR_12;
 int VAR_13 = 0, VAR_14 = 0;

 VAR_10 = FUNC_9(VAR_7);
 FUNC_5(VAR_10 != ((void*)0), ("rip6_connect: inp == NULL"));

 if (VAR_8->sa_len != sizeof(*VAR_11))
  return (VAR_3);
 if (FUNC_0(&VAR_4))
  return (VAR_1);
 if (VAR_11->sin6_family != VAR_0)
  return (VAR_2);
 if (VAR_11->sin6_scope_id == 0 && !VAR_5)
  VAR_14 = 1;
 if ((VAR_13 = FUNC_7(VAR_11, VAR_5)) != 0)
  return (VAR_13);

 FUNC_1(&VAR_6);
 FUNC_3(VAR_10);

 VAR_13 = FUNC_6(VAR_11, VAR_10->in6p_outputopts,
     VAR_10, VAR_7->so_cred, VAR_14, &VAR_12, ((void*)0));
 if (VAR_13) {
  FUNC_4(VAR_10);
  FUNC_2(&VAR_6);
  return (VAR_13);
 }

 VAR_10->in6p_faddr = VAR_11->sin6_addr;
 VAR_10->in6p_laddr = VAR_12;
 FUNC_8(VAR_7);
 FUNC_4(VAR_10);
 FUNC_2(&VAR_6);
 return (0);
}
