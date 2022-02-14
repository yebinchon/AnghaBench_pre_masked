
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;

int
FUNC_2(char *VAR_1, char **VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;

  VAR_5 = 0;
  while (*VAR_1) {
    VAR_1 += FUNC_1(VAR_1, " \t");
    if (*VAR_1 == '#' && !(VAR_4 & VAR_0)) {
      *VAR_1 = '\0';
      break;
    }
    if (*VAR_1) {
      if (VAR_5 >= VAR_3 - 1)
        break;
      *VAR_2++ = VAR_1;
      VAR_5++;
      VAR_1 = FUNC_0(VAR_1, VAR_4);
      if (VAR_1 == ((void*)0))
        return -1;
      else if (!(VAR_4 & VAR_0) && *VAR_1 == '#')
        *VAR_1 = '\0';
      else if (*VAR_1)
        *VAR_1++ = '\0';
    }
  }
  *VAR_2 = ((void*)0);
  return VAR_5;
}
