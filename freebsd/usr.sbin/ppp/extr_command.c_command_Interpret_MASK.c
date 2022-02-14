
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char**,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;

int
FUNC_2(char *VAR_2, int VAR_3, char *VAR_4[VAR_0])
{
  char *VAR_5;

  if (VAR_3 > 0) {
    VAR_5 = VAR_2 + FUNC_1(VAR_2, "\r\n");
    if (VAR_5)
      *VAR_5 = '\0';
    return FUNC_0(VAR_2, VAR_4, VAR_0, VAR_1);
  }
  return 0;
}
