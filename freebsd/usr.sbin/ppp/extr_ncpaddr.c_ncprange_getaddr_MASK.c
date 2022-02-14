
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncprange {int ncprange_family; int ncprange_ip6addr; int ncprange_ip4addr; } ;
struct ncpaddr {int ncpaddr_family; int ncpaddr_ip6addr; int ncpaddr_ip4addr; } ;





int
FUNC_0(const struct ncprange *VAR_0, struct ncpaddr *VAR_1)
{
  switch (VAR_0->ncprange_family) {
  case 129:
    VAR_1->ncpaddr_family = 129;
    VAR_1->ncpaddr_ip4addr = VAR_0->ncprange_ip4addr;
    return 1;

  case 128:
    VAR_1->ncpaddr_family = 128;
    VAR_1->ncpaddr_ip6addr = VAR_0->ncprange_ip6addr;
    return 1;

  }

  return 0;
}
