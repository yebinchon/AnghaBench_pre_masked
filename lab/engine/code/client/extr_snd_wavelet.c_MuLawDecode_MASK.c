
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



short FUNC_0(byte VAR_0) {
 signed long VAR_1;
 byte VAR_2, VAR_3;

 VAR_0 = ~VAR_0;
 VAR_2 = (VAR_0>>4) & 0x7;
 VAR_3 = (VAR_0&0xf) + 16;
 VAR_1 = (VAR_3 << (VAR_2 +3)) - 128 - 4;

 return (VAR_0 & 0x80)? VAR_1 : -VAR_1;
}
