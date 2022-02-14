
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* byte ;
struct TYPE_4__ {scalar_t__ deviceSupportsGamma; } ;
struct TYPE_3__ {int (* Hunk_FreeTempMemory ) (void**) ;int (* FS_WriteFile ) (char*,void**,size_t) ;} ;


 int FUNC_0 (void**,int ,int) ;
 void** FUNC_1 (int,int,int,int,size_t*,int*) ;
 int FUNC_2 (void**,size_t) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char*,void**,size_t) ;
 int FUNC_4 (void**) ;

void FUNC_5(int VAR_2, int VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
 byte *VAR_7, *VAR_8;
 byte *VAR_9, *VAR_10;
 byte *VAR_11, *VAR_12;
 byte VAR_13;

 int VAR_14, VAR_15;
 size_t VAR_16 = 18, VAR_17;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_16, &VAR_15);
 VAR_8 = VAR_7 + VAR_16 - 18;

 FUNC_0 (VAR_8, 0, 18);
 VAR_8[2] = 2;
 VAR_8[12] = VAR_4 & 255;
 VAR_8[13] = VAR_4 >> 8;
 VAR_8[14] = VAR_5 & 255;
 VAR_8[15] = VAR_5 >> 8;
 VAR_8[16] = 24;


 VAR_14 = VAR_4 * 3;

 VAR_9 = VAR_10 = VAR_7 + VAR_16;
 VAR_12 = VAR_9 + (VAR_14 + VAR_15) * VAR_5;

 while(VAR_9 < VAR_12)
 {
  VAR_11 = VAR_9 + VAR_14;

  while(VAR_9 < VAR_11)
  {
   VAR_13 = VAR_9[0];
   *VAR_10++ = VAR_9[2];
   *VAR_10++ = VAR_9[1];
   *VAR_10++ = VAR_13;

   VAR_9 += 3;
  }


  VAR_9 += VAR_15;
 }

 VAR_17 = VAR_14 * VAR_5;


 if(VAR_0.deviceSupportsGamma)
  FUNC_2(VAR_7 + VAR_16, VAR_17);

 VAR_1.FS_WriteFile(VAR_6, VAR_8, VAR_17 + 18);

 VAR_1.Hunk_FreeTempMemory(VAR_7);
}
