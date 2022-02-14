
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t,int) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t,int) ;
 int FUNC_5 (int ,char*,char const*,char const*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*,size_t) ;
 char* FUNC_8 (char const*,char) ;

int FUNC_9(git_buf *VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 size_t VAR_8 = VAR_2->size, VAR_9, VAR_10, VAR_11 = 1, VAR_12, VAR_13;

 for (VAR_6 = VAR_4 = VAR_2->ptr, VAR_7 = VAR_5 = VAR_3; *VAR_4 && *VAR_5; VAR_4++, VAR_5++) {
  if (*VAR_4 == '/' && *VAR_5 == '/') {
   VAR_6 = VAR_4;
   VAR_7 = VAR_5;
  }
  else if (*VAR_4 != *VAR_5)
   break;
 }


 if ((VAR_6 == VAR_2->ptr || VAR_7 == VAR_3) &&
  (*VAR_6 != '/' || *VAR_7 != '/')) {
  FUNC_5(VAR_1,
   "%s is not a parent of %s", VAR_3, VAR_2->ptr);
  return VAR_0;
 }

 if (*VAR_4 == '/' && !*VAR_5)
  VAR_4++;
 else if (!*VAR_4 && *VAR_5 == '/')
  VAR_5++;
 else if (!*VAR_4 && !*VAR_5)
  return FUNC_2(VAR_2), 0;
 else {
  VAR_4 = VAR_6 + 1;
  VAR_5 = VAR_7 + 1;
 }

 VAR_8 -= (VAR_4 - VAR_2->ptr);

 if (!*VAR_5)
  return FUNC_3(VAR_2, VAR_4, VAR_8);

 for (; (VAR_5 = FUNC_8(VAR_5, '/')) && *(VAR_5 + 1); VAR_5++)
  VAR_11++;

 FUNC_1(&VAR_9, VAR_11, 3);
 FUNC_0(&VAR_9, VAR_9, VAR_8);

 FUNC_0(&VAR_10, VAR_9, 1);


 VAR_13 = VAR_4 - VAR_2->ptr;
 if (FUNC_4(VAR_2, VAR_10, 1) < 0)
  return -1;
 VAR_4 = VAR_2->ptr + VAR_13;

 FUNC_7(VAR_2->ptr + (VAR_11 * 3), VAR_4, VAR_8 + 1);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_6(VAR_2->ptr + (VAR_12 * 3), "../", 3);

 VAR_2->size = VAR_9;
 return 0;
}
