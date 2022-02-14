
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncprange {int ncprange_family; int ncprange_ip4width; int ncprange_ip6width; int ncprange_ip4mask; } ;





 int FUNC_0 (int) ;

int
FUNC_1(struct ncprange *VAR_0, int VAR_1)
{
  switch (VAR_0->ncprange_family) {
  case 130:
    if (VAR_1 < 0 || VAR_1 > 32)
      break;
    VAR_0->ncprange_ip4width = VAR_1;
    VAR_0->ncprange_ip4mask = FUNC_0(VAR_1);
    break;


  case 129:
    if (VAR_1 < 0 || VAR_1 > 128)
      break;
    VAR_0->ncprange_ip6width = VAR_1;
    break;


  case 128:
    return 1;
  }

  return 0;
}
