
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_1, VAR_2, VAR_0))
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_1);
 while (VAR_3 > 0) {
  char VAR_4 = VAR_1[VAR_3 - 1];
  if (VAR_4 == '\n' || VAR_4 == '\r' || VAR_4 == ' ' || VAR_4 == '\t')
   VAR_1[--VAR_3] = 0;
  else
   break;
 }

 while (*VAR_1 == ' ' || *VAR_1 == '\t')
  VAR_1++;

 return VAR_1;
}
