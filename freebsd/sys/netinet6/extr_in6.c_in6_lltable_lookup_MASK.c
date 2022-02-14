
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct lltable {int llt_ifp; } ;
struct llentry {int la_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (struct llentry*) ;
 int VAR_3 ;
 int FUNC_4 (struct llentry*) ;
 int FUNC_5 (struct llentry*) ;
 scalar_t__ FUNC_6 (int) ;
 struct llentry* FUNC_7 (struct lltable*,int *) ;

__attribute__((used)) static struct llentry *
FUNC_8(struct lltable *VAR_4, u_int VAR_5,
 const struct sockaddr *VAR_6)
{
 const struct sockaddr_in6 *VAR_7 = (const struct sockaddr_in6 *)VAR_6;
 struct llentry *VAR_8;

 FUNC_0(VAR_4->llt_ifp);
 FUNC_1(VAR_6->sa_family == VAR_0,
     ("sin_family %d", VAR_6->sa_family));
 FUNC_1((VAR_5 & (VAR_3 | VAR_1)) !=
     (VAR_3 | VAR_1),
     ("wrong lle request flags: %#x", VAR_5));

 VAR_8 = FUNC_7(VAR_4, &VAR_7->sin6_addr);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 if (VAR_5 & VAR_3)
  return (VAR_8);

 if (VAR_5 & VAR_1)
  FUNC_4(VAR_8);
 else
  FUNC_2(VAR_8);





 if (FUNC_6((VAR_8->la_flags & VAR_2) == 0)) {
  if (VAR_5 & VAR_1)
   FUNC_5(VAR_8);
  else
   FUNC_3(VAR_8);
  return (((void*)0));
 }
 return (VAR_8);
}
