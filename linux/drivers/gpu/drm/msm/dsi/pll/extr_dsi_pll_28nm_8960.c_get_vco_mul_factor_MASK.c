
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned long VAR_0)
{
 unsigned long VAR_1;


 VAR_1 = (VAR_0 * 8) / 1000000;

 if (VAR_1 < 125)
  return 64;
 else if (VAR_1 < 250)
  return 32;
 else if (VAR_1 < 600)
  return 16;
 else
  return 8;
}
