
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef int ULong ;
struct TYPE_6__ {int* x; int wds; } ;
typedef int Long ;
typedef TYPE_1__ Bigint ;


 TYPE_1__* FUNC_0 (struct dtoa_context*,int) ;
 TYPE_1__* FUNC_1 (struct dtoa_context*,TYPE_1__*,int,int ) ;

__attribute__((used)) static Bigint *
FUNC_2
 (struct dtoa_context* VAR_0, const char *VAR_1, int VAR_2, int VAR_3, ULong VAR_4, int VAR_5)
{
 Bigint *VAR_6;
 int VAR_7, VAR_8;
 Long VAR_9, VAR_10;

 VAR_9 = (VAR_3 + 8) / 9;
 for(VAR_8 = 0, VAR_10 = 1; VAR_9 > VAR_10; VAR_10 <<= 1, VAR_8++) ;





 VAR_6 = FUNC_0(VAR_0, VAR_8+1);
 VAR_6->x[0] = VAR_4 & 0xffff;
 VAR_6->wds = (VAR_6->x[1] = VAR_4 >> 16) ? 2 : 1;


 VAR_7 = 9;
 if (9 < VAR_2) {
  VAR_1 += 9;
  do VAR_6 = FUNC_1(VAR_0, VAR_6, 10, *VAR_1++ - '0');
   while(++VAR_7 < VAR_2);
  VAR_1 += VAR_5;
  }
 else
  VAR_1 += VAR_5 + 9;
 for(; VAR_7 < VAR_3; VAR_7++)
  VAR_6 = FUNC_1(VAR_0, VAR_6, 10, *VAR_1++ - '0');
 return VAR_6;
 }
