
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_1, char *VAR_2)
{
  char *VAR_3, *VAR_4, *VAR_5;
  int VAR_6 = 0;

  if ((VAR_1 == ((void*)0)) || (*VAR_1 == '\0'))
    return 1;

  VAR_3 = FUNC_3 (VAR_1);
  if ((VAR_4 = FUNC_5 (VAR_3, "//")) == ((void*)0))
    goto clean;

  VAR_4 += 2;
  if ((VAR_6 = FUNC_4 (VAR_4)) == 0)
    goto clean;

  if ((VAR_5 = FUNC_2 (VAR_4, '/')) != ((void*)0))
    VAR_6 = VAR_5 - VAR_4;

  if (VAR_6 == 0)
    goto clean;

  if (VAR_6 >= VAR_0)
    VAR_6 = VAR_0;

  FUNC_1 (VAR_2, VAR_4, VAR_6);
  VAR_2[VAR_6] = '\0';
  FUNC_0 (VAR_3);
  return 0;
clean:
  FUNC_0 (VAR_3);

  return 1;
}
