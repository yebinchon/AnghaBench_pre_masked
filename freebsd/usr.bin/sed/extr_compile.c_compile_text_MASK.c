
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lbuf ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int,char*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char*,int) ;

__attribute__((used)) static char *
FUNC_5(void)
{
 int VAR_1, VAR_2, VAR_3;
 char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 char VAR_8[VAR_0 + 1];

 VAR_1 = 2 * VAR_0 + 1;
 if ((VAR_4 = FUNC_3(VAR_1)) == ((void*)0))
  FUNC_2(1, "malloc");
 VAR_3 = 0;
 while (FUNC_1(VAR_8, sizeof(VAR_8), ((void*)0)) != ((void*)0)) {
  VAR_6 = VAR_7 = VAR_4 + VAR_3;
  VAR_5 = VAR_8;



  for (VAR_2 = 0; *VAR_5 != '\0'; VAR_5++) {
   if (*VAR_5 == '\\' && VAR_5[1] != '\0' && *++VAR_5 == '\n')
    VAR_2 = 1;
   *VAR_7++ = *VAR_5;
  }
  VAR_3 += VAR_7 - VAR_6;
  if (!VAR_2) {
   *VAR_7 = '\0';
   break;
  }
  if (VAR_1 - VAR_3 < VAR_0 + 1) {
   VAR_1 *= 2;
   if ((VAR_4 = FUNC_4(VAR_4, VAR_1)) == ((void*)0))
    FUNC_2(1, "realloc");
  }
 }
 VAR_4[VAR_3] = '\0';
 if ((VAR_5 = FUNC_4(VAR_4, VAR_3 + 1)) == ((void*)0))
  FUNC_2(1, "realloc");
 return (VAR_5);
}
