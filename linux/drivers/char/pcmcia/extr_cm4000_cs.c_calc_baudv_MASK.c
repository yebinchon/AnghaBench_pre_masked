
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned char VAR_0)
{
 unsigned int VAR_1, VAR_2, VAR_3, VAR_4;

 VAR_3 = 372;
 VAR_4 = 1;


 switch ((VAR_0 >> 4) & 0x0F) {
 case 0x00:
  VAR_1 = 372;
  break;
 case 0x01:
  VAR_1 = 372;
  break;
 case 0x02:
  VAR_1 = 558;
  break;
 case 0x03:
  VAR_1 = 744;
  break;
 case 0x04:
  VAR_1 = 1116;
  break;
 case 0x05:
  VAR_1 = 1488;
  break;
 case 0x06:
  VAR_1 = 1860;
  break;
 case 0x07:
  VAR_1 = VAR_3;
  break;
 case 0x08:
  VAR_1 = VAR_3;
  break;
 case 0x09:
  VAR_1 = 512;
  break;
 case 0x0A:
  VAR_1 = 768;
  break;
 case 0x0B:
  VAR_1 = 1024;
  break;
 case 0x0C:
  VAR_1 = 1536;
  break;
 case 0x0D:
  VAR_1 = 2048;
  break;
 default:
  VAR_1 = VAR_3;
  break;
 }


 switch (VAR_0 & 0x0F) {
 case 0x00:
  VAR_2 = VAR_4;
  break;
 case 0x01:
  VAR_2 = 1;
  break;
 case 0x02:
  VAR_2 = 2;
  break;
 case 0x03:
  VAR_2 = 4;
  break;
 case 0x04:
  VAR_2 = 8;
  break;
 case 0x05:
  VAR_2 = 16;
  break;
 case 0x06:
  VAR_2 = 32;
  break;
 case 0x07:
  VAR_2 = VAR_4;
  break;
 case 0x08:
  VAR_2 = 12;
  break;
 case 0x09:
  VAR_2 = 20;
  break;
 default:
  VAR_2 = VAR_4;
  break;
 }

 return (VAR_1 / VAR_2);
}
