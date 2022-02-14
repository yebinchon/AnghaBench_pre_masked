
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0 < VAR_1; VAR_0++) {
  switch (*VAR_0) {
  case 0xff:
   VAR_2 += 8;
   break;
  case 0xfe:
   VAR_2 += 7;
   break;
  case 0xfc:
   VAR_2 += 6;
   break;
  case 0xf8:
   VAR_2 += 5;
   break;
  case 0xf0:
   VAR_2 += 4;
   break;
  case 0xe0:
   VAR_2 += 3;
   break;
  case 0xc0:
   VAR_2 += 2;
   break;
  case 0x80:
   VAR_2 += 1;
   break;
  case 0x00:
   break;
  default:
   return (-1);
  }
 }

 return (VAR_2);
}
