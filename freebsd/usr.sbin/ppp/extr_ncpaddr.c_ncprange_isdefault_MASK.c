
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip6addr; int ncprange_ip6width; TYPE_1__ ncprange_ip4addr; } ;




 int FUNC_0 (int *) ;
 int VAR_0 ;

int
FUNC_1(const struct ncprange *VAR_1)
{
  switch (VAR_1->ncprange_family) {
  case 129:
    if (VAR_1->ncprange_ip4addr.s_addr == VAR_0)
      return 1;
    break;


  case 128:
    if (VAR_1->ncprange_ip6width == 0 &&
        FUNC_0(&VAR_1->ncprange_ip6addr))
      return 1;
    break;

  }

  return 0;
}
