
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef int ULong ;
typedef int ULLong ;
struct TYPE_8__ {int wds; int* x; int sign; int k; } ;
typedef TYPE_1__ Bigint ;


 TYPE_1__* FUNC_0 (struct dtoa_context*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct dtoa_context*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static Bigint *
FUNC_3
 (struct dtoa_context* VAR_1, Bigint *VAR_2, Bigint *VAR_3)
{
 Bigint *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 ULong *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;



 ULong VAR_13, VAR_14;





 VAR_5 = FUNC_2(VAR_1, VAR_2,VAR_3);
 if (!VAR_5) {
  VAR_4 = FUNC_0(VAR_1, 0);
  VAR_4->wds = 1;
  VAR_4->x[0] = 0;
  return VAR_4;
  }
 if (VAR_5 < 0) {
  VAR_4 = VAR_2;
  VAR_2 = VAR_3;
  VAR_3 = VAR_4;
  VAR_5 = 1;
  }
 else
  VAR_5 = 0;
 VAR_4 = FUNC_0(VAR_1, VAR_2->k);
 VAR_4->sign = VAR_5;
 VAR_6 = VAR_2->wds;
 VAR_8 = VAR_2->x;
 VAR_9 = VAR_8 + VAR_6;
 VAR_7 = VAR_3->wds;
 VAR_10 = VAR_3->x;
 VAR_11 = VAR_10 + VAR_7;
 VAR_12 = VAR_4->x;
 VAR_13 = 0;
 do {
  VAR_14 = *VAR_8++ - *VAR_10++ - VAR_13;
  VAR_13 = (VAR_14 & 0x10000) >> 16;
  *VAR_12++ = VAR_14 & 0xffff;
  }
  while(VAR_10 < VAR_11);
 while(VAR_8 < VAR_9) {
  VAR_14 = *VAR_8++ - VAR_13;
  VAR_13 = (VAR_14 & 0x10000) >> 16;
  *VAR_12++ = VAR_14 & 0xffff;
  }


 while(!*--VAR_12)
  VAR_6--;
 VAR_4->wds = VAR_6;
 return VAR_4;
 }
