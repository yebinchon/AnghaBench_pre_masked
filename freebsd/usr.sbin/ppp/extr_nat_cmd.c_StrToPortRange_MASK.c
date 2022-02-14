
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int FUNC_0 (char const*,int *,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, u_short *VAR_1, u_short *VAR_2, const char *VAR_3)
{
  char *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_1(VAR_0, '-');
  if (VAR_4)
    *VAR_4 = '\0';

  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);

  if (VAR_4)
    *VAR_4 = '-';

  if (VAR_5 == 0) {
    if (VAR_4)
      VAR_5 = FUNC_0(VAR_4 + 1, VAR_2, VAR_3);
    else
      *VAR_2 = *VAR_1;
  }

  return VAR_5;
}
