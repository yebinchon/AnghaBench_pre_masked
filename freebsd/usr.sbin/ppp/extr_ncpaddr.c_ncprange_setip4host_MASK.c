
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct ncprange {int ncprange_ip4width; TYPE_1__ ncprange_ip4mask; struct in_addr ncprange_ip4addr; int ncprange_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_0(struct ncprange *VAR_3, struct in_addr VAR_4)
{
  VAR_3->ncprange_family = VAR_0;
  VAR_3->ncprange_ip4addr = VAR_4;
  if (VAR_4.s_addr == VAR_1) {
    VAR_3->ncprange_ip4mask.s_addr = VAR_1;
    VAR_3->ncprange_ip4width = 0;
  } else {
    VAR_3->ncprange_ip4mask.s_addr = VAR_2;
    VAR_3->ncprange_ip4width = 32;
  }
}
