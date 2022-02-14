
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, int VAR_1, char *VAR_2, int VAR_3

         , u_char VAR_4, int VAR_5

        )
{
  int VAR_6;

  if (VAR_1 != VAR_3)
    return 0;

  VAR_6 = 0;


  if (VAR_4 == 0x80) {
    VAR_6 = VAR_5 ? 0 : 24;
    VAR_1 = 24;
  }


  for (; VAR_1; VAR_6++, VAR_1--)
    if (FUNC_0(VAR_0[VAR_6]) != FUNC_0(VAR_2[VAR_6]))
      return 0;

  return 1;
}
