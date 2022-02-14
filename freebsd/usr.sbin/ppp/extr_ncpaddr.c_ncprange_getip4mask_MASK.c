
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct ncprange {int ncprange_family; struct in_addr ncprange_ip4mask; } ;




int
FUNC_0(const struct ncprange *VAR_0, struct in_addr *VAR_1)
{
  switch (VAR_0->ncprange_family) {
  case 128:
    *VAR_1 = VAR_0->ncprange_ip4mask;
    return 1;
  }

  return 0;
}
