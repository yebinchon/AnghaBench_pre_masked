
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {unsigned char* cstr; int * wstr; } ;
struct bwstring {int len; TYPE_1__ data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 double FUNC_4 (char*,char**) ;
 double FUNC_5 (int *,int **) ;

double
FUNC_6(struct bwstring *VAR_1, bool *VAR_2)
{
 double VAR_3 = 0;

 if (VAR_0 == 1) {
  unsigned char *VAR_4, *VAR_5;
  char *VAR_6;

  VAR_5 = VAR_1->data.cstr;
  VAR_4 = VAR_5 + VAR_1->len;
  VAR_6 = ((void*)0);

  while (FUNC_0(*VAR_5) && VAR_5 < VAR_4)
   ++VAR_5;

  if (!FUNC_1(*VAR_5)) {
   *VAR_2 = 1;
   return (0);
  }

  VAR_3 = FUNC_4((char*)VAR_5, &VAR_6);
  if ((unsigned char*) VAR_6 == VAR_5) {
   *VAR_2 = 1;
   return (0);
  }
 } else {
  wchar_t *VAR_7, *VAR_8, *VAR_9;

  VAR_9 = VAR_1->data.wstr;
  VAR_7 = VAR_9 + VAR_1->len;
  VAR_8 = ((void*)0);

  while (FUNC_2(*VAR_9) && VAR_9 < VAR_7)
   ++VAR_9;

  if (!FUNC_3(*VAR_9)) {
   *VAR_2 = 1;
   return (0);
  }

  VAR_3 = FUNC_5(VAR_9, &VAR_8);
  if (VAR_8 == VAR_9) {
   *VAR_2 = 1;
   return (0);
  }
 }

 *VAR_2 = 0;
 return (VAR_3);
}
