
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct nd_defrouter*) ;
 struct nd_defrouter* FUNC_3 (struct in6_addr*,struct ifnet*) ;
 int FUNC_4 (struct nd_defrouter*) ;
 int FUNC_5 (struct nd_defrouter*,int *) ;

bool
FUNC_6(struct in6_addr *VAR_0, struct ifnet *VAR_1)
{
 struct nd_defrouter *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_1();
  return (0);
 }

 FUNC_5(VAR_2, ((void*)0));
 FUNC_1();
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 return (1);
}
