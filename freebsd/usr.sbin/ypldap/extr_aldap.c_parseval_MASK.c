
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hex ;


 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

char *
FUNC_3(char *VAR_0, size_t VAR_1)
{
 char VAR_2[3];
 char *VAR_3;
 size_t VAR_4, VAR_5;

 if ((VAR_3 = FUNC_0(1, VAR_1 + 1)) == ((void*)0))
  return ((void*)0);

 for (VAR_4 = VAR_5 = 0; VAR_5 < VAR_1; VAR_4++) {
  if (VAR_0[VAR_5] == '\\') {
   FUNC_1(VAR_2, VAR_0 + VAR_5 + 1, sizeof(VAR_2));
   VAR_3[VAR_4] = (char)FUNC_2(VAR_2, ((void*)0), 16);
   VAR_5 += 3;
  } else {
   VAR_3[VAR_4] = VAR_0[VAR_5];
   VAR_5++;
  }
 }

 return VAR_3;
}
