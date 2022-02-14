
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(u16 *VAR_4)
{

 int VAR_5 = VAR_2;

 switch (VAR_4[0] >> 8) {
 case 0x05:
 case 0x0d:
  VAR_5 = VAR_3;

  if ((VAR_4[0] & 0x0f) == 0)
   VAR_5 |= VAR_0;
  break;
 case 0x06:
 case 0x07:
  VAR_5 = VAR_0;
  break;
 case 0x45:
 case 0x4d:
  VAR_5 = VAR_3;
  break;
 case 0x47:
 case 0x46:
 case 0x86:
 case 0x87:
  VAR_5 = VAR_0;
  break;
 case 0x82:
  VAR_5 = VAR_1;
  break;
 case 0xb2:
  if ((VAR_4[0] & 0xff) == 0xb2)
   VAR_5 = VAR_1;
  break;
 case 0xa7:
  if ((VAR_4[0] & 0x0f) == 0x05)
   VAR_5 |= VAR_3;
  break;
 case 0xc0:
  if ((VAR_4[0] & 0x0f) == 0x05)
   VAR_5 |= VAR_3;
  break;
 case 0xeb:
  switch (VAR_4[2] & 0xff) {
  case 0x44:
  case 0x45:
   VAR_5 = VAR_0;
   break;
  }
  break;
 case 0xe3:
  if ((VAR_4[2] & 0xff) == 0x46)
   VAR_5 = VAR_0;
  break;
 case 0xec:
  switch (VAR_4[2] & 0xff) {
  case 0xe5:
  case 0xe6:
  case 0xf6:
  case 0xf7:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
   VAR_5 = VAR_0;
   break;
  }
  break;
 }
 return VAR_5;
}
