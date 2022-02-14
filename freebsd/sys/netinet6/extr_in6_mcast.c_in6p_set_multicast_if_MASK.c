
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sockopt {int sopt_valsize; } ;
struct ip6_moptions {struct ifnet* im6o_multicast_ifp; } ;
struct inpcb {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ VAR_3 ;
 struct ifnet* FUNC_1 (scalar_t__) ;
 struct ip6_moptions* FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct sockopt*,scalar_t__*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct inpcb *VAR_4, struct sockopt *VAR_5)
{
 struct ifnet *VAR_6;
 struct ip6_moptions *VAR_7;
 u_int VAR_8;
 int VAR_9;

 if (VAR_5->sopt_valsize != sizeof(u_int))
  return (VAR_1);

 VAR_9 = FUNC_3(VAR_5, &VAR_8, sizeof(u_int), sizeof(u_int));
 if (VAR_9)
  return (VAR_9);
 if (VAR_3 < VAR_8)
  return (VAR_1);
 if (VAR_8 == 0)
  VAR_6 = ((void*)0);
 else {
  VAR_6 = FUNC_1(VAR_8);
  if (VAR_6 == ((void*)0))
   return (VAR_1);
  if ((VAR_6->if_flags & VAR_2) == 0)
   return (VAR_0);
 }
 VAR_7 = FUNC_2(VAR_4);
 VAR_7->im6o_multicast_ifp = VAR_6;
 FUNC_0(VAR_4);

 return (0);
}
