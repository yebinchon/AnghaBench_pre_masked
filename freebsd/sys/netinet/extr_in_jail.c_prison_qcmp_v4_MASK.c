
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef scalar_t__ in_addr_t ;


 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 in_addr_t VAR_2, VAR_3;






 VAR_2 = FUNC_0(((const struct in_addr *)VAR_0)->s_addr);
 VAR_3 = FUNC_0(((const struct in_addr *)VAR_1)->s_addr);





 if (VAR_2 > VAR_3)
  return (1);
 else if (VAR_2 < VAR_3)
  return (-1);
 else
  return (0);
}
