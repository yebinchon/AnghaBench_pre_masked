
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned char
FUNC_0(u8 VAR_0[2], int VAR_1)
{
 int VAR_2 = (VAR_1 & 1) * 4;
 u8 VAR_3 = VAR_0[VAR_1 >> 1];

 return (VAR_3 >> VAR_2) & 0x3;
}
