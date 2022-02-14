
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{

 switch (VAR_0) {
 case 138:
 case 137:
  switch (VAR_2) {
  case 131:
   return ("TCP");
  case 130:
   return ("UDP");
  case 134:
   return ("ICM");
  case 133:
   return ("RAW");
  case 132:
   return ("SCT");
  case 135:
   return ("IPD");
  default:
   return ("IP?");
  }

 case 136:
  switch (VAR_1) {
  case 128:
   return ("UDS");
  case 129:
   return ("UDD");
  default:
   return ("UD?");
  }
 default:
  return ("?");
 }
}
