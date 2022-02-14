
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* __u6_addr8; } ;
struct in6_addr {TYPE_1__ __u6_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 scalar_t__ FUNC_2 (struct in6_addr const*) ;
 scalar_t__ FUNC_3 (struct in6_addr const*) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(const struct in6_addr *VAR_1, int VAR_2)
{

 if (FUNC_4(VAR_2) != 0)
  return (VAR_0);


 if (FUNC_3(VAR_1) && VAR_2 != 96)
  return (VAR_0);


 if (VAR_1->__u6_addr.__u6_addr8[8] != 0)
  return (VAR_0);


 if (FUNC_1(VAR_1) ||
     FUNC_2(VAR_1) ||
     FUNC_0(VAR_1))
  return (VAR_0);
 return (0);
}
