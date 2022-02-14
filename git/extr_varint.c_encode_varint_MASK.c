
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varint ;
typedef int uintmax_t ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;

int FUNC_1(uintmax_t VAR_0, unsigned char *VAR_1)
{
 unsigned char VAR_2[16];
 unsigned VAR_3 = sizeof(VAR_2) - 1;
 VAR_2[VAR_3] = VAR_0 & 127;
 while (VAR_0 >>= 7)
  VAR_2[--VAR_3] = 128 | (--VAR_0 & 127);
 if (VAR_1)
  FUNC_0(VAR_1, VAR_2 + VAR_3, sizeof(VAR_2) - VAR_3);
 return sizeof(VAR_2) - VAR_3;
}
