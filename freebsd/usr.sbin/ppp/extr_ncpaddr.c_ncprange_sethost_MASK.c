
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip4width; int ncprange_ip6width; int ncprange_ip6addr; TYPE_2__ ncprange_ip4mask; TYPE_1__ ncprange_ip4addr; } ;
struct ncpaddr {int ncpaddr_family; int ncpaddr_ip6addr; TYPE_1__ ncpaddr_ip4addr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct ncprange *VAR_3, const struct ncpaddr *VAR_4)
{
  switch (VAR_4->ncpaddr_family) {
  case 129:
    VAR_3->ncprange_family = 129;
    VAR_3->ncprange_ip4addr = VAR_4->ncpaddr_ip4addr;
    if (VAR_4->ncpaddr_ip4addr.s_addr == VAR_1) {
      VAR_3->ncprange_ip4mask.s_addr = VAR_1;
      VAR_3->ncprange_ip4width = 0;
    } else {
      VAR_3->ncprange_ip4mask.s_addr = VAR_2;
      VAR_3->ncprange_ip4width = 32;
    }
    break;


  case 128:
    VAR_3->ncprange_family = 128;
    VAR_3->ncprange_ip6addr = VAR_4->ncpaddr_ip6addr;
    VAR_3->ncprange_ip6width = 128;
    break;


  default:
    VAR_3->ncprange_family = VAR_0;
  }
}
