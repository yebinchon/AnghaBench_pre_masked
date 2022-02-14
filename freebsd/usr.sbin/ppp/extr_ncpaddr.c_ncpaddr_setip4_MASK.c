
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct ncpaddr {struct in_addr ncpaddr_ip4addr; int ncpaddr_family; } ;


 int VAR_0 ;

void
FUNC_0(struct ncpaddr *VAR_1, struct in_addr VAR_2)
{
  VAR_1->ncpaddr_family = VAR_0;
  VAR_1->ncpaddr_ip4addr = VAR_2;
}
