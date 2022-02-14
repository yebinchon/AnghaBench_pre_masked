
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3, char **VAR_4, char **VAR_5, int *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;

 if (*VAR_3 == '\0')
  return (VAR_0);

 VAR_8 = FUNC_1(VAR_3, ':');
 VAR_9 = FUNC_1(VAR_3, '=');
 if (VAR_8 == ((void*)0) && VAR_9 == ((void*)0))
  return (VAR_0);
 if (VAR_8 == VAR_3 || VAR_9 == VAR_3)
  return (VAR_0);
 if (VAR_8 != ((void*)0) && VAR_9 != ((void*)0) && VAR_9 < VAR_8)
  return (VAR_0);

 if (VAR_8 != ((void*)0))
  *VAR_8++ = '\0';
 if (VAR_9 != ((void*)0))
  *VAR_9++ = '\0';

 *VAR_4 = VAR_3;
 if (VAR_8 != ((void*)0)) {

  if (*VAR_8 == '\0')
   return (VAR_0);
  *VAR_6 = FUNC_4(VAR_8, &VAR_7, 0);
  if (*VAR_7 != '\0')
   return (VAR_0);
  if (*VAR_6 <= 0 || *VAR_6 > VAR_2)
   return (VAR_0);
  *VAR_5 = FUNC_0(*VAR_6, sizeof(char));
  if (*VAR_5 == ((void*)0))
   return (VAR_1);
  if (VAR_9 != ((void*)0)) {
   if (FUNC_3(VAR_9) >= VAR_2)
    return (VAR_1);
   FUNC_2(*VAR_5, VAR_9);
  }
 } else {

  *VAR_6 = -1;
  if (*VAR_9 == '\0')
   return (VAR_0);
  *VAR_5 = VAR_9;
 }

 return (0);
}
