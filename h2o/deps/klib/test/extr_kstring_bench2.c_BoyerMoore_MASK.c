
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0( unsigned char *VAR_0, unsigned int VAR_1, unsigned char *VAR_2, unsigned int VAR_3 )
{
 unsigned int VAR_4[256], VAR_5;
 unsigned char *VAR_6;
 register unsigned char VAR_7;

 if (VAR_3 == 0)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
  VAR_4[VAR_5] = VAR_3;
 VAR_6 = VAR_2;
 VAR_5 = --VAR_3;
 do {
  VAR_4[*VAR_6++] = VAR_5;
 } while (VAR_5--);
 VAR_7 = *--VAR_6;
 VAR_6 = VAR_0 + VAR_3;
 VAR_1 -= VAR_3+(VAR_3-1);
 while ((int)VAR_1 > 0 ) {
  unsigned int VAR_8;
  VAR_8 = VAR_4[*VAR_6];
  VAR_6 += VAR_8;
  VAR_1 -= VAR_8;
  VAR_8 = VAR_4[*VAR_6];
  VAR_6 += VAR_8;
  VAR_1 -= VAR_8;
  VAR_8 = VAR_4[*VAR_6];
  if (*VAR_6 != VAR_7) {
   VAR_6 += VAR_8;
   VAR_1 -= VAR_8;
   continue;
  }
  VAR_5 = VAR_3;
  do {
   if (VAR_5-- == 0) return VAR_6;
  } while (*--VAR_6 == VAR_2[VAR_5]);
  VAR_6 += (VAR_3 - VAR_5 + 1);
  VAR_1--;
 }
 return ((void*)0);
}
