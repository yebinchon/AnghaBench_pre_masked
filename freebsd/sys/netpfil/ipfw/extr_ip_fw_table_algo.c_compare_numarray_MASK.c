
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct numarray {scalar_t__ number; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct numarray *VAR_2;
 uint32_t VAR_3;

 VAR_3 = *((const uint32_t *)VAR_0);
 VAR_2 = (const struct numarray *)VAR_1;

 if (VAR_3 < VAR_2->number)
  return (-1);
 else if (VAR_3 > VAR_2->number)
  return (1);

 return (0);
}
