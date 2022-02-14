
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr16; } ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;

__attribute__((used)) static inline int
FUNC_2(struct in6_addr *VAR_0)
{


 if (VAR_0->s6_addr16[0] == 0 ||
     FUNC_1(VAR_0) || FUNC_0(VAR_0))
  return (1);
 return (0);
}
