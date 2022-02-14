
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 char* FUNC_1 (int *,size_t*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,size_t) ;

__attribute__((used)) static char *
FUNC_4(FILE *VAR_1, size_t *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 static char *VAR_5;
 static size_t VAR_6;

 if ((VAR_3 = FUNC_1(VAR_1, &VAR_4)) == ((void*)0))
  return (((void*)0));

 if (VAR_3[VAR_4 - 1] != '\n')
  VAR_4++;
 if (VAR_4 + 1 > VAR_6) {
  do {
   VAR_6 += 1024;
  } while (VAR_4 + 1 > VAR_6);
  if ((VAR_5 = FUNC_3(VAR_5, VAR_6)) == ((void*)0))
   FUNC_0(VAR_0, ((void*)0));
 }
 FUNC_2(VAR_5, VAR_3, VAR_4 - 1);
 VAR_5[VAR_4 - 1] = '\n';
 VAR_5[VAR_4] = '\0';
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_4;
 return (VAR_5);
}
