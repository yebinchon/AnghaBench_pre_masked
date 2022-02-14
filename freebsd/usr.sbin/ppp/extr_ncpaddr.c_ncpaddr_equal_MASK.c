
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct ncpaddr {int ncpaddr_family; int ncpaddr_ip6addr; TYPE_1__ ncpaddr_ip4addr; } ;





 int FUNC_0 (int *,int *,int) ;

int
FUNC_1(const struct ncpaddr *VAR_0, const struct ncpaddr *VAR_1)
{
  if (VAR_0->ncpaddr_family != VAR_1->ncpaddr_family)
    return 0;

  switch (VAR_0->ncpaddr_family) {
  case 130:
    return VAR_0->ncpaddr_ip4addr.s_addr == VAR_1->ncpaddr_ip4addr.s_addr;


  case 129:
    return !FUNC_0(&VAR_0->ncpaddr_ip6addr, &VAR_1->ncpaddr_ip6addr,
                   sizeof VAR_0->ncpaddr_ip6addr);


  case 128:
    return 1;
  }

  return 0;
}
