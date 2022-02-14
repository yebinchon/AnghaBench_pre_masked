
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char**,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_3, const char *VAR_4, int VAR_5)
{
  char *VAR_6[VAR_1];
  int VAR_7, VAR_8;

  VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_1, VAR_2);

  if (VAR_7 == 2 && !FUNC_2(VAR_6[1], ":"))
    return VAR_6[0];

  if (VAR_7 != 1 || (VAR_8 = FUNC_3(VAR_6[0])) < 2 || VAR_6[0][VAR_8-1] != ':') {
      FUNC_1(VAR_0, "Bad label in %s (line %d) - missing colon\n",
                 VAR_4, VAR_5);
      return ((void*)0);
  }
  VAR_6[0][VAR_8-1] = '\0';

  return VAR_6[0];
}
