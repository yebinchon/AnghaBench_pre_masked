
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;

int FUNC_5(git_buf *VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;

 FUNC_0(VAR_1);

 if (VAR_2 > VAR_1->size)
  VAR_2 = VAR_1->size;


 if (VAR_2 == 0)
  VAR_2 = FUNC_3(VAR_1->ptr) + 1;


 if (VAR_2 == 0) {
  for (VAR_6 = VAR_1->ptr; *VAR_6 && FUNC_1(*VAR_6); ++VAR_6);
  if (VAR_6[0] == ':' && VAR_6[1] == '/' && VAR_6[2] == '/')
   VAR_2 = (VAR_6 + 3) - VAR_1->ptr;
 }

 VAR_3 = VAR_4 = VAR_5 = VAR_1->ptr + VAR_2;

 while (*VAR_5) {
  for (VAR_6 = VAR_5; *VAR_6 && *VAR_6 != '/'; ++VAR_6);

  VAR_7 = VAR_6 - VAR_5;

  if (VAR_7 == 1 && VAR_5[0] == '.')
                                      ;

  else if (VAR_7 == 2 && VAR_5[0] == '.' && VAR_5[1] == '.') {

   if (VAR_4 == VAR_3 && VAR_2 != 0) {
    FUNC_2(VAR_0,
     "cannot strip root component off url");
    return -1;
   }



   if (VAR_4 == VAR_3) {
    if (*VAR_6 == '/')
     VAR_7++;

    if (VAR_4 != VAR_5)
     FUNC_4(VAR_4, VAR_5, VAR_7);

    VAR_4 += VAR_7;


    VAR_3 = VAR_4;
   } else {

    while (VAR_4 > VAR_3 && VAR_4[-1] == '/') VAR_4--;
    while (VAR_4 > VAR_3 && VAR_4[-1] != '/') VAR_4--;
   }
  } else {
   if (*VAR_6 == '/' && *VAR_5 != '/')
    VAR_7++;

   if (VAR_4 != VAR_5)
    FUNC_4(VAR_4, VAR_5, VAR_7);

   VAR_4 += VAR_7;
  }

  VAR_5 += VAR_7;

  while (*VAR_5 == '/') VAR_5++;
 }

 *VAR_4 = '\0';

 VAR_1->size = VAR_4 - VAR_1->ptr;

 return 0;
}
