
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s8 ;



__attribute__((used)) static s8 FUNC_0(long VAR_0)
{
 if (VAR_0 <= -128000)
  return -128;
 if (VAR_0 >= 127000)
  return 127;
 if (VAR_0 < 0)
  return (VAR_0 - 500) / 1000;
 return (VAR_0 + 500) / 1000;
}
