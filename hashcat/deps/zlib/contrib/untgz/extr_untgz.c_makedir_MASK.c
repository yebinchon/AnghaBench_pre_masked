
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

int FUNC_5 (char *VAR_4)
{
  char *VAR_5 = FUNC_3(VAR_4);
  char *VAR_6;
  int VAR_7 = FUNC_4(VAR_5);

  if (VAR_7 <= 0) {
    FUNC_1(VAR_5);
    return 0;
  }
  if (VAR_5[VAR_7-1] == '/') {
    VAR_5[VAR_7-1] = '\0';
  }
  if (FUNC_2(VAR_5, 0755) == 0)
    {
      FUNC_1(VAR_5);
      return 1;
    }

  VAR_6 = VAR_5+1;
  while (1)
    {
      char VAR_8;

      while(*VAR_6 && *VAR_6 != '\\' && *VAR_6 != '/')
        VAR_6++;
      VAR_8 = *VAR_6;
      *VAR_6 = 0;
      if ((FUNC_2(VAR_5, 0755) == -1) && (VAR_1 == VAR_0))
        {
          FUNC_0(VAR_3,"%s: Couldn't create directory %s\n",VAR_2,VAR_5);
          FUNC_1(VAR_5);
          return 0;
        }
      if (VAR_8 == 0)
        break;
      *VAR_6++ = VAR_8;
    }
  FUNC_1(VAR_5);
  return 1;
}
