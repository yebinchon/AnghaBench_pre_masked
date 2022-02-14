
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wint_t ;
typedef char wchar_t ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int,char*) ;
 char FUNC_1 () ;
 int FUNC_2 (char) ;
 int FUNC_3 (int,char) ;
 char* FUNC_4 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int,char*) ;

void
FUNC_7(int VAR_3)
{
 static wchar_t *VAR_4;
 static int VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 wint_t VAR_10;

 VAR_6 = VAR_8 = 0;
 while ((VAR_10 = FUNC_1()) != VAR_1) {
  if (VAR_10 == '\n') {
   FUNC_6(L"%.*ls\n", VAR_8, VAR_4);
   VAR_6 = VAR_8 = 0;
   continue;
  }
  if ((VAR_6 = FUNC_3(VAR_6, VAR_10)) > VAR_3) {
   if (VAR_2) {
    VAR_7 = VAR_8;
    while (--VAR_7 >= 0 && !FUNC_2(VAR_4[VAR_7]))
     ;
    VAR_9 = VAR_7;
   }
   if (VAR_2 && VAR_9 != -1) {
    VAR_9++;
    FUNC_6(L"%.*ls\n", VAR_9, VAR_4);
    FUNC_5(VAR_4, VAR_4 + VAR_9, VAR_8 - VAR_9);
    VAR_8 -= VAR_9;
    VAR_6 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
     VAR_6 = FUNC_3(VAR_6, VAR_4[VAR_7]);
   } else {
    FUNC_6(L"%.*ls\n", VAR_8, VAR_4);
    VAR_6 = VAR_8 = 0;
   }
   VAR_6 = FUNC_3(VAR_6, VAR_10);
  }
  if (VAR_8 + 1 > VAR_5) {
   VAR_5 += VAR_0;
   VAR_4 = FUNC_4(VAR_4, sizeof(*VAR_4) * VAR_5);
   if (VAR_4 == ((void*)0))
    FUNC_0(1, "realloc()");
  }
  VAR_4[VAR_8++] = VAR_10;
 }

 if (VAR_8 != 0)
  FUNC_6(L"%.*ls", VAR_8, VAR_4);
}
