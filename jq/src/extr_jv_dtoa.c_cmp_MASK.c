
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
typedef scalar_t__ ULong ;
struct TYPE_4__ {int wds; scalar_t__* x; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1
 (struct dtoa_context* VAR_0, Bigint *VAR_1, Bigint *VAR_2)
{
 ULong *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_1->wds;
 VAR_8 = VAR_2->wds;






 if (VAR_7 -= VAR_8)
  return VAR_7;
 VAR_4 = VAR_1->x;
 VAR_3 = VAR_4 + VAR_8;
 VAR_6 = VAR_2->x;
 VAR_5 = VAR_6 + VAR_8;
 for(;;) {
  if (*--VAR_3 != *--VAR_5)
   return *VAR_3 < *VAR_5 ? -1 : 1;
  if (VAR_3 <= VAR_4)
   break;
  }
 return 0;
 }
