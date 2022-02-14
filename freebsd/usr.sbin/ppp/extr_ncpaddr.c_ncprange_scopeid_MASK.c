
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct in6_addr {int * s6_addr; } ;
struct ncprange {scalar_t__ ncprange_family; struct in6_addr ncprange_ip6addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 int FUNC_2 (int const) ;

int
FUNC_3(const struct ncprange *VAR_1)
{
  const struct in6_addr *VAR_2;
  int VAR_3 = -1;

  if (VAR_1->ncprange_family == VAR_0) {
    VAR_2 = &VAR_1->ncprange_ip6addr;
    if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
      if ((VAR_3 = FUNC_2(*(const u_short *)&VAR_2->s6_addr[2])) == 0)
        VAR_3 = -1;
  }

  return VAR_3;
}
