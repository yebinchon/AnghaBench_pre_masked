
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(const uint32_t VAR_0)
{

 if (VAR_0 >> 8 == 0)
  return (1);
 else if (VAR_0 >> 16 == 0)
  return (2);
 else
  return (VAR_0 >> 24 == 0 ? 3 : 4);
}
