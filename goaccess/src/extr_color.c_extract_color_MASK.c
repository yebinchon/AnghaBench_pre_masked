
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_3)
{
  char *VAR_4;
  int VAR_5 = 0;

  if (FUNC_1 (VAR_3, "color", 5) != 0)
    return -2;

  VAR_3 += 5;
  VAR_5 = FUNC_2 (VAR_3, &VAR_4, 10);
  if (VAR_3 == VAR_4 || *VAR_4 != '\0' || VAR_2 == VAR_1)
    return -2;

  if (VAR_5 > VAR_0)
    FUNC_0 ("Terminal doesn't support color: %d - max colors: %d", VAR_5, VAR_0);

  return VAR_5;
}
