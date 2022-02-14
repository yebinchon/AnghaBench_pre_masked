
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_multi {int dummy; } ;
struct in6_mfilter {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct ifnet*,struct in6_addr const*,int *,struct in6_multi**,int const) ;

int
FUNC_3(struct ifnet *VAR_0, const struct in6_addr *VAR_1,
              struct in6_mfilter *VAR_2, struct in6_multi **VAR_3,
    const int VAR_4)
{
 int VAR_5;

 FUNC_0();
 VAR_5 = FUNC_2(VAR_0, VAR_1, ((void*)0), VAR_3, VAR_4);
 FUNC_1();
 return (VAR_5);
}
