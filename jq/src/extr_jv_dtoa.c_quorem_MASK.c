
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef int ULong ;
typedef int ULLong ;
struct TYPE_6__ {int wds; int* x; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,int) ;
 scalar_t__ FUNC_2 (struct dtoa_context*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3
 (struct dtoa_context* VAR_1, Bigint *VAR_2, Bigint *VAR_3)
{
 int VAR_4;
 ULong *VAR_5, *VAR_6, VAR_7, *VAR_8, *VAR_9;



 ULong VAR_10, VAR_11, VAR_12, VAR_13;





 VAR_4 = VAR_3->wds;




 if (VAR_2->wds < VAR_4)
  return 0;
 VAR_8 = VAR_3->x;
 VAR_9 = VAR_8 + --VAR_4;
 VAR_5 = VAR_2->x;
 VAR_6 = VAR_5 + VAR_4;
 VAR_7 = *VAR_6 / (*VAR_9 + 1);
 if (VAR_7) {
  VAR_10 = 0;
  VAR_11 = 0;
  do {
   VAR_13 = *VAR_8++ * VAR_7 + VAR_11;
   VAR_11 = VAR_13 >> 16;
   VAR_12 = *VAR_5 - (VAR_13 & 0xffff) - VAR_10;
   VAR_10 = (VAR_12 & 0x10000) >> 16;
   *VAR_5++ = VAR_12 & 0xffff;


   }
   while(VAR_8 <= VAR_9);
  if (!*VAR_6) {
   VAR_5 = VAR_2->x;
   while(--VAR_6 > VAR_5 && !*VAR_6)
    --VAR_4;
   VAR_2->wds = VAR_4;
   }
  }
 if (FUNC_2(VAR_1, VAR_2, VAR_3) >= 0) {
  VAR_7++;
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_5 = VAR_2->x;
  VAR_8 = VAR_3->x;
  do {
   VAR_13 = *VAR_8++ + VAR_11;
   VAR_11 = VAR_13 >> 16;
   VAR_12 = *VAR_5 - (VAR_13 & 0xffff) - VAR_10;
   VAR_10 = (VAR_12 & 0x10000) >> 16;
   *VAR_5++ = VAR_12 & 0xffff;


   }
   while(VAR_8 <= VAR_9);
  VAR_5 = VAR_2->x;
  VAR_6 = VAR_5 + VAR_4;
  if (!*VAR_6) {
   while(--VAR_6 > VAR_5 && !*VAR_6)
    --VAR_4;
   VAR_2->wds = VAR_4;
   }
  }
 return VAR_7;
 }
