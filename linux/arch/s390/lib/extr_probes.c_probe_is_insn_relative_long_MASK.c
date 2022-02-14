
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



int FUNC_0(u16 *VAR_0)
{


 switch (VAR_0[0] >> 8) {
 case 0xc0:
  if ((VAR_0[0] & 0x0f) == 0x00)
   return 1;
  break;
 case 0xc4:
  switch (VAR_0[0] & 0x0f) {
  case 0x02:
  case 0x04:
  case 0x05:
  case 0x06:
  case 0x07:
  case 0x08:
  case 0x0b:
  case 0x0c:
  case 0x0d:
  case 0x0e:
  case 0x0f:
   return 1;
  }
  break;
 case 0xc6:
  switch (VAR_0[0] & 0x0f) {
  case 0x02:
  case 0x04:
  case 0x05:
  case 0x06:
  case 0x07:
  case 0x08:
  case 0x0a:
  case 0x0c:
  case 0x0d:
  case 0x0e:
  case 0x0f:
   return 1;
  }
  break;
 }
 return 0;
}
