
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 scalar_t__ FUNC_2 (struct in6_addr const*) ;
 scalar_t__ FUNC_3 (struct in6_addr const*) ;
 int FUNC_4 (struct in6_addr const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_5(const struct in6_addr *VAR_3)
{

 if (FUNC_2(VAR_3)) {




  if (FUNC_4(VAR_3) == 0x0f)
   return (VAR_0);
  return (FUNC_4(VAR_3));
 }
 if (FUNC_0(VAR_3) ||
     FUNC_1(VAR_3))
  return (VAR_1);
 if (FUNC_3(VAR_3))
  return (VAR_2);
 return (VAR_0);
}
