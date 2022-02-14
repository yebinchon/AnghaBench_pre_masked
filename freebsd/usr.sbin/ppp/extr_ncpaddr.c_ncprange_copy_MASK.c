
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncprange {int ncprange_family; int ncprange_ip6width; int ncprange_ip6addr; int ncprange_ip4width; int ncprange_ip4mask; int ncprange_ip4addr; } ;




 int VAR_0 ;

void
FUNC_0(struct ncprange *VAR_1, const struct ncprange *VAR_2)
{
  switch (VAR_2->ncprange_family) {
  case 129:
    VAR_1->ncprange_family = 129;
    VAR_1->ncprange_ip4addr = VAR_2->ncprange_ip4addr;
    VAR_1->ncprange_ip4mask = VAR_2->ncprange_ip4mask;
    VAR_1->ncprange_ip4width = VAR_2->ncprange_ip4width;
    break;


  case 128:
    VAR_1->ncprange_family = 128;
    VAR_1->ncprange_ip6addr = VAR_2->ncprange_ip6addr;
    VAR_1->ncprange_ip6width = VAR_2->ncprange_ip6width;
    break;


  default:
    VAR_1->ncprange_family = VAR_0;
  }
}
