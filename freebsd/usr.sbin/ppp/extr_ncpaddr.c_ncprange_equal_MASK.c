
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip6addr; int ncprange_ip6width; TYPE_2__ ncprange_ip4mask; TYPE_1__ ncprange_ip4addr; } ;





 int FUNC_0 (int *,int *,int) ;

int
FUNC_1(const struct ncprange *VAR_0, const struct ncprange *VAR_1)
{
  if (VAR_0->ncprange_family != VAR_1->ncprange_family)
    return 0;

  switch (VAR_0->ncprange_family) {
  case 130:
    if (VAR_0->ncprange_ip4addr.s_addr != VAR_1->ncprange_ip4addr.s_addr)
      return 0;
    return VAR_0->ncprange_ip4mask.s_addr == VAR_1->ncprange_ip4mask.s_addr;


  case 129:
    if (VAR_0->ncprange_ip6width != VAR_1->ncprange_ip6width)
      return 0;
    return !FUNC_0(&VAR_0->ncprange_ip6addr, &VAR_1->ncprange_ip6addr,
                   sizeof VAR_0->ncprange_ip6addr);


  case 128:
    return 1;
  }

  return 0;
}
