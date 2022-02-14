
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef int ULong ;
typedef int ULLong ;
struct TYPE_6__ {int wds; int k; int maxwds; int* x; } ;
typedef TYPE_1__ Bigint ;


 TYPE_1__* FUNC_0 (struct dtoa_context*,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static Bigint *
FUNC_2
 (struct dtoa_context* VAR_1, Bigint *VAR_2, Bigint *VAR_3)
{
 Bigint *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 ULong *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 ULong VAR_16;



 ULong VAR_17, VAR_18;





 if (VAR_2->wds < VAR_3->wds) {
  VAR_4 = VAR_2;
  VAR_2 = VAR_3;
  VAR_3 = VAR_4;
  }
 VAR_5 = VAR_2->k;
 VAR_6 = VAR_2->wds;
 VAR_7 = VAR_3->wds;
 VAR_8 = VAR_6 + VAR_7;
 if (VAR_8 > VAR_2->maxwds)
  VAR_5++;
 VAR_4 = FUNC_0(VAR_1, VAR_5);
 for(VAR_9 = VAR_4->x, VAR_10 = VAR_9 + VAR_8; VAR_9 < VAR_10; VAR_9++)
  *VAR_9 = 0;
 VAR_10 = VAR_2->x;
 VAR_11 = VAR_10 + VAR_6;
 VAR_12 = VAR_3->x;
 VAR_13 = VAR_12 + VAR_7;
 VAR_15 = VAR_4->x;
 for(; VAR_12 < VAR_13; VAR_15++) {
  if ((VAR_16 = *VAR_12++)) {
   VAR_9 = VAR_10;
   VAR_14 = VAR_15;
   VAR_17 = 0;
   do {
    VAR_18 = *VAR_9++ * VAR_16 + *VAR_14 + VAR_17;
    VAR_17 = VAR_18 >> 16;
    *VAR_14++ = VAR_18 & 0xffff;
    }
    while(VAR_9 < VAR_11);
   *VAR_14 = VAR_17;
   }
  }


 for(VAR_15 = VAR_4->x, VAR_14 = VAR_15 + VAR_8; VAR_8 > 0 && !*--VAR_14; --VAR_8) ;
 VAR_4->wds = VAR_8;
 return VAR_4;
 }
