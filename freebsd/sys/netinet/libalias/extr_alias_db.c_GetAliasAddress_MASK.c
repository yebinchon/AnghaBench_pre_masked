
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {scalar_t__ s_addr; } ;
struct alias_link {struct in_addr alias_addr; TYPE_1__* la; } ;
struct TYPE_2__ {struct in_addr aliasAddress; } ;


 scalar_t__ VAR_0 ;

struct in_addr
FUNC_0(struct alias_link *VAR_1)
{
 if (VAR_1->alias_addr.s_addr == VAR_0)
  return (VAR_1->la->aliasAddress);
 else
  return (VAR_1->alias_addr);
}
