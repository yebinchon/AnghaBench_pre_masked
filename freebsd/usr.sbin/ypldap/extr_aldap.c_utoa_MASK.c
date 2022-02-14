
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char) ;

char *
FUNC_3(char *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 char *VAR_4;


 for (VAR_1 = 0, VAR_2 = 0; VAR_0[VAR_2] != '\0'; VAR_2++)
  if (!FUNC_2(VAR_0[VAR_2]))
   VAR_1++;

 if ((VAR_4 = FUNC_0(VAR_1 + 1, sizeof(char))) == ((void*)0))
  return ((void*)0);


 for (VAR_2 = 0, VAR_3 = 0; VAR_0[VAR_2] != '\0'; VAR_2++)
  if (!FUNC_2(VAR_0[VAR_2]))
   VAR_4[VAR_3++] = FUNC_1((unsigned char)VAR_0[VAR_2]) ? VAR_0[VAR_2] : '?';

 return VAR_4;
}
