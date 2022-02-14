
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char const*,int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_3, const char *VAR_4, int VAR_5)
{
  int VAR_6, VAR_7 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_5;) {
    VAR_7 = FUNC_0 (VAR_3, VAR_4 + VAR_6, VAR_5 - VAR_6);
    if (VAR_7 < 0) {
      if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
        continue;
      return -1;
    } else {
      VAR_6 += VAR_7;
    }
  }

  return VAR_6;
}
