
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 void** VAR_1 ;

int FUNC_0(unsigned char VAR_2, void *VAR_3, int VAR_4)
{
 unsigned char VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_3;
 VAR_8 = 0;

 VAR_5 = VAR_1[VAR_8];

 while((VAR_5 != VAR_0) && (VAR_8 < 0x10000)) {
  VAR_9 = (int)VAR_1[VAR_8+2] + 2;
  if (VAR_5 == VAR_2) {
   VAR_9 = (VAR_9 > VAR_4)?VAR_4:VAR_9;
   for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
    *VAR_6++ = VAR_1[VAR_8+(VAR_7<<1)];
   }

   return VAR_9;
  }
  VAR_8 += VAR_9<<1;
  VAR_5 = VAR_1[VAR_8];
 }

 return 0;
}
