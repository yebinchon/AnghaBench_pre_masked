
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_multi {int dummy; } ;
struct in_mfilter {int dummy; } ;
struct in_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct ifnet*,struct in_addr const*,struct in_mfilter*,struct in_multi**) ;

int
FUNC_3(struct ifnet *VAR_0, const struct in_addr *VAR_1,
              struct in_mfilter *VAR_2, struct in_multi **VAR_3)
{
 int VAR_4;

 FUNC_0();
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1();

 return (VAR_4);
}
