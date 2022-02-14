
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncpaddr {int ncpaddr_family; int ncpaddr_ip6addr; int ncpaddr_ip4addr; } ;




 int VAR_0 ;

void
FUNC_0(struct ncpaddr *VAR_1, const struct ncpaddr *VAR_2)
{
  switch (VAR_2->ncpaddr_family) {
  case 129:
    VAR_1->ncpaddr_family = 129;
    VAR_1->ncpaddr_ip4addr = VAR_2->ncpaddr_ip4addr;
    break;

  case 128:
    VAR_1->ncpaddr_family = 128;
    VAR_1->ncpaddr_ip6addr = VAR_2->ncpaddr_ip6addr;
    break;

  default:
    VAR_1->ncpaddr_family = VAR_0;
  }
}
