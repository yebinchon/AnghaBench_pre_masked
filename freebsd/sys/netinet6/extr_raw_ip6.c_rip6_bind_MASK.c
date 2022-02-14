
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_addr; } ;
struct sockaddr {int sa_len; } ;
struct inpcb {int in6p_laddr; } ;
struct in6_ifaddr {int ia6_flags; } ;
struct ifaddr {int dummy; } ;
struct epoch_tracker {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct epoch_tracker) ;
 int FUNC_8 (struct epoch_tracker) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ifaddr* FUNC_9 (struct sockaddr*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sockaddr_in6*,int ) ;
 struct inpcb* FUNC_12 (struct socket*) ;

__attribute__((used)) static int
FUNC_13(struct socket *VAR_10, struct sockaddr *VAR_11, struct thread *VAR_12)
{
 struct epoch_tracker VAR_13;
 struct inpcb *VAR_14;
 struct sockaddr_in6 *VAR_15 = (struct sockaddr_in6 *)VAR_11;
 struct ifaddr *VAR_16 = ((void*)0);
 int VAR_17 = 0;

 VAR_14 = FUNC_12(VAR_10);
 FUNC_6(VAR_14 != ((void*)0), ("rip6_bind: inp == NULL"));

 if (VAR_11->sa_len != sizeof(*VAR_15))
  return (VAR_2);
 if ((VAR_17 = FUNC_10(VAR_12->td_ucred, &VAR_15->sin6_addr)) != 0)
  return (VAR_17);
 if (FUNC_0(&VAR_7) || VAR_15->sin6_family != VAR_0)
  return (VAR_1);
 if ((VAR_17 = FUNC_11(VAR_15, VAR_8)) != 0)
  return (VAR_17);

 FUNC_7(VAR_13);
 if (!FUNC_1(&VAR_15->sin6_addr) &&
     (VAR_16 = FUNC_9((struct sockaddr *)VAR_15)) == ((void*)0)) {
  FUNC_8(VAR_13);
  return (VAR_1);
 }
 if (VAR_16 != ((void*)0) &&
     ((struct in6_ifaddr *)VAR_16)->ia6_flags &
     (VAR_3|VAR_6|
      VAR_5|VAR_4)) {
  FUNC_8(VAR_13);
  return (VAR_1);
 }
 FUNC_8(VAR_13);
 FUNC_2(&VAR_9);
 FUNC_4(VAR_14);
 VAR_14->in6p_laddr = VAR_15->sin6_addr;
 FUNC_5(VAR_14);
 FUNC_3(&VAR_9);
 return (0);
}
