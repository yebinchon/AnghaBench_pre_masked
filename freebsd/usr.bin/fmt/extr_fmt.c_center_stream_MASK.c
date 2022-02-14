
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_2, const char *VAR_3)
{
 wchar_t *VAR_4, *VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 int VAR_8;

 while ((VAR_4 = FUNC_1(VAR_2, &VAR_6)) != ((void*)0)) {
  size_t VAR_9 = VAR_6;

  while (VAR_9 > 0 && FUNC_2(*VAR_4)) {
   ++VAR_4;
   --VAR_9;
  }
  VAR_6 = VAR_9;
  for (VAR_5 = VAR_4, VAR_7 = 0; VAR_5 < &VAR_4[VAR_6]; VAR_5++)
   VAR_7 += (VAR_8 = FUNC_5(*VAR_5)) > 0 ? VAR_8 : 1;
  VAR_9 = VAR_7;
  while (VAR_9 < VAR_0) {
   FUNC_3(' ');
   VAR_9 += 2;
  }
  FUNC_6(L"%.*ls\n", (int)VAR_6, VAR_4);
 }
 if (FUNC_0(VAR_2)) {
  FUNC_4("%s", VAR_3);
  ++VAR_1;
 }
}
