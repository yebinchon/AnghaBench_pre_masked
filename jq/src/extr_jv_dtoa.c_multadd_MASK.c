
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef int ULong ;
typedef int ULLong ;
struct TYPE_8__ {int wds; int* x; int maxwds; scalar_t__ k; } ;
typedef TYPE_1__ Bigint ;


 TYPE_1__* FUNC_0 (struct dtoa_context*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (struct dtoa_context*,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static Bigint *
FUNC_3
 (struct dtoa_context* VAR_1, Bigint *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;




 ULong VAR_7, *VAR_8, VAR_9;




 Bigint *VAR_10;

 VAR_6 = VAR_2->wds;
 VAR_8 = VAR_2->x;
 VAR_5 = 0;
 VAR_7 = VAR_4;
 do {
  VAR_9 = *VAR_8 * VAR_3 + VAR_7;
  VAR_7 = VAR_9 >> 16;
  *VAR_8++ = VAR_9 & 0xffff;


  }
  while(++VAR_5 < VAR_6);
 if (VAR_7) {
  if (VAR_6 >= VAR_2->maxwds) {
   VAR_10 = FUNC_0(VAR_1, VAR_2->k+1);
   FUNC_1(VAR_10, VAR_2);
   FUNC_2(VAR_1, VAR_2);
   VAR_2 = VAR_10;
   }
  VAR_2->x[VAR_6++] = VAR_7;
  VAR_2->wds = VAR_6;
  }
 return VAR_2;
 }
