
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1 = VAR_0 >> 26;

 if (VAR_1 == 16)
  return 1;
 if (VAR_1 == 19) {
  switch ((VAR_0 >> 1) & 0x3ff) {
  case 16:
  case 528:
  case 560:
   return 1;
  }
 }
 return 0;
}
