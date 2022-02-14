
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int s_addr; } ;
struct ncpaddr {scalar_t__ ncpaddr_family; TYPE_1__ ncpaddr_ip4addr; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(const struct ncpaddr *VAR_1, u_int32_t *VAR_2)
{
  if (VAR_1->ncpaddr_family != VAR_0)
    return 0;
  *VAR_2 = VAR_1->ncpaddr_ip4addr.s_addr;
  return 1;
}
