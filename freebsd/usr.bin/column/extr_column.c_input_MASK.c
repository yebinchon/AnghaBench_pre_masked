
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u_int ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int*,int,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int ** VAR_4 ;
 int * FUNC_4 (int) ;
 int VAR_5 ;
 int ** FUNC_5 (int **,int) ;
 int FUNC_6 (char*) ;
 int* FUNC_7 (int*,int) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*) ;

__attribute__((used)) static void
FUNC_11(FILE *VAR_6)
{
 static int VAR_7;
 int VAR_8;
 wchar_t *VAR_9, VAR_10[VAR_1];

 if (!VAR_4)
  if ((VAR_4 = FUNC_0((VAR_7 = VAR_0), sizeof(*VAR_4))) ==
      ((void*)0))
   FUNC_1(1, ((void*)0));
 while (FUNC_2(VAR_10, VAR_1, VAR_6)) {
  for (VAR_9 = VAR_10; *VAR_9 && FUNC_3(*VAR_9); ++VAR_9);
  if (!*VAR_9)
   continue;
  if (!(VAR_9 = FUNC_7(VAR_9, L'\n'))) {
   FUNC_6("line too long");
   VAR_3 = 1;
   continue;
  }
  *VAR_9 = L'\0';
  VAR_8 = FUNC_10(VAR_10);
  if (VAR_5 < VAR_8)
   VAR_5 = VAR_8;
  if (VAR_2 == VAR_7) {
   VAR_7 += VAR_0;
   if (!(VAR_4 = FUNC_5(VAR_4,
       (u_int)VAR_7 * sizeof(*VAR_4))))
    FUNC_1(1, ((void*)0));
  }
  VAR_4[VAR_2] = FUNC_4((FUNC_9(VAR_10) + 1) * sizeof(wchar_t));
  if (VAR_4[VAR_2] == ((void*)0))
   FUNC_1(1, ((void*)0));
  FUNC_8(VAR_4[VAR_2], VAR_10);
  VAR_2++;
 }
}
