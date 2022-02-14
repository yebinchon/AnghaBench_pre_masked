
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct ncprange {int ncprange_family; TYPE_2__ ncprange_ip4mask; TYPE_1__ ncprange_ip4addr; } ;
struct in_addr {int s_addr; } ;




int
FUNC_0(const struct ncprange *VAR_0, struct in_addr VAR_1)
{
  switch (VAR_0->ncprange_family) {
  case 128:
    return !((VAR_1.s_addr ^ VAR_0->ncprange_ip4addr.s_addr) &
             VAR_0->ncprange_ip4mask.s_addr);
  }

  return 0;
}
