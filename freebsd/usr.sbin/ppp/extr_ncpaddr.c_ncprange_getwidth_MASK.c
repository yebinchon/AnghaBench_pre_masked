
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncprange {int ncprange_family; int ncprange_ip4width; int ncprange_ip6width; } ;





int
FUNC_0(const struct ncprange *VAR_0, int *VAR_1)
{
  switch (VAR_0->ncprange_family) {
  case 129:
    *VAR_1 = VAR_0->ncprange_ip4width;
    return 1;

  case 128:
    *VAR_1 = VAR_0->ncprange_ip6width;
    return 1;

  }

  return 0;
}
