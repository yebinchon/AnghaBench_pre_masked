
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 char** VAR_2 ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void
FUNC_2(char *VAR_3)
{
 char *VAR_4;
 char **VAR_5 = VAR_2;

 VAR_1 = 0;
 if ((VAR_4 = FUNC_1(VAR_3, '\n')) != ((void*)0))
  *VAR_4 = '\0';
 for (VAR_4 = VAR_3; VAR_1 < VAR_0 - 1 && *VAR_4 != '\0';) {
  while (FUNC_0(*VAR_4))
   VAR_4++;
  if (*VAR_4 == '\0')
   break;
  *VAR_5++ = VAR_4;
  VAR_1 += 1;
  while (*VAR_4 != '\0' && !FUNC_0(*VAR_4))
   VAR_4++;
  if (*VAR_4 == '\0')
   break;
  *VAR_4++ = '\0';
 }
 *VAR_5++ = 0;
}
