
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* nextfu; } ;
struct TYPE_4__ {int bcnt; int reps; unsigned char* fmt; struct TYPE_4__* nextfu; } ;
typedef TYPE_1__ FU ;
typedef TYPE_2__ FS ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (scalar_t__,unsigned char) ;

int
FUNC_4(FS *VAR_1)
{
 FU *VAR_2;
 int VAR_3, VAR_4;
 unsigned char *VAR_5;
 int VAR_6;


 for (VAR_4 = 0, VAR_2 = VAR_1->nextfu; VAR_2; VAR_2 = VAR_2->nextfu) {
  if (VAR_2->bcnt) {
   VAR_4 += VAR_2->bcnt * VAR_2->reps;
   continue;
  }
  for (VAR_3 = VAR_6 = 0, VAR_5 = VAR_2->fmt; *VAR_5; ++VAR_5) {
   if (*VAR_5 != '%')
    continue;




   while (*++VAR_5 != 0 && FUNC_3(VAR_0 + 1, *VAR_5) != ((void*)0))
    ;
   if (*VAR_5 == 0)
    FUNC_1();
   if (*VAR_5 == '.' && FUNC_2(*++VAR_5)) {
    VAR_6 = FUNC_0(VAR_5);
    while (FUNC_2(*++VAR_5));
   }
   switch(*VAR_5) {
   case 'c':
    VAR_3 += 1;
    break;
   case 'd': case 'i': case 'o': case 'u':
   case 'x': case 'X':
    VAR_3 += 4;
    break;
   case 'e': case 'E': case 'f': case 'g': case 'G':
    VAR_3 += 8;
    break;
   case 's':
    VAR_3 += VAR_6;
    break;
   case '_':
    switch(*++VAR_5) {
    case 'c': case 'p': case 'u':
     VAR_3 += 1;
     break;
    }
   }
  }
  VAR_4 += VAR_3 * VAR_2->reps;
 }
 return (VAR_4);
}
