
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {char* cstr; int* wstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;
typedef int FILE ;


 size_t FUNC_0 (struct bwstring*) ;
 int VAR_0 ;
 int FUNC_1 (char) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,size_t,int,int *) ;

size_t
FUNC_5(struct bwstring *VAR_1, FILE *VAR_2, bool VAR_3)
{

 if (VAR_0 == 1) {
  size_t VAR_4 = VAR_1->len;

  if (!VAR_3) {
   VAR_1->data.cstr[VAR_4] = '\n';

   if (FUNC_4(VAR_1->data.cstr, VAR_4 + 1, 1, VAR_2) < 1)
    FUNC_2(2, ((void*)0));

   VAR_1->data.cstr[VAR_4] = '\0';
  } else if (FUNC_4(VAR_1->data.cstr, VAR_4 + 1, 1, VAR_2) < 1)
   FUNC_2(2, ((void*)0));

  return (VAR_4 + 1);

 } else {
  wchar_t VAR_5;
  size_t VAR_6 = 0;

  VAR_5 = VAR_3 ? FUNC_1('\0') : FUNC_1('\n');

  while (VAR_6 < FUNC_0(VAR_1)) {
   const wchar_t *VAR_7 = VAR_1->data.wstr + VAR_6;

   if (*VAR_7 == L'\0') {
    int VAR_8;

    VAR_8 = FUNC_3(VAR_2, L"%lc", *VAR_7);

    if (VAR_8 != 1)
     FUNC_2(2, ((void*)0));
    ++VAR_6;
   } else {
    int VAR_9;

    VAR_9 = FUNC_3(VAR_2, L"%ls", VAR_7);

    if (VAR_9 < 1)
     FUNC_2(2, ((void*)0));
    VAR_6 += VAR_9;
   }
  }
  FUNC_3(VAR_2, L"%lc", VAR_5);
  return (VAR_6 + 1);
 }
}
