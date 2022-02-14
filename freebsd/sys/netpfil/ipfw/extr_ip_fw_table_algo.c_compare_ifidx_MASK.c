
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ifidx {scalar_t__ kidx; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ifidx *VAR_2;
 uint16_t VAR_3;

 VAR_3 = *((const uint16_t *)VAR_0);
 VAR_2 = (const struct ifidx *)VAR_1;

 if (VAR_3 < VAR_2->kidx)
  return (-1);
 else if (VAR_3 > VAR_2->kidx)
  return (1);

 return (0);
}
