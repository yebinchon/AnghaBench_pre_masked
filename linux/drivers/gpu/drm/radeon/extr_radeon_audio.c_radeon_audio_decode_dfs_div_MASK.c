
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
 if (VAR_0 >= 8 && VAR_0 < 64)
  return (VAR_0 - 8) * 25 + 200;
 else if (VAR_0 >= 64 && VAR_0 < 96)
  return (VAR_0 - 64) * 50 + 1600;
 else if (VAR_0 >= 96 && VAR_0 < 128)
  return (VAR_0 - 96) * 100 + 3200;
 else
  return 0;
}
