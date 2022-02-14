
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct ncprange {scalar_t__ ncprange_family; struct in_addr ncprange_ip4addr; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(const struct ncprange *VAR_1, struct in_addr *VAR_2)
{
  if (VAR_1->ncprange_family != VAR_0)
    return 0;

  *VAR_2 = VAR_1->ncprange_ip4addr;
  return 1;
}
