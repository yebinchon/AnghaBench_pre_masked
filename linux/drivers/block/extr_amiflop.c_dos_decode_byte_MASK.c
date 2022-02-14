
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;


 unsigned char* VAR_0 ;

__attribute__((used)) static inline unsigned char FUNC_0(ushort VAR_1)
{
 register ushort VAR_2;
 register unsigned char VAR_3;
 register unsigned char *VAR_4 = VAR_0;

 VAR_2=VAR_1;
 VAR_2>>=8;
 VAR_2&=127;
 VAR_3 = VAR_4[VAR_2];
 VAR_3 <<= 4;
 VAR_2 = VAR_1 & 127;
 VAR_3 |= VAR_4[VAR_2];
 return VAR_3;
}
