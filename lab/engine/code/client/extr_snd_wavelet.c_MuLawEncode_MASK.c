
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int* VAR_0 ;

byte FUNC_0(short VAR_1) {
 unsigned long VAR_2;
 byte VAR_3, VAR_4, VAR_5;

 VAR_3 = (VAR_1<0)?0:0x80;

 if (VAR_1<0) VAR_1=-VAR_1;
 VAR_2 = (long)VAR_1 << (16-sizeof(short)*8);
 VAR_2 += 128L + 4L;
 if (VAR_2 > 32767) VAR_2 = 32767;
 VAR_4 = VAR_0[(VAR_2>>7)&0xff] - 1;
 VAR_5 = (VAR_2>>(VAR_4+3))&0xf;
 return ~(VAR_3 | (VAR_4<<4) | VAR_5);
}
