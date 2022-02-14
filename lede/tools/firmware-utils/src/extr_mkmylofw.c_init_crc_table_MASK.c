
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;
typedef int p ;


 long* VAR_0 ;

void
FUNC_0(void)
{


 uint32_t VAR_1;
 uint32_t VAR_2;
 int VAR_3;
 int VAR_4;


 static const int VAR_5[] = {0,1,2,4,5,7,8,10,11,12,16,22,23,26};


 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < sizeof(VAR_5)/sizeof(int); VAR_3++)
  VAR_2 |= 1L << (31 - VAR_5[VAR_3]);

 VAR_0[0] = 0;

 for (VAR_3 = 1; VAR_3 < 256; VAR_3++) {
  VAR_1 = 0;
  for (VAR_4 = VAR_3 | 256; VAR_4 != 1; VAR_4 >>= 1) {
   VAR_1 = VAR_1 & 1 ? (VAR_1 >> 1) ^ VAR_2 : VAR_1 >> 1;
   if (VAR_4 & 1)
    VAR_1 ^= VAR_2;
  }
  VAR_0[VAR_3] = VAR_1;
 }
}
