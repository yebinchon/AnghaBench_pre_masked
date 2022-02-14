
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int s_addr; } ;
struct ncpaddr {TYPE_1__ ncpaddr_ip4addr; int ncpaddr_family; } ;


 int VAR_0 ;

void
FUNC_0(struct ncpaddr *VAR_1, u_int32_t VAR_2)
{
  VAR_1->ncpaddr_family = VAR_0;
  VAR_1->ncpaddr_ip4addr.s_addr = VAR_2;
}
