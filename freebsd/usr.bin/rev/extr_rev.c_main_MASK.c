
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char) ;
 int FUNC_8 (int ,char*) ;
 int * VAR_2 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char const*) ;

int
FUNC_11(int VAR_3, char *VAR_4[])
{
 const char *VAR_5;
 wchar_t *VAR_6, *VAR_7;
 FILE *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 FUNC_8(VAR_0, "");

 while ((VAR_10 = FUNC_6(VAR_3, VAR_4, "")) != -1)
  switch(VAR_10) {
  case '?':
  default:
   FUNC_9();
  }

 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;

 VAR_8 = VAR_2;
 VAR_5 = "stdin";
 VAR_11 = 0;
 do {
  if (*VAR_4) {
   if ((VAR_8 = FUNC_5(*VAR_4, "r")) == ((void*)0)) {
    FUNC_10("%s", *VAR_4);
    VAR_11 = 1;
    ++VAR_4;
    continue;
   }
   VAR_5 = *VAR_4++;
  }
  while ((VAR_6 = FUNC_4(VAR_8, &VAR_9)) != ((void*)0)) {
   if (VAR_6[VAR_9 - 1] == '\n')
    --VAR_9;
   for (VAR_7 = VAR_6 + VAR_9 - 1; VAR_7 >= VAR_6; --VAR_7)
    FUNC_7(*VAR_7);
   FUNC_7('\n');
  }
  if (FUNC_3(VAR_8)) {
   FUNC_10("%s", VAR_5);
   FUNC_0(VAR_8);
   VAR_11 = 1;
  }
  (void)FUNC_2(VAR_8);
 } while(*VAR_4);
 FUNC_1(VAR_11);
}
