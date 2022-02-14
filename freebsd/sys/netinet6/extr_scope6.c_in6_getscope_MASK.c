
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct in6_addr {int * s6_addr16; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;

uint16_t
FUNC_2(const struct in6_addr *VAR_0)
{

 if (FUNC_1(VAR_0) || FUNC_0(VAR_0))
  return (VAR_0->s6_addr16[1]);

 return (0);
}
