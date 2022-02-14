
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef int ULong ;
struct TYPE_6__ {int k; int wds; int maxwds; int* x; } ;
typedef TYPE_1__ Bigint ;


 TYPE_1__* FUNC_0 (struct dtoa_context*,int) ;
 int FUNC_1 (struct dtoa_context*,TYPE_1__*) ;

__attribute__((used)) static Bigint *
FUNC_2
 (struct dtoa_context* VAR_0, Bigint *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 Bigint *VAR_7;
 ULong *VAR_8, *VAR_9, *VAR_10, VAR_11;




 VAR_5 = VAR_2 >> 4;

 VAR_4 = VAR_1->k;
 VAR_6 = VAR_5 + VAR_1->wds + 1;
 for(VAR_3 = VAR_1->maxwds; VAR_6 > VAR_3; VAR_3 <<= 1)
  VAR_4++;
 VAR_7 = FUNC_0(VAR_0, VAR_4);
 VAR_9 = VAR_7->x;
 for(VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  *VAR_9++ = 0;
 VAR_8 = VAR_1->x;
 VAR_10 = VAR_8 + VAR_1->wds;
 if (VAR_2 &= 0xf) {
  VAR_4 = 16 - VAR_2;
  VAR_11 = 0;
  do {
   *VAR_9++ = *VAR_8 << VAR_2 & 0xffff | VAR_11;
   VAR_11 = *VAR_8++ >> VAR_4;
   }
   while(VAR_8 < VAR_10);
  if ((*VAR_9 = VAR_11))
   ++VAR_6;
  }

 else do
  *VAR_9++ = *VAR_8++;
  while(VAR_8 < VAR_10);
 VAR_7->wds = VAR_6 - 1;
 FUNC_1(VAR_0, VAR_1);
 return VAR_7;
 }
