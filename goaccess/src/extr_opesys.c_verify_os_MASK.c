
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int **) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int ** VAR_1 ;
 char* FUNC_2 (char const*,char*,char*,size_t) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,char*,int ) ;

char *
FUNC_5 (const char *VAR_2, char *VAR_3)
{
  char *VAR_4;
  size_t VAR_5;

  if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
    return ((void*)0);

  for (VAR_5 = 0; VAR_5 < FUNC_0 (VAR_1); VAR_5++) {
    if ((VAR_4 = FUNC_3 (VAR_2, VAR_1[VAR_5][0])) != ((void*)0))
      return FUNC_2 (VAR_2, VAR_4, VAR_3, VAR_5);
  }
  FUNC_4 (VAR_3, "Unknown", VAR_0);

  return FUNC_1 ("Unknown");
}
