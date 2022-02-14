
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct ncpaddr {struct in6_addr ncpaddr_ip6addr; int ncpaddr_family; } ;


 int VAR_0 ;

void
FUNC_0(struct ncpaddr *VAR_1, const struct in6_addr *VAR_2)
{
  VAR_1->ncpaddr_family = VAR_0;
  VAR_1->ncpaddr_ip6addr = *VAR_2;
}
