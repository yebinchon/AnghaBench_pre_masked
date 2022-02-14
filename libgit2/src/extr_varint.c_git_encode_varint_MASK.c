
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varint ;
typedef int uintmax_t ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;

int FUNC_1(unsigned char *VAR_0, size_t VAR_1, uintmax_t VAR_2)
{
 unsigned char VAR_3[16];
 unsigned VAR_4 = sizeof(VAR_3) - 1;
 VAR_3[VAR_4] = VAR_2 & 127;
 while (VAR_2 >>= 7)
  VAR_3[--VAR_4] = 128 | (--VAR_2 & 127);
 if (VAR_0) {
  if (VAR_1 < (sizeof(VAR_3) - VAR_4))
   return -1;
  FUNC_0(VAR_0, VAR_3 + VAR_4, sizeof(VAR_3) - VAR_4);
 }
 return sizeof(VAR_3) - VAR_4;
}
