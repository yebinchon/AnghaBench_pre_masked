
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned int VAR_0)
{

 if (((VAR_0 >> 16) & 0x1f) != 1)
  return 0;

 switch (VAR_0 >> 26) {
 case 128:
 case 133:
 case 129:
 case 130:
 case 131:
  return 1;
 case 132:
  return (VAR_0 & 3) == 1;
 case 140:

  switch ((VAR_0 >> 1) & 0x3ff) {
  case 138:
  case 134:
  case 139:
  case 135:
  case 136:
  case 137:
   return 1;
  }
 }
 return 0;
}
