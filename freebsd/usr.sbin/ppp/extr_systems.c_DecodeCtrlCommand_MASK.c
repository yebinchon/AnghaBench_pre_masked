
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_3, char *VAR_4)
{
  const char *VAR_5;

  if (!FUNC_3(VAR_3, "include", 7) && FUNC_1(VAR_3[7])) {
    VAR_5 = FUNC_0(VAR_3+8, VAR_4);
    if (*VAR_5 && *VAR_5 != '#')
      FUNC_2(VAR_2, "usage: !include filename\n");
    else
      return VAR_0;
  }
  return VAR_1;
}
